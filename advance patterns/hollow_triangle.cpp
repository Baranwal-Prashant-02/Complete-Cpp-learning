// hollow triangle
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
            if(col==0 || col==row || row == n - 1){   //only this line changed from hollow pyramid code (added row ==n-1)
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
// * * * * *