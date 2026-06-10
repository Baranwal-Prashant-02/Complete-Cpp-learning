#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=(n-row+1)){  
            cout<<"*";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}

// output:
// enter the number : 4
// ****
// ***
// **
// *