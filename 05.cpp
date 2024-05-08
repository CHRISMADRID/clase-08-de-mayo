#include <iostream>
using namespace std;
int main ()
{
    char opcion, variable='x';
    
    do
    {
        cout<< "Menu"<<"\n";
        cout << "A Carne asada"<<"\n";
        cout << "B Pollo" <<"\n";
        cout << "C Cerdo" <<"\n";
        cout <<"Seleccione una opcion" <<"\n";
        cin >>opcion;
        cout<<"opcion seleccionada " << opcion << "\n";



    }
    while (opcion!= 'C'&& opcion !='B'&& opcion !='A');
    
    return 0;

}
