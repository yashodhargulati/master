/*
  Saddle point
*/

#include<iostream>
using namespace std;
class matrix{
    public:
        int arr[10][10];
        int i,j,k,column,row,min,max,col;
       
    void getdata(){
        cout<<"Enter the number of rows";
        cin>>row;
        cout<<"Enter the number of columns";
        cin>>column;
        
            cout<<"enter the elements";
        for(i=0;i<row;i++){
            for(j=0;j<column;j++){
                cin>>arr[i][j];
            }}



    }

void saddlepoint(){
    for(i=0;i<row;i++){
            min=arr[i][0];
            col=0;
        for(j=0;j<column;j++){
            if(min>arr[i][j]){
                min=arr[i][j];
                col=j;
            }}

         for(k=0;k<column;k++){
             if(min<arr[k][col])
                 break;}
             
             if(k==row){
                 cout<<"saddlepoint is"<<min;
             }
         }

}
};


int main(){
    matrix s;
    s.getdata();
    s.saddlepoint();

    return 0;
}

/* RESULT
Enter the number of rows
3
Enter the number of columns
3
enter the elements
1
2
3
4
5
6
7
8
9
saddlepoint is7



*/


  
