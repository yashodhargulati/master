#include<iostream>
using namespace std;
class node{
    public:
    string name;
    int year;
    string post;
    node *link;    
};

class list{
    public:
node *head;
node *tail;
int count;
list(){
    tail=NULL;
    head=NULL;
    count=0;
}

node *createnode();
void createlist();
void insert();
void deletes();
void display();
void reverseorder();


};


node* list::createnode(){
   node *newnode;
    newnode= new node;
    cout<<"Enter the name\n";
    cin>>newnode->name;
    cout<<"Enter the year\n";
    cin>>newnode->year;
    cout<<"Enter your post\n";
    cin>>newnode->post;
    newnode->link=NULL;
    return(newnode);
}


void list::createlist(){
    node *newnode;
    int count=0;
    char x;
    cout<<"The first and the last position is reserved for the president and the secretary respectively\n";
    while(1){
        cout<<"Do you want to create a new node\n";
        cin>>x;
        if(x == 'n'){
            break;
        }
        newnode = createnode();
        if(head==NULL){
            tail=newnode;
            head=newnode;
        }else{
            tail->link=newnode;
            tail=newnode;
        }
    }
    count=count+1;
    cout<<"The number of elements is"<<count;

}



void list::insert(){
    int pos,ch;
    node *newnode, *prev, *cur;
    prev=NULL;
    cur=head;
    cout<<"1. President\n2.secretaryz`\n3.Any position\n";
    cin>>ch;
    switch(ch){
        case 1:
            newnode=createnode();
            newnode->link=head;
            head=newnode;
            break;

        case 2:
            newnode=createnode();
            if(head==NULL){
                tail=newnode;
                head=newnode;
            }else{
                tail->link=newnode;
                tail=newnode;
            }
            break;
        case 3:
            cout<<"Enter the position where you want to insert a node\n";
            cin>>pos;
            while(count!=pos){
                prev=cur;
                cur=cur->link;
                count = count + 1;
            }
            if(count==pos){
                newnode=createnode();
                prev->link=newnode;
                newnode->link=cur;
            }
    }   
}



void list::deletes(){
    int pos;
    node *delnode, *prev, *cur;
    prev=NULL;
    cur =head;
    cout<<"Enter the position that you want to delete\n";
    cin>>pos;
    while(count!=pos){
        prev=cur;
        cur->link=cur;
        count++;

        if(count==pos){
            prev->link=delnode->link;
        }




        }
            count--;
    }
    







void list::display(){
    node *temp;
    int count=0;
    temp=head;
    if(temp==NULL){
        cout<<"The list is empty\n";
    
    }
else{
    while(temp!=NULL){
        cout<<temp->name;
        cout<<temp->year;
        cout<<temp->post;
        temp=temp->link;
        count++;
    }

}
}






int main(){
    list s;
    int x,y;
    do{
cout<<"1.createlist\n2.Insert\n3.delete\n4.Display\n";
cin>>x;
switch(x){
case 1: s.createlist();
	    break;
case 2:s.insert();
	    break;
case 3: s.deletes();
	    break;
case 4: s.display();

}

cout<<"Enter 0 to continue and  any other key to exit\n";
cin>>y;
}while(y==0);
    return 0;

}