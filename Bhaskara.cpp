#include <iostream>
#include <cmath>
using namespace std;

double a, b, c, delta;
float x1, x2;


int bhaskara(double a, double b, double c, double delta, float x1, float x2) {
	x1 = (b * -1 + sqrt(delta)) / 2 * a;
	x2 = (b * -1 - sqrt(delta)) / 2 * a;
	if (delta == 0) {
		cout << "e a raíz é: " << x1;
	}
	else {
		cout << "e as raizes da equação passada são: \n x1 = " << x1 << "\n x2 = " << x2 << "\n";
	}
	return 0;
}
int main() {
	setlocale(LC_ALL, "portuguese");

	cout << "Digite o valor de A, B e C \n";
	cin >> a >> b >> c;

	delta = b * b - 4 * a * c;

	if (delta > 0) {
		cout << "A equação terá duas raizes reais distintas ";
		bhaskara(a, b, c, delta, x1, x2);
	}
	else if (delta == 0) {
		cout << "A equação terá somente uma raiz ";
		bhaskara(a, b, c, delta, x1, x2);
	}
	else {
		cout << "A equação gera raizes Não reais";
		bhaskara(a, b, c, delta, x1, x2);
	}


}