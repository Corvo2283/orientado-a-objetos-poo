#include<iostream>
#include<stdlib.h>

using namespace std;

class Person{
    //encapsulamiento
    private: //atributos
        int age;
        string name;
    //Metodos o funcion
    Person(int, string);
    void read();
    void eat();
    void run();

};

Person::Person(int _age, string _name)
{
    age = _age;
    name = _name;
}

void Person::read()
{
    cout<< "Hola soy " << name << "y estoy leyendo un libro ";
}

void Person::eat()
{
    cout << "Mi nombre es: " << name << "tengo " << "tengo " << age << "años y me gusta comer sushi" <<endl;
}
void Person::run()
{
    cout<< "Mis amigos me dicen " << name << "y corro un mataron de 10km" << endl;
}

int main()
{
Person a = Person(22,"juanito");
a.read();
a.eat();
a.run();

    system ("pause");
    return 0;
}