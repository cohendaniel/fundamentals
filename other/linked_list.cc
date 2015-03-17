#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Node {
	public:
		int data;
		Node* next;
		Node (int d) {
			this->data = d;
			this->next = NULL;
		}
};

void append_tail(Node* head, int data);
Node* append_head (Node* head, int data);
void delete_tail(Node* head);
Node* delete_head(Node* head);
void print_list(Node* head);

int main(int argc, char *argv[]){
	Node* head = new Node(1);
	append_tail(head, 2);
	head = append_head(head, 3);
	print_list(head);
	delete_tail(head);
	print_list(head);
}

void print_list(Node* head) {
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " --> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

void append_tail(Node* head, int data) {
	Node* newNode = new Node(data);
	Node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
}

void delete_tail(Node* head) {
	Node* temp = head;
	Node* prev;
	while (temp -> next != NULL) {
		prev = temp;
		temp = temp->next;
	}
	delete(prev->next);
	prev->next = NULL;
}

Node* append_head (Node* head, int data) {
	Node* newNode = new Node(data);
	newNode->next = head;
	return newNode;
}

Node* delete_head(Node* head) {
	Node* temp = head->next;
	delete(head);
	return temp;
}