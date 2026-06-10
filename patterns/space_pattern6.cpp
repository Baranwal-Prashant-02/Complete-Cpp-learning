#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int row=1;

    while(row<=n){
        int space= row-1;
        while(space){
            cout<<" ";
            space-=1;
        }
        int count=row;
        int col=1;
        while(col<=(n-row+1)){
            cout<<count;
            count+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}

// output:
// enter the number 4
// 1234
//  234
//   34
//    4