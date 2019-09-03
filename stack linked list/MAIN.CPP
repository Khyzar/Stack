#include<iostream>
#include "stack.h"
using namespace std;

int main()
{
	bool checker;
	int size=0; char input[100]="0";
	int *p=NULL;
	stack stack1;
	cout<<"enter the size of stack\n";
	cin>>size;
	cout<<"what do you want to do:1)push 2)pop 3)isempty 4)isfull 5)stacktop 6)terminate\n";
	cin>>input;
	int num=0,num1=0;
	while(strcmp(input,"terminate")!=0)
	{
		
		if(strcmp(input,"push")==0)
	    { 
			cout<<"enter the number to push\n";
			cin>>num1;
	        stack1.push(num1);
		}
		if(strcmp(input,"pop")==0)
          {
			  stack1.pop();
			  stack1.printstack();
		}
		if(strcmp(input,"isempty")==0)
		{
			checker=stack1.isEmpty();
			if(checker==true)
				cout<<"the stack is empty\n";
			else
				cout<<"the stack is not empty\n";
		}
        if(strcmp(input,"isfull")==0)
		{
			checker=stack1.isFull(size);
			if(checker==true)
				cout<<"the stack is full\n";
			else
				cout<<"the stack is not full\n";
		}
		if(strcmp(input,"stacktop")==0)
	    {     num=stack1.StackTop();
		      cout<<"the top number is:"<<num<<endl;
		}
		if(strcmp(input,"print")==0)
			stack1.printstack();
		cout<<"what do you want to do:1)push 2)pop 3)isempty 4)isfull 5)stacktop 6)terminate 7)print\n";
		cin>>input;
		system("cls");
	}
	return 0;
}