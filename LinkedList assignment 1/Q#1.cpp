//#include<iostream>
//using namespace std;
//class Node
//{
//public:
//	int data;
//	Node* next;
//};
//class LinkedList {
//	Node* head;
//public:
//	void insertAtStart(int data)
//	{
//		if (head == NULL)
//		{
//			Node* temp = new Node();
//			temp->data = data;
//			temp->next = nullptr;
//			head = temp;
//		}
//		Node* node = new Node();
//		node->data = data;
//		node->next = head;
//		head = node;
//	}
//	void insertAtLast(int data)
//	{
//		if (head == NULL)
//		{
//			Node* temp = new Node();
//			temp->data = data;
//			temp->next = nullptr;
//			head = temp;
//		}
//		Node *node = head;
//		while (node->next != NULL)
//		{
//			node = node->next;
//		}
//		Node *lastNode = new Node();
//		lastNode->data = data;
//		lastNode->next = nullptr;
//		node->next = lastNode;
//	}
//	void insertAtMiddle(int index,int data)
//	{
//		Node* temp = head;
//		int i = 1;
//		while (i < index - 1 && temp->next != nullptr)
//		{
//			temp = temp->next;
//			i++;
//		}
//		Node* middleNode = new Node();
//		middleNode->data = data;
//		middleNode->next = temp->next;
//		temp->next = middleNode;
//	}
//	void deleteAtStart()
//	{
//		if (head == 0)
//		{
//			cout << "Nothing to free\n";
//		}
//		Node* temp = head;
//		head = head->next;
//		free(temp);
//
//	}
//	void deleteAtLast()
//	{
//		if (head==NULL)
//		{
//			cout << "Empty\n";
//			return;
//		}
//		Node* temp = head;
//		while (temp->next->next != NULL)
//		{
//			temp = temp->next;
//		}
//	free(temp->next);
//	temp->next = nullptr;
//	}
//	void deleteAtMiddle(int index)
//	{
//		if (head==NULL)
//		{
//			return;
//		}
//		Node* temp = head;
//		int i = 1;
//		while (i < index - 1)
//		{
//			temp = temp->next;
//			i++;
//		}
//		Node* deleteNode = temp->next;
//		temp->next = temp->next->next;
//		free(deleteNode);
//	}	
//
//};
//int main()
//{
//	LinkedList l1,l2,l3;
//	l1.insertAtStart(56);
//	l1.insertAtLast(89);
//	l2.insertAtMiddle(4, 90);
//	l1.deleteAtStart();
//	l3.deleteAtMiddle(3);
//	
//}