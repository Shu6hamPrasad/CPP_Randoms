#include <iostream>
#include <cmath>
using namespace std;
double Discriminant , a , b , c , k , l;
void MainCalcPlus(){
    ::k = (-::b+sqrt(Discriminant))/(2*::a);
    cout << k <<endl;
}
void MainCalcMinus(){
    ::l = (-::b-sqrt(Discriminant))/(2*::a);
    cout << l <<endl;
}
void DisCalc(double a, double b, double c){
    double discriminantP1 = pow( b , 2 ) ;
    double discriminantP2 = 4 * ( a * c ) ;
    Discriminant = discriminantP1-discriminantP2;
    MainCalcPlus();
    MainCalcMinus();
}
void inputs(){
    cout << "Enter coefficient a: ";
    cin >> ::a;
    cout << "Enter coefficient b: ";
    cin >> ::b;
    cout << "Enter coefficient c: ";
    cin >> ::c;
    DisCalc(a,b,c);
}
int main(){
    inputs();
    return 0;
}
