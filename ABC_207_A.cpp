#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int m1 = a > b ? a : b;
 
	int x = (a + b) - m1;
 
	int m2 = c > x ? c : x;
	cout << m1 + m2 << endl;
	return 0;
}
