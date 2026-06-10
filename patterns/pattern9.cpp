#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"enter the number";
    cin>>n;
    while (i<=n){
        int j=1;
        int value=i; // initilizes  here because of while loop scope
    // putting value of i ine value b/c we can't directly increment i it willl disturb whole code or flow
        while(j<=i){
            cout<<value<<" ";
            value+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}

// optput:
// enter the number5
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 
// 5 6 7 8 9 