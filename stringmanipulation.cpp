/*ASSIGNMENT 5
  String Manipulation
  */


#include<iostream>
#include<string.h>
using namespace std;
class strings{
public:
int i,j,c,d,k,x;
string a,y,z;
char upper,lower,b;

void getdata(){
       k=0;
cout<<"Please enter your string\n";
getline(cin,a);
for(i=0;a[i]!='\0';i++){
      k++;
    }

}

void occurences(){
       x=0;
       k=0;
      for(i=0;a[i]!='\0';i++){
      k++;
    }

    cout<<"Enter the character you want to find the occurence of "<<"\n";
    cin>>b;
    upper = toupper(b);
    lower = tolower(b);
    for(i=0;i<k;i++){
      if(upper==a[i]||lower==a[i]){
        x++;
      }
    }
    cout<<"The occurence of"<<b<<"is : "<<x<<endl;

}

void deletec(){
        cout<<"Enter the 1st and the last position where you want to delete characters\n";
    cin>>c;
    cin>>d;
    
    for(i=0;a[i]!='\0';i++){
      if(i<c||i>d){
        y += a[i];
      }
    }
    cout<<y<<"\n";
}

void deletechar(){
    cout<<"Enter which Character you want to delete"<<"\n";
    cin>>b;
    upper = toupper(b);
    lower = tolower(b);
    for(i=0;a[i]!='\0';i++){
      if(lower!=tolower(a[i])){
        z += a[i];
      }
    }
    cout<<z<<"\n";

}


void palindrome(){
    k=0;
        for(i=0;a[i]!='\0';i++){
            k++;
                }
        for (i = 0; i < k/2; i++){
            if (tolower(a[i]) != tolower(a[k-1])){
                cout<<"The string is not a palindrome.\n";
                break;
                         }
                k--;
                     }
        if (i == k/2){
             printf("The string is a Palindrome.\n");}
                             }    
    };

    int main(){
        //int p,q;
        strings s;
   // do{
        //cout<<"1.Getdata\n2.Occurences\n3.Delete\n4.Delete Character\n5.Palindrome\n";
        //cin>>p;
    //switch(p){
        //case 1: 
        s.getdata();
            //break;
        //case 2: 
        s.occurences();
            //break;
        //case 3: 
        s.deletec();
            //break;
        //case 4: 
        s.deletechar();
            //break;
        //case 5: 
        s.palindrome();
//}

//cout<<"Enter 0 to continue and  any other key to exit\n";
//cin>>q;
//}while(q==0);


return 0;
}

/* Output
Please enter your string
Malayalam
Enter the character you want to find the occurence of
a
The occurence ofais : 4
Enter the 1st and the last position where you want to delete characters
1
2
Mayalam
Enter which Character you want to delete
m
alayala
The string is a Palindrome.
PS D:\Programs\CPP>

*/
        
        
    