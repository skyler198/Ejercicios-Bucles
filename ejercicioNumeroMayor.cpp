#include <iostream>
using namespace std;

int main() {
    int n, num;
    double NM;
    
    cout << Cantidad de numeros: << endl;
    cin >> n;
    
    if(n > 0) {
        cout << Ingrese el primer numero: << endl;
        cin >> NM;
        
        for( int i = 1; i < n; i++) {
            cout << Ingrese el siguiente numero: << endl;
            cin >> num;
            if(num > NM) {
                NM = num;
            }
        }
        cout << El mayor numero es:  << NM << endl;
	}

    return 0;
}
