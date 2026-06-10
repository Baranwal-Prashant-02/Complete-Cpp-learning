// we use stack memory as default in cpp and any other programming also (auto managed by compiler)
//and some more advance data structure are also used but it need to maintain / update mannually (heap or dynamic m/m alloacation)

// in cpp Array is only use to store the collection of similar data type values in fixed size space 

#include<iostream>
using namespace std;
int main(){
    int chaiTemperature[5] = {85, 90, 88, 92, 89};

    cout << "Chai temperature: "<<endl;
    for(int i = 0 ; i < 5 ; i++ ){
        cout << chaiTemperature[i] << " degree C \n";  //simple print all the values of array
    }
cout << "----------        -------------         -------------"<<endl;

    cout<<"behind the seen twist: "<<endl;
    for(int i = 0 ; i <= 5 ; i++ ){
        cout << chaiTemperature[i] << " degree C \n";  //simple print all the values of array
    }

    return 0;
}

/*
Chai temperature: 
85 degree C 
90 degree C 
88 degree C 
92 degree C 
89 degree C 
----------        -------------         -------------
behind the seen twist: 
85 degree C 
90 degree C 
88 degree C 
92 degree C 
89 degree C
429 degree C    // m/m is not alloted for 6th value ie array is fixed size  data type 
                // so here it is showing the garbage value 
*/