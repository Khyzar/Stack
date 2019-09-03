#include<iostream>
using namespace std;
class stack
{
private:
	int size;
    int *p;
public:
	stack();
	bool push(int);			//push element on stack top
	bool pop();				//remove the top most element from stack 
	bool isEmpty();			//return true if stack is empty
	bool isFull();			//return true if stack is full 	
	int StackTop();	
	void printstack();
	void allocatememory();
	void extramemory();//returns top most element of stack but dont pop it off the stack
	~stack();
					//private members think about that what members you need here.
};
stack::stack()
{
	p=NULL;
	size=0;
}
bool stack::push(int num)
{  
	for(int i=size-1; i>-1; i--)
	{
		if(p[i]!=NULL && i==size-1)
		{	cout<<"the stack is full\n";
		   return false;}
		else if(p[i]!=NULL && i!=size-1 )
		{	p[i+1]=num;
		    break;
		}
		if(p[i]==NULL && i==0)
			p[i]=num;
	}
	return true;
}
bool stack::pop()
{
	for(int i=size-1; i>-1; i--)
	{

    	if(p[i]!=NULL && i==size-1)
	    {
		  p[i]=NULL;
		  break;
	    }
	    else if(p[i]!=NULL && i!=size-1)
		{	p[i]=NULL;
		    break;
		}
		if(p[i]==NULL && i==0)
		{
			p[i]=NULL;
			break;
		}
	}
	return true;
}
bool stack::isEmpty()
{
	int counter=0;
	for(int i=0; i<size; i++)
	{
		if(p[i]==NULL)
	       counter++;
	}
	if(counter==size)
		return true;
	else 
		return false;
}
bool stack::isFull()
{
	for(int i=0; i<size; i++)
	{
		if(p[i]==NULL)
			return false;
	}
	return true;

}
int stack::StackTop()
{
	int num1=0;
	for(int i=size-1; i>-1; i--)
	{
		if(p[i]!=NULL && i==size-1)
		{	num1=p[i];
		   return false;}
		else if(p[i]!=NULL && i!=size-1 )
		{	num1=p[i];
		    break;
		}
		
	}
	return num1;
}
void stack::allocatememory()
{
	cout<<"enter the size of stack\n";
	cin>>size;
	p=new int[size];
	for(int i=size-1; i>-1 ; i--)
		if(p[i]>='48' && p[i]<='57')
			;
		else
			p[i]=NULL;
	cout<<"memory is allocated to the stack\n";
}
void stack::extramemory()
{
	int size2=0;
	int *temp=NULL;
	cout<<"enter the size of extrastack\n";
	cin>>size2;
	temp=new int[size];
	for(int i=0; i<size; i++)
	{
		temp[i]=p[i]; 
	}
	size=size+size2;
	p=new int[size];
	for(int i=0; i<size; i++)
	{
		p[i]=temp[i];
	}
	for(int i=size-1; i>-1 ; i--)
		if(p[i]>='48' && p[i]<='57')
			;
		else
			p[i]=NULL;
	cout<<"new memory is allocated to the stack\n";
	/*p1=p;*/
}
void stack::printstack()
{
	cout<<"the stack is\n";
	for(int i=0; i<size; i++)
		cout<<p[i];
}
stack::~stack()
{
	stack stack2;
	//for(int i=0; i<size; i++)
		//stack2.p[i]=NULL;
     p=NULL;
}
int main()
{
	bool checker;
	stack stack1;
	char input[100]="\0";
	int num=0,num1=0;
	
	cout<<"first of all allocatememory to stack:1)yes 2)no\n";
	cin>>input;
	while(strcmp(input,"no")==0)
	{
		cout<<"you cant proceed without allocating the memory: please allocate the memory: 1)yes 2)no\n";
		cin>>input;
	}
     	stack1.allocatememory();  
	cout<<"what do you want to do: 1)push 2)pop 3)isempty 4)isfull 5)stacktop 6)print 7)terminate\n";
	cin>>input;
	while(strcmp(input,"terminate")!=0)
	{
	   if(strcmp(input,"push")==0)
	   {
		  cout<<"enter the number to push\n";
		  cin>>num;
		  checker=stack1.push(num);
		  if(checker==false)
			  stack1.extramemory();
		  else if(checker==true)
			  cout<<"the number is pushed in the stack\n";
	   }
	   if(strcmp(input,"pop")==0)
		{
			checker=stack1.pop();
	       if(checker==false)
			  stack1.allocatememory();
		   else if(checker==true)
			  cout<<"the number is poped\n";
	   }
	   if(strcmp(input,"isempty")==0)
	   {
		   checker=stack1.isEmpty();
		   if(checker==true)
			   cout<<"the stack is empty\n";
		   else if(checker==false)
			   cout<<"the stack in not empty\n";
	   }
	   if(strcmp(input,"isfull")==0)
	   {
		   checker=stack1.isFull();
		   if(checker==true){
			   cout<<"the stack is full\n";
			   stack1.extramemory();
			   cout<<"new memory is allocated to stack\n";}
		   else if(checker==false)
			   cout<<"the stack in not full\n";
	   }
	   if(strcmp(input,"stacktop")==0)
	   {
		   num1=stack1.StackTop();
		   cout<<"the top number in the stack is:"<<num1<<endl;
	   }
	   if(strcmp(input,"print")==0)
		   stack1.printstack();
	   cout<<"\nwhat do you want to do: 1)push 2)pop 3)isempty 4)isfull 5)stacktop 6)print 7)terminate\n";
	   cin>>input;
	   system("cls"); 
	}
	exit(1);
	return 0;
}