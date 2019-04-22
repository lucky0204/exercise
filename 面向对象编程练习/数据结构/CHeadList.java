public class CHeadList implements CLinkList{

        class Node{
            private int data;
            private Node next;

            public Node(int data) {
                this.data = data;
                this.next = null;
            }
        }
        private Node head;
        public CHeadList(){
            head = new Node(-1);
            head.next = head;
        }
        public void addFirst(int data){
            Node node = new Node(data);
            node.next = head.next;
            head.next = node;
        }
        public void addLast(int data){
            Node node = new Node(data);
            Node cur = this.head;
            while(cur.next != this.head){
                cur = cur.next;
            }
            node.next = this.head;
            cur.next = node;

        }

        public boolean addindex(int index,int data){
            Node cur = this.head;
            for(int i = 0; i < index; i++){
                cur = cur.next;
            }
            Node node = new Node(data);
            node.next = node.next;
            node.next = node;
            return true;
        }
        public boolean contains(int key) {
            Node cur = this.head.next;
            while (cur.next != head) {
                if (cur.data == key) {
                    return true;
                }
            }
            if (head.data == key) {
                return true;
            }
            return false;
        }
        private Node searchPre(int key){
            Node pre = this.head;
            while(pre.next != head){
                if(pre.next.data == key){
                    return pre;
                }
                pre = pre.next;
            }
            return null;
        }

    public int remove(int key){
        Node pre = searchPre(key);
        if(pre == null){
            throw new UnsupportedOperationException("key没找到");
        }
        int oldData = 0;
        pre.next = pre.next.next;
        oldData = pre.next.data;
        return oldData;
    }
    public void removeAllKey(int key){
        Node pre = this.head;
        Node cur = this.head.next;
        while(cur != head){
            if(cur.data == key){
                pre.next = cur.next;
                cur = cur.next;
            }else{
                pre = cur;
                cur = cur.next;
            }
        }
    }

    public void clear(){
        while(this.head != null){
            Node cur = this.head.next;
            this.head.next = null;
            this.head = cur;
        }
    }
    public int getLength(){
        Node cur = this.head.next;
        int count = 0;
        while(cur != head){
            count++;
            cur = cur.next;
        }
        return count;
    }
    public void display(){
        Node cur = this.head.next;
        while(cur != head){
            System.out.print(cur.data+" ");
            cur = cur.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        CHeadList my = new CHeadList();
        my.addFirst(11);
        my.addFirst(13);
        my.display();
    }
}

