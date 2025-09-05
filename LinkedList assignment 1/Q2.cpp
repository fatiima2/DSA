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
//	void insert(int data)
//	{
//		Node* temp= new Node();
//		temp->data = data;
//		temp->next = head;
//		head = temp;
//	}
//	int searchElement(int key)
//	{
//		Node* node = head;
//		int counter = 0;
//		while (node  != NULL)
//		{
//			if (node->data == key)
//			{
//				return counter;
//			}
//			else
//			{
//				node = node->next;
//				counter++;
//			}
//		}
//		return -1;
//	}
//};
//int main()
//{
//	LinkedList linkedlist;
//	linkedlist.insert(24);
//	linkedlist.insert(87);
//	linkedlist.insert(12);
//	linkedlist.insert(20);
//	linkedlist.insert(78);
//	linkedlist.insert(89);
//	linkedlist.insert(27);
//	linkedlist.insert(50);
//	cout << linkedlist.searchElement(24) << endl;
//	cout << linkedlist.searchElement(90) << endl;
//	
//}