#include<iostream>
using namespace std;

class LinkList{
	struct node{
		int data;
		node *next;
	}*start;
	int nodeCount;
	
	public:
		LinkList();
		void addAtEnd(int num);
		void addAtBeg(int num);
		void addAftNode(int nodeloc, int num);
		void del(int num);
		void display();
		~LinkList();
};

LinkList::LinkList(){
	start=NULL;	
	nodeCount=0;
}

void LinkList::addAtEnd(int num){
	//if there is no node then it initializes;
	nodeCount++;
	if(start==NULL){
		start=new node;
		start->data=num;
		start->next=NULL;
		return;
	}
		node *temp,*newNode;
		temp=start;
		//finding endnode of the list
		while(temp->next!=NULL)temp=temp->next;
		
		//creating new node and adding it at the end
		newNode=new node;
		newNode->data=num;
		temp->next=newNode;
		newNode->next=NULL;
	}
	
void LinkList::addAtBeg(int num){
	nodeCount++;
	if(start==NULL){addAtEnd(num);return;}
	node *temp;
	temp=new node;
	temp->data=num;
	temp->next=start;
	start=temp;
}

void LinkList::addAftNode(int pos,int num){
	
	if(nodeCount>=2 && pos>=1 && pos<nodeCount){
		node *temp,*newNode;
		temp=start;
	
	//finding nth node;
		for(int i=1;i<pos;i++){
			temp=temp->next;
	
		}	
		//adding after nth node
		newNode=new node;
		newNode->data=num;
		newNode->next=temp->next;
		temp->next=newNode;
		nodeCount++;
		return;
	}
	cout<<"Sorry the nodes are either less than 2 or given node position is not valid"<<endl;
}

void LinkList::del(int num){
	nodeCount--;
	node *temp1,*temp2;
	temp1=start;
	while(temp1->data!=num){
		temp2=temp1->next;
		if(temp2->data==num)break;
		temp1=temp2;
	}
	
	if(temp1==start){start=start->next;delete temp1;return;}
	temp1->next=temp2->next;
	delete temp2;
}

	LinkList::~LinkList(){
	node *temp;
	while(start->next!=NULL){
		temp=start;
		start=start->next;
		delete temp;
	}
	delete start;
}

void LinkList::display(){
	node *temp;
	temp=start;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}


int main(){
	
	LinkList l;
	int choice,value;
	
	while(1){
		cout<<"Choose from following"<<endl;
		cout<<"1.Add at end"<<endl;
		cout<<"2.Add at beginning"<<endl;
		cout<<"3.Add after a node"<<endl;
		cout<<"4.Delete a node"<<endl;
		cout<<"5.Display the data"<<endl;
		cout<<"6.Exit"<<endl;
		
		cin>>choice;
		
		switch(choice){
			
			case 1:
				cout<<"Enter the data ";
				cin>>value;
				l.addAtEnd(value);
				break;
								
			case 2:
				cout<<"Enter the data ";
				cin>>value;
				l.addAtBeg(value);
				break;
			
			case 3:
				int post;
				cout<<"Enter the data ";
				cin>>value;
				cout<<"Enter the node position ";
				cin>>post;;
				l.addAftNode(post,value);
				break;
				
			case 4:
				cout<<"Enter the data to be deleted ";
				cin>>value;
				l.del(value);
				break;
				
			case 5:
				l.display();
				break;
			
			case 6:
				return -1;
				
			default:
				continue;
		}
	}
}
