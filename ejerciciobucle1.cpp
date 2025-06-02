#include <iostream>
using namespace std;

int main(){
    int numero, opcion;
    cout << "BIENVENIDO A MI PROGRAMA!" << endl;
    do {
    
	    do {
	        cout << "Ingrese la cantidad de multiplos de 7 que desea conocer: " << endl;
	        cin >> numero;
	
	        if (numero <= 0) {
	            cout << "Por favor, ingrese un numero mayor a cero." << endl;
	        }
	    } while (numero <= 0);
	    
	
	    cout << "Los primeros " << numero << " multiplos de 7 son:" << endl;
	    
	    for(int i = 1; i <= numero; i++){
	    	
	        cout << ( i * 7); 
			if ( i < numero){
				cout << ", ";
			}
	    }
		cout << endl;
	    cout << endl;
	    cout << "Desea calcular otra vez?" << endl;
        cout << "1. Si" << endl;
        cout << "2. No" << endl;
        cout << "Seleccione una opcion:" << endl;
        cin >> opcion;
        cout << endl;
    } while (opcion == 1);
    
    cout << "GRACIAS POR USAR MI PROGRAMA <3";
    return 0;
}
