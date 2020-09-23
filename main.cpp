#include <iostream>
#include "sum.h"
#include "dif.h"
#include "div.h"
#include "c.math"
#include "prod.h"

using namespace std;

int Sum(int a, int b){
	return a + b;
}
int main(){
	cout << "Hello World!!!";
	int a , b;
	cout << "Enter a and b";
	cin >> a , b;
	int res = Sum(a,b);
	cout << "Sum = " << res << endl;
}