// EncapsulamientoyHerencia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>


class perros
{
public:		
	std::string nombre;
	std::string raza;
	std::string tamanio;
	std::string color;
	bool tiembla;
	bool estactico;
	bool espeleonero;
	bool comemucho;
	bool esunmeme;
	void guauguau(std::string a) {
		std::cout << a << " dice: guau guau" << std::endl;
	}
private:
	bool esbomnito = true;
};

class cheems : public perros {
public: 
	bool tieneinsta;
private: 
	bool tieneamsiedad = true;
};

int main()
{
	cheems homla;
	homla.color = "camfe";
	homla.comemucho = true;
	homla.espeleonero = false;
	homla.estactico = false;
	homla.esunmeme = true;
	homla.nombre = "cheems";
	homla.raza = "shiba inu";
	homla.tiembla = false;
	homla.tieneinsta = true;
	homla.guauguau(homla.nombre);
}

