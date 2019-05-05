/*
  Matrix Operations
  */


#include<iostream>
using namespace std;
class matrix{
public:
int sum;
int i,j,k,m,n;
int arr[10][10],b[10][10];

void getdata(){
cout<<"enter the number of rows";
cin>>m;
cout<<"Enter the number of columns";
cin>>n;
cout<<"Enter the elements for the matrix";
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        cin>>arr[i][j];

    }

}

}

void diagonal(){
    sum=0;
if(m==n){
    for(i=0;i<m;i++){
        sum=sum+arr[i][i];
    }
}
cout<<"The sum of the diagonal elements is"<<sum;

}


void transpose(){

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            b[i][j]=arr[j][i];

        }

    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<b[i][j]<<endl;
        }
    }
}

void uppertriangular(){
for(i=0;i<m;i+=2){
    for(j=1;j<n;j++){
        if(arr[i][j]==0){
            cout<<"The matrix is upper triangular";

        }
        }
    }

}




};

/* Output
1.Getdata
2.Sum of the elements of the diagonal
3.Transpose
4.upper triangular
1
enter the number of rows
3
Enter the number of columns
3
Enter the elements for the matrix
1
2
3
0
4
5
0
0
6
Enter 0 to continue and  any other key to exit
0
1.Getdata
2.Sum of the elements of the diagonal
3.Transpose
4.upper triangular
2
The sum of the diagonal elements is11Enter 0 to continue and  any other key to exit
0
1.Getdata
2.Sum of the elements of the diagonal
3.Transpose
4.upper triangular
3
1
0
0
2
4
0
3
5
6
Enter 0 to continue and  any other key to exit
0
1.Getdata
2.Sum of the elements of the diagonal
3.Transpose
4.upper triangular
4
The matrix is upper triangular
Enter 0 to continue and  any other key to exit





int main(){
int x,y;
matrix s;
do{
cout<<"1.Getdata\n2.Sum of the elements of the diagonal\n3.Transpose\n4.upper triangular\n";
cin>>x;
switch(x){
case 1: s.getdata();
	break;
case 2:s.diagonal();
	break;
case 3: s.transpose();
	break;
case 4: s.uppertriangular();

}

cout<<"Enter 0 to continue and  any other key to exit\n";
cin>>y;
}while(y==0);


return 0;
}