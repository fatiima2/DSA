
#include<iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
	Node* prev;
};
class LinkedList
{
	Node* head;
public:
	void insertAtStart(int data)
	{
		if (head == NULL)
		{
			Node* temp = new Node();
			temp->data = data;
			temp->next = temp->prev = NULL;
			head = temp;
			return;
		}
		Node* node = new Node();
		node->data = data;
		node->next = head;
		Node* last = head->prev;
		if (!last)
		{
			last = head;
		}
		head->prev = node;
		head = node;
		head->prev = last;
		last->next = node;
	}
	void insertAtMiddle(int data, int index)
	{
		if (index <= 1)
			insertAtStart(data);
		Node* temp = head;
		int i = 0;
		while (i < index && temp->next != head)
		{
			temp = temp->next;
			i++;
		}
		Node* middleNode = new Node();
		middleNode->data = data;
		middleNode->next = temp;
		Node* prevNode = temp->prev;
		temp->prev = middleNode;
		prevNode->next = middleNode;
		middleNode->prev = prevNode;

	}
	void insertAtLast(int data)
	{
		if (head == NULL)
		{
			Node* temp = new Node();
			temp->data = data;
			temp->next = temp->prev = NULL;
			head = temp;
			return;
		}
		Node* node = head;
		while (node->next != head)
		{
			node = node->next;
		}
		Node* lastNode = new Node();
		lastNode->data = data;
		lastNode->next = head;
		lastNode->prev = node;
		node->next = lastNode;
		head->prev = lastNode;
		
	}
	void printLinkedList()
	{
		cout << "Linked List: ";
		Node* temp = head;
		while (temp->next!= head)
		{
			cout << temp->data << " ";
			temp = temp->next;
			if(temp->next == head)
				cout << temp->data << " ";
		}
	}
	void deleteAtStart()
	{
		if (head == NULL)
		{
			cout << "Nothing to delete\n";
			return;
		}
		Node* temp = head;
		Node *last = head->prev;
		head = head->next;
		head->prev = last;
		last->next = head;
		delete temp;
	}
	void deleteAtMiddle(int index)
	{
		if (head == NULL)
		{
			cout << "Nothing to delete\n";
			return;
		}
		Node* temp = head;
		int i = 1;
		while (i < index && temp->next != head)
		{
			temp = temp->next;
			i++;
		}
		Node* prevNode = temp->prev;
		Node* nextNode = temp->next;
		prevNode->next = nextNode;
		nextNode->prev = temp->next;
		delete temp;
	}
	void deleteAtLast()
	{
		if (head == NULL)
		{
			cout << "Nothing to return\n";
			return;
		}
		Node* prevLast = head->prev;
		Node* newLast = prevLast->prev;
		newLast->next = head;
		head->prev = newLast;
		delete prevLast;
	}
	void deleteByValue(int value)
	{
		if (head == NULL)
		{
			cout << "Linked List is empty\n";
			return;
		}
		Node* temp = head;
		if (temp->data == value)
		{
			Node* last = head->prev;
			Node* newHead = head->next;
			last->next = newHead;
			newHead->prev = last;
			delete head;
			head = newHead;
			return;
		}
		temp = temp->next;
		while (temp != head)
		{
			if (temp->data == value)
			{
				Node* prevNode = temp->prev;
				Node* nextNode = temp->next;
				prevNode->next = nextNode;
				nextNode->prev = prevNode;
				delete temp;
				return;
			}
			temp = temp->next;
		}
		cout << "Value not found\n";
	}
	void updateValue(int prevValue, int newValue)
	{
		if (head == NULL)
		{
			cout << "Linked List is empty\n";
			return;
		}
		Node* temp = head;
		bool found = false;
		do
		{
			if (temp->data ==prevValue)
			{
				temp->data = newValue;
				found = true;
				break;
			}
			temp = temp->next;
		} 
		while (temp!=head);
		if (found)
			cout << prevValue << " Updated to " << newValue<< "\n";
		else
			cout << prevValue << " is not found\n";
	}
	void SearchValue(int val)
	{
		if (head == NULL)
		{
			cout << "Linked List is empty\n";
			return;
		}
		Node* temp = head;
		bool found = false;
		if (temp->data == val)
		{
			cout << val << " found\n";
			found = true;
		}
		while (temp->next != head)
		{
			if (temp->data == val)
			{
				cout <<  val << " found\n";
				found = true;
			}
			temp = temp->next;
		}
		if (!found)
			cout << val << " not found in the list\n";
	}
	
};
int main()
{
	LinkedList l1 = LinkedList();
	cout << "Insertion at start: \n";
	l1.insertAtStart(10);
	l1.insertAtStart(17);
	l1.insertAtStart(90);
	l1.insertAtStart(5);
	l1.printLinkedList();
	cout << "\n\n";
	cout << "Insertion at Middle: \n";
	l1.insertAtMiddle(25, 3);
	l1.insertAtMiddle(24, 4);
	l1.printLinkedList();
	cout << "\n\n";
	cout << "Insertion at last\n";
	l1.insertAtLast(22);
	l1.insertAtLast(92);
	l1.insertAtLast(67);
	l1.insertAtLast(78);
	l1.insertAtLast(20);
	l1.printLinkedList();
	cout << "\n\n";
	cout << "Delete at start\n";
	l1.deleteAtStart();
	l1.printLinkedList();
	cout << "\n\n";
	cout << "Delete at middle\n";
	l1.deleteAtMiddle(4);
	l1.printLinkedList();
	cout << "\n\n";
	cout << "Delete at Last\n";
	l1.deleteAtLast();
	l1.printLinkedList();
	cout << "\n\n";
	cout << "Delete by specified value\n";
	/*l1.deleteByValue(10);
	l1.printLinkedList();*/
	cout << "\n\n";
	cout << "Update a value: \n";
	l1.updateValue(78, 245);
	l1.printLinkedList();
	cout << "\n\n";
	cout << "Search value: \n";
	l1.SearchValue(20);
	//l1.printLinkedList();
	cout << "\n\n";
}