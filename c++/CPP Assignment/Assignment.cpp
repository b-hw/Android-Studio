#include <iostream>
#include <stdlib.h>     
#include <time.h> 
using namespace std;

int main()
{
	int num, i1, i2;
	srand(time(0));
		num = rand() % 10 + 1;
		cout << num << endl;

    for (int i = 1; i <= num; i++) {
        i1 = i;
        i2 = i1;
        int cub = i * i1 * i2;
        cout << "Number is " << i << " and the cube of " << i << " is: " << cub << endl;
    }

}