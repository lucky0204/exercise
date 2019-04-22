public class MySingLeListImpl {
    class Node {
        public int data;
        public Node next;

        public Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    private Node head;

    public MySingLeListImpl() {
        this.head = null;
    }

    public void addFirst(int data) {
        Node node = new Node(data);
        if (this.head == null) {
            this.head = node;
        } else {
            node.next = head;
            head = node;
        }
    }

    public void addLast(int data) {
        Node node = new Node(data);
        Node cur = head;
        if (head == null) {
            this.head = node;
        } else {
            while (cur.next != null) {
                cur = cur.next;
            }
            cur.next = node;
            node.next = null;
        }
    }

    public void display() {
        Node cur = head;
        while (cur != null) {
            System.out.print(cur.data + "   ");
            cur = cur.next;
        }
    }

    public void addindex(int index, int data) throws Exception {
        Node node = new Node(data);
        int count = 0;
        Node cur = head;
        if (index < 0 || index > getLength()) {

            throw new Exception("A的值应该大于零");

        } else {
            while (count < index - 1) {
                cur = cur.next;
                count++;
            }
            node.next = cur.next;
            cur.next = node;
        }

    }

    public boolean contains(int key) {
        Node cur = head;
        while (cur != null) {
            if (cur.data == key) {
                return true;
            }
            cur = cur.next;
        }
        return false;
    }


    public int getLength() {
        Node cur = head;
        int count = 0;
        while (cur != null) {
            count++;
            cur = cur.next;
        }
        return count;
    }




    public void removeAllKey(int key) {
        Node pre = this.head;
        Node cur = this.head;
        while(cur != null){
            if(cur.data == key){
                pre.next = cur.next;
                cur = cur.next;
            }else {
                pre = cur;
                cur = cur.next;
            }
        }
        if(this.head.data == key){
            head = head.next;
        }
    }


    public void clear() {
        while(head != null){
            Node cur =head.next;
            head.next = null;
            head = cur;
        }
    }


    private Node searchPre(int key) {
        Node pre = this.head;
        if (pre.data == key) {
            return this.head;
        } else {
            while (pre.next != null) {
                if (pre.next.data == key) {
                    return pre;
                }
                pre = pre.next;
            }
        }
        return null;
    }
    public int remove(int key){
        int oldData = 0;
        Node pre = searchPre(key);
        if(pre == null){
            try {
                throw new Exception("没有找到");
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        if(pre == this.head && pre.data == key){
            Node delnode = pre.next;
            pre.next = delnode.next;
            return oldData;
        }
        return oldData;
    }


    public Node middleNode(Node head){
        int mid = getLength()/2;
        Node cur = head;
        for(int i = 0; i < mid; i++){
            cur = cur.next;
        }
        return cur;
    }

    public static void main(String[] args) {
        MySingLeListImpl my = new MySingLeListImpl();
        my.addFirst(12);
        my.addFirst(14);
        my.addFirst(199);
        my.addFirst(199);
        my.addLast(199);
        my.addLast(199);
        my.addLast(66);
        my.addLast(199);
        my.display();
        my.removeAllKey(199);
        System.out.println();
        my.display();
        my.clear();
        System.out.println();
        my.display();
    }
}


