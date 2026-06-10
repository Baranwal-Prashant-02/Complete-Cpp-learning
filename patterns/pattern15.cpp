#include<iostream>
using namespace std;
int main()
{
    int n, row=1;
    cout<<"enter your number";
    cin>>n;

    while(row <= n)
    {
        int col=1;
        while (col <= row)
        {
            char ch=('A' + row - 1);
            cout<<ch;
            col += 1;
        }
        cout<<endl;
        row += 1;
    }
}

// output:
// enter your number4
// A
// BB
// CCC
// DDDD