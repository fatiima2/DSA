#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
class LinkedList {
	Node* head;
public:
	
	LinkedList()
	{
		head = nullptr;
	}
	bool isEmpty()
	{
		if (head == nullptr)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void insertAtStart(int data) {
		if(isEmpty())
		{
			Node* temp = new Node();
			temp->data = data;
			temp->next = nullptr;
			head = temp;

		}
		else
		{
			Node* node = new Node();
			node->data = data;
			node->next = head;
			head = node;
		}



	}
	void insertAtLast(int data)
	{
		if (isEmpty())
		{
			Node* temp = new Node();
			temp->data = data;
			temp->next = nullptr;
			head = temp;

		}
		else
		{
			Node* Temp = head;
			while (Temp->next != nullptr)
			{
				Temp = Temp->next;

			}
			Node* lastNode = new Node();
			lastNode->data = data;
			lastNode->next = nullptr;
			Temp->next = lastNode;

		}
	}
	void insertAtMiddle(int data, int index)
	{
		if (head == nullptr || index <= 1)
		{
			insertAtStart(data);
			return;
		}
		Node* temp = head;
		int i = 1;
		while (i < index - 1 && temp->next!=nullptr)
		{
			temp = temp->next;
			i++;
		}
		Node* middleNode = new Node();
		middleNode->data = data;
		middleNode->next = temp->next;
		temp->next = middleNode;
	}
	void deleteAtStart()
	{
		if (isEmpty())
		{
			cout << "LInkedList is free";
			return;
		}
		Node* temp = head;
		head=head->next;
		free(temp);
		//head = temp;
	}
	void deleteAtLast()
	{
		if (isEmpty())
		{
			return;
		}
		Node* temp = head;
		while (temp->next->next != nullptr)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = nullptr;
	}
	void deleteAtMiddle(int index) 
	{
		if (isEmpty())
		{
			return;
		}
		Node* temp = head;
		int i = 1;
		while (i < index - 1)
		{
			temp = temp->next;
			i++;
		}
		Node* deleteNode = temp->next;
		temp->next = temp->next->next;
		free(deleteNode);
	}
	void printLinkedList()
	{
		if (isEmpty())
		{
			return;
		}
		Node* temp = head;
		while (temp != nullptr)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << "\n";
	}

};
int main()
{
	LinkedList list;
	list.insertAtStart(80);
	list.insertAtLast(20);
	list.printLinkedList();
	list.deleteAtLast();
	list.printLinkedList();
	list.insertAtMiddle(45,3);
	list.insertAtLast(89);
	list.printLinkedList();

}