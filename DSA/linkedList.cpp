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
			cout << "\nLInkedList is free\n";
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
			cout << "Empty\n";
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
	int choice, data, ind;
	bool flag = true;
	while (flag)
	{
		cout << "---------------------LinkedList Menu------------------------\n\n";
		cout << "1-Insert at Start\n";
		cout << "2-Insert at Last\n";
		cout << "3-Insert at Middle\n";
		cout << "4-Delete at Start\n";
		cout << "5-Delete at Last\n";
		cout << "6-Delete at Middle\n";
		cout << "7-Print Linked List\n";
		cout << "8-Exit\n";
		cout << "===========================================================\n";
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter data: ";
			cin >> data;
			list.insertAtStart(data);
			break;
			
		case 2:
		{
			cout << "Enter data: ";
			cin >> data;
			list.insertAtLast(data);
			break;
		}
		case 3:
		{
			cout << "Enter data: ";
			cin >> data;
			cout << "Enter index no: ";
			cin >> ind;
			list.insertAtMiddle(data,ind);
			break;
		}
		case 4:
		{
			list.deleteAtStart();
			break;
		}
		case 5:
		{
			list.deleteAtLast();
			break;
		}
		case 6:
		{
			cout << "Enter index no: ";
			cin >> ind;
			list.deleteAtMiddle(ind);
			break;
		}
		case 7:
		{
			list.printLinkedList();
			break;
		}
		case 8:
		{
			flag = false;
			break;
		}
		default:
		{
			cout << "Invalid choice\n";
			break;
		}

		}
		
			


	}

}