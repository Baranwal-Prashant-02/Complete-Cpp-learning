#include<iostream>
using namespace std;
int main()
{
    int n, row=1;
    char val='A'; //we have to declare here because we need to update this for each iteration(both loops)
    cout<<"enter your number";
    cin>>n;
    while(row <= n)
    {
        int col=1;
        while (col <= row)
        {
            cout<<val;
            val +=1;
            col += 1;
        }
        cout<<endl;
        row += 1;
    }
}
// output:
// enter your number 5     
// A
// BC
// DEF
// GHIJ
// KLMNO