#include <iostream>
#include <cstring>
#include "oper.h"
using namespace std;

//���۷���
//���ø� Ŭ���� ��� : https://pang2h.tistory.com/387

int main() {
	int x, y;
	double xd, yd;
	string type;

	Add<int> a;
	Sub<int> s;
	Mul<int> m;
	Div<int> d;
	Rem<int> r;

	Add<double> ad;
	Sub<double> sd;
	Mul<double> md;
	Div<double> dd;
	Rem<double> rd;

	char op[10];

	cout << "�Է��� �ڷ��� ����(int | double) : ";
	cin >> type;
	if (type == "int") {
		while (true) {
			cout << "�� ������ �����ڸ� �Է��ϼ���(���� : 5 + 3)(���� �ʼ�!) : ";
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

	else if (type == "double") {
		while (true) {
			cout << "�� �Ǽ��� �����ڸ� �Է��ϼ���(���� : 5.1 + 3.3)(���� �ʼ�!) : ";
			cin >> xd >> op >> yd;

			if (strcmp(op, "+") == 0) {
				ad.setvalue(xd, yd, '+');
				ad.calculate();
				ad.print();
			}
			else if (strcmp(op, "-") == 0) {
				sd.setvalue(xd, yd, '-');
				sd.calculate();
				sd.print();
			}
			else if (strcmp(op, "*") == 0) {
				md.setvalue(xd, yd, '*');
				md.calculate();
				md.print();
			}
			else if (strcmp(op, "/") == 0) {
				dd.setvalue(xd, yd, '/');
				dd.calculate();
				dd.print();
			}
			else if (strcmp(op, "%") == 0) {
				rd.setvalue(xd, yd, '%');
				rd.calculate();
				rd.print();
			}
			else {
				cout << "Unknown operator. Try again." << endl;
			}
		}
	}
	else {
		cout << "Unknown typename." << endl;
	}
}