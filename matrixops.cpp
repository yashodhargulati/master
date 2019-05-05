/*
  Matrix Operations
*/




#include<iostream>
using namespace std;
class matrix{
public:
int a[10][10],b[10][10],c[10][10], row1,column1,row2, column2;
int i,j,k;

void getdata(){
cout<<"Enter the number of columns\n";
cin>>column1;
cout<<"Enter the number of rows\n";
cin>>row1;
cout<<"Enter the elements for the 1st matrix\n";
for(i=0;i<row1;i++){
for(j=0;j<column1;j++){
cin>>a[i][j];
}}
cout<<"Enter the number of columns for the 2nd matrix\n";
cin>>column2;
cout<<"Enter the number of rows for the 2nd matrix\n";
cin>>row2;

cout<<"Enter the elements for the 2nd matrix\n";
for(i=0;i<row2;i++){
for(j=0;j<column2;j++){
cin>>b[i][j];
}}

}

void addition(){
if(row1==row2&&column1==column2){
for(i=0;i<row1;i++){
for(j=0;j<column1;j++){
c[i][j]=a[i][j]+b[i][j];
cout<<c[i][j]<<endl;
}}
}
else{
cout<<"Addition is not possible\n";
}

}

void subtraction(){
if(row1==row2&&column1==column2){
for(i=0;i<row1;i++){
for(j=0;j<column1;j++){
c[i][j]=a[i][j]-b[i][j];
cout<<c[i][j]<<endl;
}}
}
else{
cout<<"Subtraction is not possible\n";
}

}

void multiplication(){
for(i=0;i<row1;i++){
for(j=0;j<column1;j++){
c[i][j]=0;
}}
if(row1!=column2){
cout<<"Multiplication is not possible\n";
}
else{

	for(i=0;i<row1;i++){
for(j=0;j<column1;j++){
c[i][j]=0;
}}

for(i=0;i<column2;i++){
for(j=0;j<row2;j++){
for(k=0;k<row1;k++){
c[i][j]+=a[i][k]*b[k][j];

}}}


for(i=0;i<row1;i++){
	for(j=0;j<column1;j++){
		cout<<c[i][j]<<endl;
	}
}

}}
};

int main(){
int x,y;
matrix s;
do{
cout<<"1.Getdata\n2.Addition\n3.Subtraction\n4.Multiplication\n";
cin>>x;
switch(x){
case 1: s.getdata();
	break;
case 2:s.addition();
	break;
case 3: s.subtraction();
	break;
case 4: s.multiplication();

}

cout<<"Enter 0 to continue and  any other key to exit\n";
cin>>y;
}while(y==0);


return 0;
}



/* Output
1.Getdata
2.Addition
3.Subtraction
4.Multiplication
1
Enter the number of columns
3
Enter the number of rows
3
Enter the elements for the 1st matrix
1
2
3
4
5
6
7
8
9
Enter the number of columns for the 2nd matrix
3
Enter the number of rows for the 2nd matrix
3
Enter the elements for the 2nd matrix
1
2
3
4
5
6
7
8
9
Enter 0 to continue and  any other key to exit
0
1.Getdata
2.Addition
3.Subtraction
4.Multiplication
2
2
4
6
8
10
12
14
16
18
Enter 0 to continue and  any other key to exit
0
1.Getdata
2.Addition
3.Subtraction
4.Multiplication
3
0
0
0
0
0
0
0
0
0
Enter 0 to continue and  any other key to exit
0
1.Getdata
2.Addition
3.Subtraction
4.Multiplication
4
30
36
42
66
81
96
102
126
150
Enter 0 to continue and  any other key to exit
*/


