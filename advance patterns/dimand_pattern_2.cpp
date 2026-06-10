//similar to dimond pattern but it not print the repeated(mid) row twice(one for full pyramid and next for inverse pyramid) 
#include<iostream>
using namespace std;
int main(){
    int n,num;
    cout<<"enter the number : ";
    cin>>num;
    n=num/2;
    

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
    for(int row =1 ; row<n; row +=1){   // only this line changed we change the initial value of row =1 
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
// * * * *     //this line got repeated for both pyramid(full and inverse full) in 1st dimond_pattern code(here we fixed it )
//  * * * 
//   * * 
//    * 