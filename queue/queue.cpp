#include<iostream>
#define MAX 5
using namespace std;
class Queue{
	int rear,front;
	int data[5];
	public:
		Queue(){
			rear=0;
			front=0;
		}
		
		bool isFull(){
			if(rear==MAX)
			{
			cout<<"Queue is full "<<endl;
			return true;}
			return false;
		}
		
		bool isEmpty(){
			if(rear==front)
			{
			cout<<"Queue is empty "<<endl;
			return true;
			}
			return false;
		}
		
		
		void insert(int value){
			data[rear++]=value;
			
		}
		
		int deletion(){
			if(!isEmpty()){
				int x=data[front++];
				cout<<x<<endl;
				return x;
			}
			cout<<"Queue empty"<<endl;
		}
		
		void display(){
			
			for(int i=front;i<rear;i++){
				cout<<data[i]<<endl;
			}
		
		
		}
		

};


int main(){
	
	Queue q1;
	int choice,x;
	
	while(1){
		
		cout<<"Choose from following : "<<endl;
		cout<<"1.Insert"<<endl;
		cout<<"2.Delete"<<endl;
		cout<<"3.Display"<<endl;	
		cout<<"4.Exit"<<endl;		
		
		cin>>choice;
		
		switch(choice){
		
			case 1:
				cout<<"Enter the data"<<endl;
				cin>>x;
				q1.insert(x);
				break;
			case 2:
				q1.deletion();
				break;
			case 3:
				q1.display();
			case 4:
				return -1;
		
		default:
			cout<<"Choose from following"<<endl;
			cout<<"1.Insert"<<endl;
			cout<<"2.Delete"<<endl;
			cout<<"3.Display"<<endl;	
			cout<<"4.Exit"<<endl;
			cin>>choice;
			
		}
		
		
	}

}
