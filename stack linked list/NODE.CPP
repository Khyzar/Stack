#include <iostream>
#include "node.h"

using namespace std;

node::node()
{
	data=0;
	next=NULL;

}
	int node::getData()
	{
		return data;
	}

	node* node::getNext()
	{
		return next;
	}
	void node::setData (int temp)
	{
		data=temp;
	}
	void node::setNext (node* temp2)
	{
		next=temp2;
	}

	node::~node()
	{
		next=NULL;
		data=0;
	}