#include<iostream>
using namespace std;

int main(){
    int year;
    cout<< "Enter a year to check if leap year" << endl;
    cin>>year;
    if (year%4 == 0){
            if(year%100 == 0){
                if(year%400 == 0){
                    cout <<"It is a leap year" << endl;
                }else{
                    cout << "It is not a leap year" << endl;
                }
            }else{
                cout << "It is a leap year" << endl;
            }
    }else{
        cout<< "Not a leap year" << endl;
    }
    return 0;
}
