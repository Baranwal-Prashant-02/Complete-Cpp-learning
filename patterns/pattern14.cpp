// #include<iostream>
// using namespace std;
// int main(){
//     int n, row=1;
//     cout<<"enter the number";
//     cin>>n;
//     while (row <= n)
//     {
//        int col=1;
//        while(col <= n)
//        {
//        char ch= row + col + 'A' - 2;
//        cout<<ch;
//        col+=1;
//        }
//       cout<<endl;
//       row +=1; 
//     }

// }


// another way to print same pattern
#include<iostream>
using namespace std;
int main(){
    int n, row=1;
    cout<<"enter the number";
    cin>>n;
    while (row <= n)
    {
       int col=1;
       //in next line we calculate the 1st value of each row by formula and increment it for all columns

       char ch= 'A' + row-1; // if we put this in 2nd while the it start from first character for all row iteration
                              //we need new (incremented) char for new row
       while(col <= n)
       {
       cout<<ch;
       ch+=1;
       col+=1;
       }
      cout<<endl;
      row +=1; 
    }
}



// output:
// enter the number3
// ABC
// BCD
// CDE