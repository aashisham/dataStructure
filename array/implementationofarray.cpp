#include<iostream>
using namespace std;

class Array{
	
	int data[10];
	int top;
	
	public:
		Array(){
			
			top=0;
			
		}
		
		void insert (int x){
			
			if(top<10)
			{
			data[top++]=x;
		} 
		 else {
		 	cout<<"array overloaded";
		 	return ; 
		 }
	}
		 void display(){
		 	
		 	int i=0;
		 	for (i=0;i<10;i++)
		 	cout<<data[i]<<endl;

			 }
		 
			
			
		
	
	
};

int main(){
	Array a1;
	a1.insert(7);
	a1.insert(10);
	a1.display();
	return 0;
	
}
