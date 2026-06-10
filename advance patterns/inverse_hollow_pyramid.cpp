//inverse hollo pyramid 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for(int row =0 ; row<n; row +=1){
        for (int col =0; col<row; col=col+1 ){
            cout<<" ";
        }
        for (int col =0; col<n-row; col=col+1 ){
            if(col==0 || col==n-row-1 ){  //here we see that col==n-row-1 because the col goes upto n-row only 
                                          // thats why we use here(col == n-row-1) to check the last row to print star 
                cout<<"* ";   
            }
            else{
                cout<<"  ";
            }
        } 
        cout<<endl;
    }
    return 0;
}

// enter the number : 5
// *       * 
//  *     * 
//   *   * 
//    * * 
//     * 