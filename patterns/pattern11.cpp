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
        char ch = 'A' + i -1;  
        // if we  put j in place of i in line(11) we get ABCD instead of AAAA  see code 12
        cout<<ch;
        j+=1;
       }
       cout<<endl;
       i+=1;
    }
}

// output:
// enter the number4
// AAAA
// BBBB
// CCCC
// DDDD