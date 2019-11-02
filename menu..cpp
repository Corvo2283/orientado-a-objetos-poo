#include <iostream>

using namespace std;

class Menu{
private:
    int opcion,salir;
public:
    Menu();
    void show();
    int Salir();
};

Menu::Menu(){
}
void Menu::show(){
    cout<<"***MENU DE OPERACIONES***"<<endl;
    cout<<"1.- Suma"<<endl;
    cout<<"2.- Resta"<<endl;
    cout<<"3.- Multiplicaicon"<<endl;
    cout<<"4.- Divicion"<<endl;
    cout<<"5.- Salir"<<endl;
    cout<<"Opcion: ";
    cin>>opcion;

        switch (opcion){
        case 1:
            cout<<"Seleccionaste Suma ¿Estas Seguro?"<<endl;
            cin.ignore();
            salir = 0;
            break;
        case 2:
            cout<<"Seleccionaste Resta ¿Estas Seguro?"<<endl;
            cin.ignore();
            salir = 0;
            break;
        case 3:
            cout<<"Seleccionaste Multiplicacion ¿Estas Seguro?"<<endl;
            cin.ignore();
            salir = 0;
            break;
        case 4:
            cout<<"Seleccionaste Divicion ¿Estas Seguro?"<<endl;
            cin.ignore();
            salir = 0;
            break;
        case 5:
            salir = 1;
            break;
        default:
            cout<<"La opciÃ³n no existe, intentelo de nuevo"<<endl<<endl;
            salir = 0;
            break;
        }
}

int Menu::Salir(){
    return salir;
}

int main(){

    Menu menu1;

    do{
        menu1.show();
    }while (menu1.Salir() == 0);

return 0;
}
