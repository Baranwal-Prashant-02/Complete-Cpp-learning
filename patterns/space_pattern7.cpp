#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int row=1;
    int count=1;

    while(row<=n){
        int space= n-row;
        while(space){
            cout<<" ";
            space-=1;
        }
        
        int col=1;
        while(col<=row){
            
            cout<<count;
            count+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}  

// output:
// enter the number 3
//   1
//  23
// 456