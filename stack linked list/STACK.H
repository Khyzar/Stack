#ifndef STACK_H
#define STACK_H
#include"node.h"


class stack
{
private:
	node *head;
public:
	stack();
	bool push(int);			//push element on stack top
	bool pop();				//remove the top most element from stack 
	bool isEmpty();			//return true if stack is empty
	bool isFull(int );			//return true if stack is full 	
	int StackTop();	
	void printstack();      //returns top most element of stack but dont pop it off the stack
	~stack();
					//private members think about that what members you need here.
};
#endif