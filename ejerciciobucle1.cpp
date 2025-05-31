#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "BIENVENIDO A MI PROGRAMA!" << endl;
    
    do {
        cout << "Ingrese la cantidad de multiplos de 7 que desea conocer: " << endl;
        cin >> n;

        if (n <= 0) {
            cout << "Por favor, ingrese un numero mayor a cero." << endl;
        }
    } while (n <= 0);
    

    cout << "Los primeros " << n << " multiplos de 7 son:" << endl;
    
    for(int i = 1; i <= n; i++){
    	
        cout << ( i * 7); 
		if ( i < n){
			cout << ", ";
		}
    }
    cout << endl;
    cout << "GRACIAS POR USAR MI PROGRAMA <3";
    return 0;
}
