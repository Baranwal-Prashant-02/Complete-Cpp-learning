#include<iostream>
using namespace std;
int main(){
    int n, i=1;
    char ch = 'A';
    cout<<"enter the number";
    cin>>n;
    while (i<=n)
    {
       int j=1;
       while(j<=n){
        
        cout<<ch;
        ch +=1;
        j+=1;
       }
       cout<<endl;
       i+=1;
    }
}   

// output:
// enter the number4
// ABCD
// EFGH
// IJKL
// MNOP