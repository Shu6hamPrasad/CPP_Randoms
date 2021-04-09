#include<iostream>
#include<cmath>
using namespace std;
double Discriminant(double a, double b, double c){
    double discriminantP1 = pow( b , 2 ) ;
    double discriminantP2 = 4 * ( a * c ) ;
    double discriminantFinal = discriminantP1-discriminantP2;
    return discriminantFinal;
}
int main(){
    double inputA , inputB , inputC ;
    cout << "Enter coefficient A: ";
    cin >> inputA;
    cout << "Enter coefficient B: ";
    cin >> inputB;
    cout << "Enter coefficient C: ";
    cin >> inputC;
    double res = Discriminant( inputA , inputB , inputC ) ;
    cout << "The discriminant is: " << res << endl;
    return 0 ;
}