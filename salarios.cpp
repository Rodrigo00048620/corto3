#include <iostream>
#include <cmath>
using namespace std;
int main(){
    
    int empleados = 0 ;
        while (empleados <= 5){
        string nombre = "";
         cout << "Ingrese su nombre" << endl;
         cin >> nombre;
         int horas = 0;
         cout << "Bienvenido " << nombre << ", Cuantas horas realiza en su jornada?"<<endl;
          cin >> horas;
          int horasx = "0";
            cout << "Cuantas horas extra realiza?" << endl;
              cin >> horasx;

            empleados = empleados + 1;

            float horass = horas * 1.75;
            float horasxx = horasx * 2.50;
            float seguro = 0.04;
            float afp =0.625;
            float rent = 0.10;
            float total = (horass + horasxx) * seguro * afp * rent;
         cout << "su salario es: " << total << endl;
         }
         
    
    

} 