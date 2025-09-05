#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
class LinkedList
{
public:
	Node* head = NULL;
	void insert(int data)
	{
		Node* node = new Node();
		node->data = data;
		node->next = head;
		head = node;
	}
	void middleNode()
	{
		Node* temp = head;
		Node* slowptr = head;
		while (temp!=NULL && temp->next->next != NULL)
		{
			temp = temp->next->next;
			slowptr = slowptr->next;
		}
		cout << "Middle-Node= " << slowptr->data;
	}
};
int main()
{
	LinkedList list;
	list.insert(27);
	list.insert(20);
	list.insert(89);
	list.insert(10);
	list.middleNode();
}