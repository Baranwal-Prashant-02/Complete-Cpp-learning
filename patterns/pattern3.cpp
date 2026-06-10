#include<iostream>
using namespace std;
int main()
{
    int n , i=1;
    cout<<"enter the number";
    cin>>n;
    
    while(i<=n){
        int j=1; //initilize here because of its scope
        while(j<=n)
        {
            cout<<j;
            j+=1;
        }
    cout<<endl;
    i+=1;
    }
    
}

// O/p
//enter the number 3
// 123
// 123
// 123