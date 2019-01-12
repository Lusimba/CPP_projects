#include <iostream>
#include <iomanip>
using namespace std;

class moneyTrans{
private:
    int sender_acc, receiver_acc, bal; //variables declared in the private access specifier

public:
    moneyTrans(){
        bal = 10000;
        sender_acc = 1214348;
    } // This is a constructor
    int Transfer(int receiver, int cash){
        receiver_acc = receiver;
        bal -= cash;
        return bal;
    } // function to Transfer money
    int showBal(){
        return bal;
    } //show balance
    int myAcc(){
        return sender_acc;
    } //show the sender's account number
}; // functions declared in the public access specifier
int main(){
    moneyTrans trans;
    int receiver, cash=0;
    string name;
    char opt;
    cout<<"Please enter your name: "<<endl;
    cin>>name; // obtain the name of the sender
    cout<<"Welcome "<<name<<"! Your account balance is "<<trans.showBal()<<endl;
    cout<<"Would you like to transfer money?(y for yes and n for no)"<<endl;
    cin>>opt; // takes in a single opt 'y' to denote yes
    if (opt=='y'){
        cout<<"Please enter the amount to transfer"<<endl;
        cin>> cash;
        cout<<"Enter receiver's account number"<<endl;
        cin>>receiver;
        trans.Transfer(receiver, cash);
        cout<<"Transfer confirmed! INR. "<<cash<< "/- has been sent from "<< trans.myAcc() <<". Your new balance is: "<<trans.showBal()<<endl;
    }
    else
        cout<<"Thank you! see you again"<<endl;
    return 0;
}
