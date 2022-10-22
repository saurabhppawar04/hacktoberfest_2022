public class LinkedList{
 
	private Node head;
     
	private static class Node {
	    private int val;
	    private Node next;
     
	    Node(int val) {
		this.val = val;
     
	    }
	}
     
	public void insetInList(Node node) {
     
	    if (head == null) {
		head = node;
	    } else {
		Node temp = head;
		while (temp.next != null)
		    temp = temp.next;
     
		temp.next = node;
	    }
	}
     
	public void printLinkedList(Node head) {
	    Node temp = head;
	    while (temp != null) {
		System.out.format("%d ", temp.val);
		temp = temp.next;
	    }
	    System.out.println();
	}
     
	public static Node reverseLinkedList(Node currNode)
	{
	    Node prevNode=null;
	    Node nextNode;
	    while(currNode!=null)
	    {
		nextNode=currNode.next;
		currNode.next=prevNode;
		prevNode=currNode;
		currNode=nextNode;
	    }
	    return prevNode;
	}
     
	public static void main(String[] args) {
	    LinkedList list = new LinkedList();
	    Node head=new Node(1);
	    list.insetInList(head);
	    list.insetInList(new Node(2));
	    list.insetInList(new Node(3));
	    list.insetInList(new Node(4));
	    list.insetInList(new Node(5));
	    list.printLinkedList(head);
	    Node reverseHead=reverseLinkedList(head);
	    System.out.println("After reversing the linked list");
	    list.printLinkedList(reverseHead);
	}
    }
