public class DoubleListImpl implements DoubleList{
    class Node{
        private int data;
        private Node prior;
        private Node next;
        public Node(int data){
            this.data = data;
            this.prior = null;
            this.next = null;
        }
    }
    private Node head;
    private Node last;
    public DoubleListImpl(){
        this.head = null;
        this.last = null;
    }
    //头插法
    public void addFirst(int data){
        Node node = new Node(data);
        if(head == null){
            head = node;
            node.next = null;
            node.prior = null;
        }else{
            node.next = head;
            node.prior = null;
            head.prior = node;
            head = node;
            last = node;
        }
    }
    //尾插法
    public void addLast(int data){
        Node node = new Node(data);
        Node cur = head;
        if(cur == null){
            this.head = node;
            this.last = node;
        }else{
            this.last.next = node;
            node.prior = this.last;
            last = node;
            }
        }

        private  Node searchIndex(int index){
            if(index < 0 || index > getLength()){
                throw new IndexOutOfBoundsException("下标不合法");
            }
            Node cur = this.head;
            int count = 0;
            while(count < index){
                cur = cur.next;
                count++;
            }
            return cur;
        }

    //任意位置插入,第一个数据节点为0号下标
    public boolean addindex(int index,int data){
        Node node = new Node(data);
        if(index == 0){
            addFirst(data);
            return true;
        }else if(index == getLength()){
            addLast(data);
            return true;
        }else {
            Node cur = searchIndex(index);
            node.next = cur;
            cur.prior.next = node;
            node.prior = cur.prior;
            cur.prior = node;
            return true;
        }
    }

    //查找是否包含关键字key是否在单链表当中
    //删除第一次出现关键字为key的节点
    public int remove(int key){
        Node cur = this.head;
        int oldData = 0;
        while(cur != null){
            if(cur.data == key){
                oldData = cur.data;
                if(cur == head){
                    this.head = this.head.next;
                    this.head.prior = null;
                }else{
                    cur.prior.next = cur.next;
                    if(cur.next != null){
                        cur.next.prior = cur.prior;
                    }else{
                        this.last = cur.prior;
                    }
                }
            }
            cur = cur.next;
        }
        return oldData;
    }
    //删除所有值为key的节点
    public void removeAllKey(int key){
        Node cur = this.head;
        while(cur != null){
            if(cur == head){
                this.head = this.head.next;
                this.head.prior = null;
            }else{
                cur.prior.next = cur.next;
                if(cur.next != null){
                    cur.next.prior = cur.prior;
                }else{
                    this.last = cur.prior;
                }
            }
        }
    }
    //得到单链表的长度
    public int getLength(){
        Node cur = this.head;
        int count = 0;
        while(cur != null){
            count++;
            cur = cur.next;
        }
        return count;
    }
    public void display(){
        Node cur = this.head;
        while(cur != null){
            System.out.print(cur.data+" ");
            cur = cur.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        DoubleListImpl my = new DoubleListImpl();
        my.addFirst(15);
        my.addFirst(16);
        my.addFirst(99);
        my.display();
    }
}
