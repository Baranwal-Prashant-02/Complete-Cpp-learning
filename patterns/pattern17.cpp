#include<iostream>
using namespace std;
int main(){
    int n, row=1;
    cout<<"enter the number";
    cin>>n;
    while (row <= n)
    {
       int col=1;
       while(col <= row)
       {
       char ch= row + col + 'A' - 2;
       cout<<ch;
       col+=1;
       }
      cout<<endl;
      row +=1; 
    }

}

// output:
// enter the number5
// A
// BC
// CDE
// DEFG
// EFGHI