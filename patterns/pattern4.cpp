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
            cout<<n-j+1; // to print reverse number in pattern --> 
            j+=1;
        }
    cout<<endl;
    i+=1;
    }
}



// output:
// enter the number3
// 321
// 321
// 321