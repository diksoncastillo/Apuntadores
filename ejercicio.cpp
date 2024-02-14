#include <iostream>
#include <string>

struct Alumno {
    std::string nombre;
    int nota[3];
    int codigo;
    float promedio;
};

int main() {
    Alumno estudiantes[3];

    for (int i = 0; i < 3; ++i) {
        std::cout << "Ingrese los datos del estudiante " << i + 1 << ":" << std::endl;
        std::cout << "Nombre: ";
        std::cin >> estudiantes[i].nombre;
        std::cout << "Código: ";
        std::cin >> estudiantes[i].codigo;
        std::cout << "Notas (separadas por espacios): ";
        for (int j = 0; j < 3; ++j) {
            std::cin >> estudiantes[i].nota[j];
        }
        estudiantes[i].promedio=0;
			for(int j=0; j<3; ++j){
		 		estudiantes[i].promedio += estudiantes[i].nota[j];
			}
		estudiantes[i].promedio /= 3;
	
    }

    std::cout << "\nDatos de los estudiantes:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "Estudiante " << i + 1 << ":" << std::endl;
        std::cout << "Nombre: " << estudiantes[i].nombre << std::endl;
        std::cout << "Código: " << estudiantes[i].codigo << std::endl;
        std::cout << "Notas: ";
        for (int j = 0; j < 3; ++j) {
            std::cout << estudiantes[i].nota[j] << " ";
        }
        std::cout << std::endl;
        std::cout << "Promedio: " << estudiantes[i].promedio << std::endl;
    }

    return 0;
}
