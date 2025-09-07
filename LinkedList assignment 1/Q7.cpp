#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node *next;
};
class LinkedList {
public:
	Node* head1=NULL;
	Node* head2=NULL;
	void createNodeForLinkedList1(int data)
	{
		Node* node = new Node();
		node->data = data;
		node->next = head1;
		head1 = node;
	}
	void createNodeForLinkedList2(int d)
	{
		Node* temp = new Node();
		temp->data = d;
		temp->next = head2;
		head2 = temp;
	}
    void mergeLinkedlists()
	{
		Node* temp1 = head1;
		while (temp1->next != NULL)
		{
			temp1 = temp1->next;
		}
		temp1->next = head2;
	}
	void linkedListSorting()
	{
		Node* temp = head1;
		int tempData;
		while (temp != NULL)
		{
			Node* temp1 = temp->next;
			while (temp1 != NULL)
			{
				if (temp->data > temp1->data)
				{
					tempData = temp->data;
					temp->data = temp1->data;
					temp1->data = tempData;

				}
				temp1= temp1->next;
			}
			temp = temp->next;
		}
	}
	void displayList()
	{
		Node* temp = head1;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

};
int main()
{
	LinkedList list;
	list.createNodeForLinkedList1(89);
	list.createNodeForLinkedList1(67);
	list.createNodeForLinkedList1(25);
	list.createNodeForLinkedList1(30);
	list.createNodeForLinkedList2(78);
	list.createNodeForLinkedList2(20);
	list.createNodeForLinkedList2(90);
	cout << "Merged Linked Lists\n";
	list.mergeLinkedlists();
	list.displayList();
	cout << "Sorted Linked List\n";
	list.linkedListSorting();
	list.displayList();
	


}