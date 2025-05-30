#include <iostream>
using namespace std;

int obtenerNumeroMayor(int n){
	int numero, mayor;
    cout <<"Ingrese el primer numero:" << endl;
    cin >> mayor;
        
    for( int i = 2; i <= n; i++) {
        cout <<"Ingrese el siguiente numero:"<< endl;
        cin >> numero;
        if(numero > mayor) {
            mayor = numero;
        }
    }
    return mayor;

}


int main() {
    int n, num, mayor;
    cout << "BIENVENIDO A MI PROGRAMA!" << endl;
    cout <<"Ingrese la cantidad de numeros que desea evaluar: "<< endl;
    cin >> n;
    
    if(n > 0) {
        int mayor = obtenerNumeroMayor(n);
        cout <<"El mayor numero es: "<< mayor << endl;
	} else {
		cout << "ingrese una cantidad mayor que cero porfavor." << endl;
	}
	cout << "GRACIAS POR UTILIZAR MI PROGRAMA <3" << endl;
    return 0;
}
