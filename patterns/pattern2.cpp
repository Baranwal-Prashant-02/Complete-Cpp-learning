#include<iostream>
using namespace std;
int main()
{
    int n , i=1;
    cout<<"enter the number";
    cin>>n;
    
    while(i<=n){
        int j=1;
        while(j<=n)
        {
            cout<<i;
            j+=1;
        }
    cout<<endl;
    i+=1;
    }
    
}
// output:
// enter the number4
// 1111
// 2222
// 3333
// 4444