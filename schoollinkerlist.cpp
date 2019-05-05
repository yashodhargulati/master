#include<iostream>
using namespace std;
class node{
    public:
    int rollno;
    string studentname;
    string dob;
    node *link;
};

class list{
    public:
node *head;
node *tail;
list(){
    tail=NULL;
    head=NULL;
}

node *createnode();
void createlist();
void display();


};


node *list::createnode(){
    node *newnode;
    newnode= new node;
    cout<<"Enter the roll no.";
    cin>>newnode-> rollno;
    cout<<"Enter the roll no.";
    cin>>newnode-> studentname;
    cout<<"Enter the roll no.";
    cin>>newnode-> dob;
    newnode->link=NULL;
    return(newnode);
}


void list::createlist(){
    node *newnode;
    char x;
    while(1){
        cout<<"Do you want to create a new node";
        cin>>x;
        if(x!='y')
            break;


            newnode=createnode();
            if(head==NULL){
                tail=newnode;
                head=newnode;
            }
            else{
                tail->link=newnode;
                tail=newnode;
            }
    }


}

void list::display(){
    node *temp;
    temp=head;
    if(temp==NULL){
        cout<<"The list is empty";
    
    }
else{
    while(temp!=NULL){
        cout<<temp->rollno;
        cout<<temp->studentname;
        cout<<temp->dob;
        temp=temp->link;
    }

}
}




int main(){
    list s;

    s.createlist();
    s.display();
    return 0;

}