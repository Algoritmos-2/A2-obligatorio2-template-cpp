#include <cassert>
#include <string>
#include <iostream>
#include <limits>

using namespace std;

long long remontadasEpicas( int* llegadas, int inicio, int fin) {

}

int main() {
    long long n;
    cin >> n;

    int* llegada = new int[n+1];
    for(int i=1; i<=n; i++) {
        cin >> llegada[i];
    }

    long long resultado = remontadasEpicas(llegada, 1, n);
    cout << resultado << endl;
    
    delete[] llegada;
    return 0;
}