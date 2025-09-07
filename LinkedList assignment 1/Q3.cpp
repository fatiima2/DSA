//#include<iostream>
//using namespace std;
//class Node {
//public:
//	int data;
//	Node* next;
//};
//class LinkedList {
//public:
//	Node* head = NULL;
//    void createNode(int data)
//	{
//		Node* node = new Node();
//		node->data = data;
//		node->next = head;
//		head = node;
//    }
//	void linkedListReverse()
//	{	
//		Node* temp = head;
//		Node* prev = NULL;
//		Node* Next = NULL;
//		while (temp!=NULL)
//		{
//			Next = temp->next;
//			temp->next = prev;
//			prev = temp;
//			temp = Next;
//		}
//		
//	}
//	void printLinkedList()
//	{
//		Node *temp = head;
//		while (temp != NULL)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//		cout << endl;
//	}
//};
//int main()
//{
//	LinkedList list;
//	list.createNode(89);
//	list.createNode(20);
//	list.createNode(15);
//	list.createNode(50);
//	list.createNode(25);
//	list.createNode(80);
//	cout << "Original Linked List: \n";
//	list.printLinkedList();
//	cout << "Reversed Linked List: \n";
//	list.linkedListReverse();
//	list.printLinkedList();
//
//
//}