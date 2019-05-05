/*
  Password creation.
*/



#include<iostream>
using namespace std;
class matrix{
    public:
    int i,j,k,l,p;
    char a[6];
    void getdata(){
        cout<<"Enter the elements";
        for(i=0;i<6;i++){
            cin>>a[i];
        }
    }
void password(){
    int count=1;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            for(k=0;k<6;k++){
                for(l=0;l<6;l++){
                    
                    if(a[i]==a[j]||a[i]==a[k]||a[i]==a[l]||a[j]==a[k]|a[j]==a[l]||a[k]==a[l]){
                        
                        continue;
                    }
                    else{
                        
                        cout<<count<<"."<<a[i]<<a[j]<<a[k]<<a[l]<<"\t";
                            count++;
                            
                    }

            }}
        }
    }
    
}};
    int main(){
        matrix s;
        int x,y;
do{
    cout<<"1.Enter elements\n2.create passwords\n";
    cin>>x;
    switch(x){
            case 1: s.getdata();
            break;
            case 2: s.password();


    }

    cout<<"Enter 1 to continue or any other key to exit";
    cin>>y;
}while(y==1);
return 0;
    }

/*
NOTE: Windows powershell and Command prompt do not show all the results, so only 41 results have been shown. 
Output
1.Enter elements
2.create passwords
1
Enter the elements
a
b
c
d
e
f
Enter 1 to continue or any other key to exit1
1.Enter elements
2.create passwords
2
1.abcd  2.abce  3.abcf  4.abdc  5.abde  6.abdf  7.abec  8.abed 9.abef  10.abfc 11.abfd 12.abfe 13.acbd 14.acbe 15.acbf 16.acdb 17.acde 18.acdf 19.aceb 20.aced 21.acef 22.acfb 23.acfd 24.acfe
25.adbc 26.adbe 27.adbf 28.adcb 29.adce 30.adcf 31.adeb 32.adec 33.adef 34.adfb 35.adfc 36.adfe 37.aebc 38.aebd 39.aebf 40.aecb
41.a.....................

*/


