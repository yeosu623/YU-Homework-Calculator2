#include <iostream>
#include <cstring>
#include "oper.h"
using namespace std;

int main() {
	int x, y;
	Add<int> a;
	Sub<int> s;
	Mul<int> m;
	Div<int> d;
	Rem<int> r;
	
	char op[10];

	while (true) {
		cout << "두 정수와 연산자를 입력하세요(예시 : 5+3) : ";
		cin >> x >> op >> y;

		if (strcmp(op, "+") == 0) {
			a.setvalue(x, y, '+');
			a.calculate();
			a.print();
		}
		else if (strcmp(op, "-") == 0) {
			s.setvalue(x, y, '-');
			s.calculate();
			s.print();
		}
		else if (strcmp(op, "*") == 0) {
			m.setvalue(x, y, '*');
			m.calculate();
			m.print();
		}
		else if (strcmp(op, "/") == 0) {
			d.setvalue(x, y, '/');
			d.calculate();
			d.print();
		}
		else if (strcmp(op, "%") == 0) {
			r.setvalue(x, y, '%');
			r.calculate();
			r.print();
		}
		else {
			cout << "Unknown operator. Try again." << endl;
		}
	}
}