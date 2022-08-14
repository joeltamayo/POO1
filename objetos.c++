#include <iostream>
#include <stdlib.h>

using namespace std;

class alumno
{
private: // atributos
    int registro;
    string nombre;

public:                  // metodos
    alumno(int, string); // constructor
    void hablar();
};

// constructor
alumno::alumno(int _registro, string _nombre)
{
    registro = _registro;
    nombre = _nombre;
}

void alumno::hablar()
{
    cout << "El alumno " << nombre << " con registro: " << registro << " esta hablando" << endl;
    cout << endl;
}

class perro
{
private: // atributos
    string raza;
    int edad;

public:                 // metodos
    perro(int, string); // constructor
    void ladrar();
};

// constructor
perro::perro(int _edad, string _raza)
{
    edad = _edad;
    raza = _raza;
}

void perro::ladrar()
{
    cout << "El perro " << raza << " de " << edad << " anios de edad esta ladrando" << endl;
    cout << endl;
}

class perfume
{
private: // atributos
    string marca;
    int precio;

public:                   // metodos
    perfume(int, string); // constructor
    void comprar();
};

// constructor
perfume::perfume(int _precio, string _marca)
{
    precio = _precio;
    marca = _marca;
}

void perfume::comprar()
{
    cout << "Comprando un perfume " << marca << ", precio: $" << precio << endl;
    cout << endl;
}

class coche
{
private: // atributos
    string marca;
    string color;

public:
    coche(string, string); // constructor
    void encender();
};

// constructor
coche::coche(string _color, string _marca)
{
    color = _color;
    marca = _marca;
}

void coche::encender()
{
    cout << "El coche " << marca << " de color " << color << " esta encendido" << endl;
    cout << endl;
}

class casa
{
private: // atributos
    string color;
    int cantidad_habitaciones;

public:
    casa(string, int); // constructor
    void construir();
};

// constructor
casa::casa(string _color, int _cantidad_habitaciones)
{
    color = _color;
    cantidad_habitaciones = _cantidad_habitaciones;
}

void casa::construir()
{
    cout << "Construyendo una casa de color " << color << " con " << cantidad_habitaciones << " habitaciones" << endl;
    cout << endl;
}

int main()
{
    alumno a1(22110119, "Joel");
    a1.hablar();

    perro p1(2, "Pastor Aleman");
    p1.ladrar();

    perfume p2(4500, "Thierry Mugle");
    p2.comprar();

    coche c1("Gris", "Ford");
    c1.encender();

    casa c2("Blanco", 3);
    c2.construir();
    return 0;
}