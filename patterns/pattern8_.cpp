#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    int count=1; //we have to declare here because we need to update this for each iteration(both loops)
    cout<<"enter the number";
    cin>>n;
    while (i<=n){
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}

// output:
//     enter the number5
//     1 
//     2 3 
//     4 5 6 
//     7 8 9 10 
//     11 12 13 14 15