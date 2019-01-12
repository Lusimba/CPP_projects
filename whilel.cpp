#include <iostream>
using namespace std;

class Countries{
private:
    string name, nation;
public:
    void City(string town){
        name = town;
    }
    string printCity(){
        return name;
    }
    void land(string cont){
        nation = cont;
    }
    string printland(){
        return nation;
    }

};
int main(){
    string cont, town;
    Countries country;
    cout<<"Enter your country's name"<<endl;
    cout<<"Enter the name of your city"<<endl;
    cin>>cont;
    cin>>town;
    country.land(cont);
    country.City(town);
    cout<< "The capital city of "<<country.printland()<<" is "<< country.printCity()<<endl;
    return 0;
}
