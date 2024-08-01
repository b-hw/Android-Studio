#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main () {
    
    int n;
    cout << "Enter four digit number : ";
    cin >> n;
    
    int num1, num2, num3, num4;
    
    num1 = n / 1000;
    num2 = n / 100 - 10 * num1;
    num3 = n / 10 - (100 * num1 + 10 * num1);
    num4 = n % 10;
    
    // Replace each digit by the sum of that digit plus 7 modulus 10
    // arr = array , E = encrypted
    int arr[4] = {num1, num2, num3, num4};
    int arrE[4];
    for (int  i = 0; i < 4; i++) {
        arrE[i] = (arr[i] + 7) % 10;
        cout<<arrE[i]<<" ";
    }
    
    // swap the first digit with the third
    int temp;
    temp = arrE[0];
    arrE[0] = arrE[2];
    arrE[2] = temp;
    
    int encrypted = 0;
    for (int i = 0; i < 4; i++) {
        encrypted += pow(10, 3 - i) *  arrE[i];
    }
    
    cout << "\nThe encrypted four digit number is : " << encrypted;
    return 0;
}
