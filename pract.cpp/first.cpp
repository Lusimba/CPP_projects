#include <iostream>
using namespace std;
int main()
{
    int i, n, factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (i = 1; i <= n; ++i) {
        factorial *= i;   // factorial = factorial * i;
    }

    cout<< "Factorial of "<<n<<" = "<<factorial;
    return 0;
}
/*
bool accept(){
    cout << "Do you want to proceed? (y or n)?\n";
    char answer = 0;
    cin >> answer;

    if (answer == 'y') return true;
    return false;
}

double square(double x){
    return x*x;
}

void print_square(double x){
    cout << "The square of " << x <<" is " << square(x) << " and its size is "<< sizeof(char) <<"\n";
}

int main (){
    double x;
    cout<< "Enter a number ";
    cin>> x;
    print_square(x);
    accept();
}
*/
