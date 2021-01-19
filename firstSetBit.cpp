#include <iostream>
#include <math.h>
using namespace std;
//Correct upto 32 decimal places
void printbit(int n) {
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}

void printbituserec(int n){
    if (n > 1)
        printbituserec(n / 2);
    cout << n % 2;
}

int getFirstSetBitPos(int n)
{
    // printbit(n);
    // cout<<endl;
    // printbit(-n);
    // cout<<endl;
    // printbit(n & -n);
    // cout<<endl;
    // printbit(log2(n & -n));
    // cout<<endl;
    // printbit(log2(n & -n)+1);
    // cout<<endl;
	return log2(n & -n) + 1;
}

int main()
{
	int n = 12;
	cout << getFirstSetBitPos(n);
	return 0;
}
