#include<iostream>
using namespace std;
class polynomial{
    public:
    int i,j,k,d;
    
    int a[5];
    int b[5],c[100];

    void getdata(){
        cout<<"Enter the terms of the first polynomial according to the degree of the terms\n";
        for(i=4;i>=0;i--){
            cin>>a[i];}
          cout<<"Enter the terms of the first polynomial according to the degree of the terms\n";
        for(i=4;i>=0;i--){
            cin>>b[i];
        }
            
        
    }



    void addition(){ 
        cout<< "the result for addition is\n";
            for(i=4;i>=0;i--){
                c[i]=a[i]+b[i];
                    cout<<c[i]<<endl;
            }

    }

    void multiplication(){
        int sum=0;
        cout<<"The result for multiplication is\n";
                for(i=4;i>=0;i--){
                    for(j=4;j>=0;j--){
                    d=a[i]*b[j];
                    sum=sum+d;
                    }
                    c[i]=sum;
                    cout<<c[i]<<endl;
                }
                
    }



         
    }; 
int main(){
int x,y;
polynomial s;
s.getdata();
s.addition();
s.multiplication();


return 0;
}