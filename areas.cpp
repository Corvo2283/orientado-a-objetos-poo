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