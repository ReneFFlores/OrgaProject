#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using namespace std;

class Cliente{
	int ID_Cliente;
	const char* nombre;
	char genero;
	int ID_Ciudad;
public:
	Cliente(int,const char*,char,int);
	Cliente(const Cliente&);
	~Cliente();
	string toString()const;
	int getIDCliente()const;
	char* getNombre()const;
	char getGenero()const;
	int getIDCiudad()const;
};

#endif