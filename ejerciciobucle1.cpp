#include <iostream>
using namespace std;

int main(){
    int n, M = 7;
    cout << Ingrese la cantidad de multiplos de 7 que desea conocer: << endl;
    cin >> n;
    
    for(int i = 1;i <= n;i++){
    	
        cout << M << , ;
        M = M + 7;
    }
    cout << endl;
    return 0;
}
