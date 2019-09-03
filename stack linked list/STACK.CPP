#include<iostream>
#include"stack.h"
using namespace std;
stack::stack()
{
	head=NULL;
}
bool stack::push(int num1)
{
	node *newnode=new node;
	node *curr=head;
	node *prev=head;
	newnode->setData(num1);
	newnode->setNext(NULL);
	if(head==NULL)
		head=newnode;
	else
	{
		while(curr!=NULL)
		{   prev=curr;
			curr=curr->getNext();
		
		    }
		prev->setNext(newnode);	
	}
	return true;
}
bool stack::pop()
{
	node *curr=head;
	node *prev=head;
	if(head==NULL)
		cout<<"the list is empty\n";
	else
	{
		while(curr->getNext()!=NULL)
		{
			prev=curr;
			curr=curr->getNext();
			if(curr==NULL)
				break;
		}
		if(curr->getData()==NULL  &&  curr->getNext()==NULL)
			cout<<"invalid number\n";
		if(curr->getData()!=NULL && curr->getNext()==NULL)
		{
			delete curr;
			prev->setNext(NULL);
		}
	}
	return true;
}
bool stack::isEmpty()
{
	int counter=0;
	node *curr=head;
	if(head==NULL)
		return true;
	else
			return false;

	
}
bool stack::isFull(int size)
{
	int counter=0;
	node* curr=head;
	while(curr!=NULL)
	{
		counter++;
		curr=curr->getNext();
	}
	if(counter==size)
		return true;
	else 
		return false;
}

int stack::StackTop()
{
	node *curr=head;
	int num=0;
	while(curr->getNext()!=NULL)
	{
		curr=curr->getNext();
	}
	num=curr->getData();
	return num; 
}
void stack::printstack()
{
	node *temp=head;
	while(temp!=NULL)
	{
	 	cout<<temp->getData()<<endl;
	    temp=temp->getNext();  
	}
}
stack::~stack()
{
	node *current=head;
		node *temp=head;
		while ( current!=NULL)			
		{
			temp=current->getNext();
			delete current;
			current=temp;
			
		}
}