#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main(){
    float x;
    cout<< "Enter the cost per person $: ";cin>>x;
    cout.setf(ios::fixed);
    cout<<setprecision(2);
    cout<<"The cost per person is: "<<x<<endl;
    if (x>5)
        cout<<"Okay, have fun!"<<endl;
    else
        cout<<"Nothing to say"<<endl;
    return 0;
}
