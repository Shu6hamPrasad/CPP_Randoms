#include<iostream>
using namespace std;
int main(){
    int sigma ;
    cout << "Enter the total no. of values: ";
    cin >> sigma;
    double k [sigma] = {};
    for (int i = 1 ; i <= sigma ; i++){
        cout << "Enter value " << i << ": " ;
        cin >> k[i];
    }
    double summer;
    for (int l = 0 ; l < sigma ; l++){
        summer += k[l];
    }
    double result = summer/(double)sigma;
    cout << "The average is : " << result << endl;
    return 0;
}