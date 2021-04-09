#include <iostream>
#include <cmath>
using namespace std;
double Discriminant;
void rootPredict(){
    double check1 = sqrt(Discriminant);
    int check2 = (int) check1;
    double check3 = check2;
    if (Discriminant > 0){
        if (check1 == check3) {
            cout << "Roots are rational, real unequal. " << endl;
        }
        else {
            cout << "Roots are irrational, real and unequal. " << endl;
        }
    }
    else if (Discriminant == 0){
        cout << "Roots are real and equal. " << endl ;
    }
    else{
        cout << "Roots are imaginary. " << endl ;
    }
}
void DiscriminantFinder(double a , double b, double c){
    double discriminantP1 = pow(b,2);
    double discriminantP2 = 4*(a*c);
    Discriminant = discriminantP1 - discriminantP2;
    rootPredict();
}
int main(){
    double a,b,c;
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;
    DiscriminantFinder(a,b,c);
}