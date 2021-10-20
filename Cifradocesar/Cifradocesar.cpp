// Cifradocesar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include<cstring>
#include<stdio.h>
#include "Cesar.h"

using namespace std;
char p[256];
char opcion;
string codigoS;
int codigo;

int main()
{
    cout << "introduzca la operacion que desea (cifrar o descifrar (c/d))"<<endl;
    cin >> opcion;
    cout << "Introduzca el numero de cesar" << endl;
    cin >> codigoS;
    try
    {
        codigo = stoi(codigoS);
    }
    catch (const exception& e)
    {
        e.what();
        cout << "Formato incorecto, cerrando programa";
        throw;
    }
    cout<<("Introduza el mensaje por favor\n");
    getchar();
    gets_s(p);
    Cesar cesar(opcion, codigo, p);
    cesar.cesarC();

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
