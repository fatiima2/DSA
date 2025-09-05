//#include<iostream>
//using namespace std;
//class Node {
//public:
//	int data;
//	Node* next;
//};
//class LinkedList
//{
//public:
//	Node* head=NULL;
//	
//	void insertAtStart(int data)
//	{
//		Node* temp = new Node();
//		temp->data = data;
//		temp->next = head;
//		head = temp;
//	}
//	
//	void delFromSortedLinkedList()
//	{
//		Node* node = head;
//		Node* temp1 = node;
//		while (node!=NULL&&node->next != NULL)
//		{
//			if (node->data == node->next->data)
//			{
//				temp1 = node->next;
//				node->next = temp1->next;
//				free(temp1);
//			}
//			else
//				node = node->next;
//
//		}
//	}
//	void display()
//	{
//		Node *temp=head;
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
//	list.insertAtStart(8);
//	list.insertAtStart(3);
//	list.insertAtStart(12);
//	list.insertAtStart(12);
//	cout << "ORIGINAL LIST: \n";
//	list.display();
//	cout << "AFTER DELETION:\n";
//	list.delFromSortedLinkedList();
//	list.display();
//}