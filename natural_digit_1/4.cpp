#include <iostream>
#include <conio.h>

using namespace std;

int gcd( int a , int b ) {
		if ( b == 0 )
			return a;
		else
			gcd( b , (a % b) );
}

int main() {
	cout << gcd (5 , 10);
	getch();
	return 0;
}