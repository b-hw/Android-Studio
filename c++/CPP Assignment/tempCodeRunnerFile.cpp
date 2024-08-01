#include <iostream>
#include <stdlib.h>     
#include <time.h> 
using namespace std;

int main()
{
	int  l, cube, num, count, x;
    
    // l is length, cube length is equal size 
    cout<<"Enter an integer number : ";
    cin>>l;
    cube = l * l * l;
	cout<<"The cube of "<< l <<" is "<< cube <<" points"<<endl;
    
    cout<<"Enter the number you are looking for : ";
    cin>>num;
    count = 0;
    srand(time(0));

    for (int i=1; i <= cube;i++) {        
	// x is random number , print x to check the result
        x = rand() % 10;
        cout<<x<<" ";
        if(x == num){
            count++;
        }
    }

    cout<<"\nthis number was appeared "<<count<<" time(s)";
}