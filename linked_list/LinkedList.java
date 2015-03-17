/* Implements a general linked list using templates
*/

public class LinkedList<T> {
	
	public Node<T> head;
	
	public LinkedList(T data) {
		head = new Node<T>(data);
	}
	
	public void insert(T data) {
		Node<T> temp = head;
		while (temp.next != null) {
			temp = temp.next;
		}
		temp.next = new Node<T>(data);
	}
	
	public void delete(T data) {
		Node<T> temp = head;
		while (temp.next != null) {
			if (temp.next.data.equals(data)) {
				temp.next = temp.next.next;
				return;
			}
			temp = temp.next;
		}
		System.out.println(data + " not found.");
	}
	
	public void printList() {
		Node<T> temp = head;
		while (temp != null) {
			System.out.print(temp.data + " -> ");
			temp = temp.next;
		}
		System.out.println("NULL");
	}
	
	public static void main(String[] args) {
		LinkedList<String> list = new LinkedList<String>("Daniel");
		System.out.println(list.head.data);
		list.insert("Cohen");
		list.insert("Jordan");
		list.printList();
		list.delete("Cohen");
		list.printList();
	}
}