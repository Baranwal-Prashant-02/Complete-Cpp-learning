#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    

    cout<<"enter the number";
    cin>>n;
    while (i<=n){
        int j=1;
        int value=i; // initilizes  here because of while loop scope
    // putting value of i ine value b/c we can't directly increment i it willl disturb whole code or flow
        while(j<=i){
            cout<<value<<" ";
            value-=1; // decrement
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}

/*
 THIS LOGIC ALSO PRINT THE SAME THING BUT HERE WE NOT USE ANY EXTRA VARIABLE LIKE (VALUE)

#include<iostream>
using namespace std;
int main()
{
    int n , i=1;
    cout<<"enter the number";
    cin>>n;
    
    while(i<=n){
        int j=1;       //initilize here because of its scope
        while(j<=i)
        {
            cout<<i-j+1;     // to print reverse number in pattern EACH LINE ROW INITIATE WITH " i ". we use i instead of n
            j+=1;
        }
    cout<<endl;
    i+=1;
    }
}
*/



// output:
// enter the number5
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 