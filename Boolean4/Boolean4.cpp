#include <iostream>
using namespace std;

int main()
{
	cout << "Enter numbers to chek if inequality is fair\n";
	cout << "A>2 and B<=3\n";
	int a;
	int b;
	cin >> a;
	cin >> b;
	if (a>2&& b<=3) { cout << "fair"; }
	else(cout << "unfair");


}