#include <iostream>
#include "sum.h"
#include "dif.h"
#include "div.h"
#include "c.math"
#include "prod.h"

using namespace std;

int main(){
	cout << "Hello World!!!";
	int a , b;
	cout << "Enter a and b";
	cin >> a , b;
	char op;
	cout << "Enter the operation(+, -, *, /)" << endl;
	cin >> op;
	switch(op){
		case '+':
		cout <<Sum(a,b) << endl;
		case '-':
		cout <<Dif(a,b) << endl;
		case '*':
		cout <<Prod(a,b) << endl;
		case '/':
		cout <<Div(a,b) << endl;
		
	}
}