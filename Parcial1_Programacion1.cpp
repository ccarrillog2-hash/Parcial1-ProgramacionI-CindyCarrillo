#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    string nombreCliente;
    double precio;
    int cantidad;

    cout << "Ingresar nombre completo: " "Cindy Julisssa Carrillo Guarcas";
    getline(cin, nombreCliente);

    cout << "Ingresar  precio del producto: ";
    cin >> precio;

    cout << "Ingresar cantidad comprada: ";
    cin >> cantidad;

    double subtotal = precio * cantidad;
    double iva = subtotal * 0.12;
    double total = subtotal + iva;
    
    cout << fixed << setprecision(2);

    cout << "Subtotal: Q" << subtotal << endl;
    cout << "IVA (12%): Q" << iva << endl;
    cout << "Total a pagar: Q" << total << endl;
    return 0;
}