#include<iostream>
using namespace std;

int main (int arg, char *argv[])

{
	int op=0;
	float l=0.00;
	float a=0.00;
	float r=0.00;
	int cont =1;
	do{
        cout<<"esta son las opciones\n";
		cout<<"1.- Rectangulo\n";
		cout<<"2.- circulo\n";
		cout<<"3.- triangulo\n";
		cout<<"4.- Salir\n";
		cout<<"que figuras deseas sacar el area\n";
		cin>>op;
		switch(op)
		{
            case 1:cout<<"ingresa el largo: \n";
			cin>>l;
			cout<<"ingresa el ancho: \n";
			cin>>a;
			cout<<"el area del rectangulo es: "<<l*a<<endl;
			break;
			case 2: cout<<"ingresa el radio: \n";
			cin>>r;
			cout<<"el area del circulo es: "<<3.1416*(r*r)<<endl;
			break;