#include<iostream>
using namespace std;
int main(){
    int n,num;
    cout<<"enter the number : ";
    cin>>num;
    n=num/2;  // to bind up both full and inverse full pyramid into given number of num.
              //  (otherwise the full pyramid takes num row and after than inverse full aslo consume num rows and both collectively takes 16 rows )
    
    //code for full pyramid
    for(int row =0 ; row<n; row +=1){
        for (int col =0; col<n-row-1; col=col+1 ){
            cout<<" ";
        }
        for (int col =0; col<row+1; col=col+1 ){
            cout<<"* ";
        } 
        cout<<endl;
    }

    //for inverse full pyramid
    for(int row =0 ; row<n; row +=1){
        for (int col =0; col<row; col=col+1 ){
            cout<<" ";
        }
        for (int col =0; col<n-row; col=col+1 ){
            cout<<"* ";
        } 
        cout<<endl;
    }
    return 0;
}
// enter the number : 8
//    * 
//   * * 
//  * * * 
// * * * * 
// * * * * 
//  * * * 
//   * * 
//    *