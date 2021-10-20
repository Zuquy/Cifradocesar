#include<iostream>

using namespace std;
class Cesar
{
private:
	int orden;
	int codigo;
	char cadenaO[256];
public:
	Cesar(char, int, char[]);
	string cifrar();
	string descifrar();
	void cesarC();
};
Cesar::Cesar(char _orden, int _codigo, char _cadenaO[]) {
	orden = _orden;
	codigo = _codigo%26;
	for (int i = 0; i < strlen(cadenaO); ++i)
		cadenaO[i] = _cadenaO[i];
}
string Cesar::cifrar() {
	for (int i = 0; i < strlen(cadenaO); ++i) {
		if (cadenaO[i] + 0 > 96 && cadenaO[i] + 0<123) {
			cadenaO[i] = cadenaO[i] + codigo;
			if (cadenaO[i] + 0 >= 123) {
				cadenaO[i] = cadenaO[i] - 26;
			}
		}
		else if (cadenaO[i] + 0 >= 65 && cadenaO[i] + 0 < 91) {
			cadenaO[i] = cadenaO[i] + codigo;
			if (cadenaO[i] + 0 > 90) {
				cadenaO[i] = cadenaO[i] - 26;
			}
		}
	}
	return cadenaO;
}
string Cesar::descifrar() {
	for (int i = 0; i < strlen(cadenaO); ++i) {
		if (cadenaO[i] + 0 > 96 && cadenaO[i] + 0 < 123) {
			cadenaO[i] = cadenaO[i] - codigo;
			if (cadenaO[i] + 0 <= 96) {
				cadenaO[i] = cadenaO[i] + 26;
			}
		}
		else if (cadenaO[i] + 0 > 64 && cadenaO[i] + 0 < 91) {
			cadenaO[i] = cadenaO[i] - codigo;
			if (cadenaO[i] + 0 <= 64) {
				cadenaO[i] = cadenaO[i] + 26;
			}
		}
	}
	return cadenaO;
}
void Cesar::cesarC() {
	if (orden == 'c') {
		cout << cifrar();
	}
	else if (orden == 'd') {
		cout << descifrar();
	}
	else
	{
		cout << "opcion invlida, cerrando programa";
	}
}



