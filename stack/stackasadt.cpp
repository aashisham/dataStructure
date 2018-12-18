#include<iostream>
using namespace std;


class Stack{
	int size;
	
	int data[5];
	int top;
	
	public:
		Stack(){
			size=4;
			top=-1;
		}
		bool isEmpty ()
		{
			if(top==-1)
			{
				return true;
			}
			return false;
		} 
		
		bool isFull()
		{
			if(top==size)
			{
				return true;
			}
			return false;
		}
		
		void push(int x)
		{
			if(!isFull())
			{
				data[++top]=x;
				return ; 
			}
			cout<<"stack is full"<<endl;
			return ;
		}
		int pop()
		{
			if(!isEmpty())
			{
				int temp=data[top--];
				cout<<"the item poped is:";
				cout<<temp<<endl;
				return temp;
			}
			cout<<"stack is empty"<<endl;
			return -1;
		}

		 void display(){
		 	if(!isEmpty()){
			 	for (int i=top;i>=0;i--)
			 	cout<<data[i]<<endl;
			 	return  ;
		 	   }
		 	   cout<<"stack is empty";
		 	   return ;
		 }
};

int main(){
	Stack s;
	int choice ;
	int x;
	
	while(true){
		
		 cout<<"choose the following :"<<endl;
		 cout<<"1.Push "<<endl;
		 cout<<"2.Pop "<<endl;
		 cout<<"3.Display" <<endl;
		 cout<<"4.Exit " <<endl;
		 
	     cin>>choice;
	     
	     switch(choice)
		 {
		 	case 1:
		 		cout<<"Enter the data"<<endl;
		 		cin>>x;
		 		s.push(x);
		 		break;
		 		
		 	case 2:
		 		s.pop();
		 		break;
		 		
		 	case 3:
		 		s.display();
		 		break ;
		 		
		 	case 4:
		 		return 0;
		 		
		 	default:
		 		cout<<"choose the following :"<<endl;
				 cout<<"1.Push "<<endl;
				 cout<<"2.Pop "<<endl;
				 cout<<"3.Display" <<endl;
				 cout<<"4.Exit " <<endl;
				 
			     cin>>choice;		
		 }
	}
	
}
	
	
	
