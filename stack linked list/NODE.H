#ifndef NODE_H
#define NODE_H

class node 
{
private:
	int data;
    node* next;
public:
	node();
	int getData();
	node* getNext();
	void setData (int);
	void setNext (node*);
	~node();
};



#endif