#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    int row=1;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space-=1;
        }
        int col=1;
        while(col<=row){
            cout<<row;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}

// output:
// enter number 4
//    1
//   22
//  333
// 4444