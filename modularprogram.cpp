#include<iostream>
using namespace std;

class sort{
    public:
    int arr[22];
    int i,j,n,mini,k;


void swap(int *xp, int *yp){
int temp=*xp;
*xp=*yp;
*yp=temp;
}

void selectionsort(){

for(i=0;i<n;i++){
    mini=i; 
    for(j=i+1;j<n;j++){ 
        if(arr[mini] > arr[j]){ 
            mini=j;
            }
    }
   
    swap(&arr[mini], &arr[i]);
}
for(i=0;i<n;i++){
        cout<<arr[i];

    }

}



void bubblesort(){
bool swapped;
for(i=0;i<n-1;i++){
    swapped=false;
    for(j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(&arr[j], &arr[j+1]);
            swapped=true;
        }

    }

    if(swapped==false){

        break;
    }

}

for(i=0;i<n;i++){
        cout<<arr[i];

}}

void insertionsort(){
for(i=1;i<n;i++){ 
    k=arr[i];
    j=i-1;
    while(j>=0 && k<arr[j]){
        arr[j+1]=arr[j]; 
        j-=1;
        arr[j+1]=k; 
        }
}

for(i=0;i<n;i++){
        cout<<arr[i];
}
}

void getdata(){
cout<<"Enter the Limit for the amount of numbers";
    cin>>n;
    cout<<"Enter the elements in the array";
    for(i=0;i<n;i++){
        cin>>arr[i];


}

}};



int main(){
    int x,y;
    sort s;

    do{
        cout<<"Enter\n 1.Getdata\n2.Bubble sort\n3.Selection sort\n4.insertion sort\n";
        cin>>x;
        switch(x){
                case 1: s.getdata();
                    break;
                case 2: s.bubblesort();
                    break;
                case 3: s.selectionsort();
                    break;
                case 4: s.insertionsort();


        }
            cout<<"Enter 1 to continue and any other key to exit";
            cin>>y;
                }while(y==1);

    return 0;

}
