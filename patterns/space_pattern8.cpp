#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the nubmer : ";
    cin>>n;
    int row=1;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space -=1;
        }
        int col=1;
        while(col<=row){
            cout<<col;
            col+=1;
        }
        int start = row-1;
        while(start){
            cout<<start;
            start -=1;

        }
        cout<<endl;
        row+=1;
    }
}

// enter the nubmer : 4
//    1
//   121
//  12321
// 1234321