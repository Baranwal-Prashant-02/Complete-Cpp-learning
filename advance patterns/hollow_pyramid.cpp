//hollow pyramid 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for(int row=0; row<n; row+=1){
        for(int col=0; col<n-row-1; col+=1){   
            cout<<" ";  //for external spaces
        }
        for(int col=0; col<row + 1; col+=1){ //for star with spaces
            if(col==0 || col==row){
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
//     * 
//    * * 
//   *   * 
//  *     * 
// *       * 