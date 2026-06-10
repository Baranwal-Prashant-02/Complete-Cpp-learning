#include<iostream>
using namespace std;
int main(){
    int n, i=1;
    cout<<"enter the number";
    cin>>n;
    while (i<=n)
    {
       int j=1;
       while(j<=n){
        char ch = 'A' + j -1;  
        // if we  put i in place of j in line(11) we get AAAA instead of ABCD
        cout<<ch;
        j+=1;
       }
       cout<<endl;
       i+=1;
    }
}    

// output :
// enter the number4
// ABCD
// ABCD
// ABCD
// ABCD