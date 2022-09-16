#include "CArchivo.h"


void CArchivo::abrirArchivo(const char nombreArchivo[15]) {

	error = fopen_s(&archivo, nombreArchivo, "r");
	error == 0 ? std::cout << "Se abrio el archivo correctamente\n" : std::cout << "Erro al abrir el archivo\n";

}


void CArchivo::cerrarArchivo() {

	error = fclose(archivo);
	error == 0 ? std::cout << "\nSe cerro el archivo correctamente\n" : std::cout << "\nErr al cerrar el archivo\n";
}


void CArchivo::imprimirArchivo() {

	if (error != 0)
	{
		printf("Error en la apertura/creacion del archivo");
	}
	else {

		do {
			fgets(cadena, 75, archivo);
			printf("%s", cadena);
		} while (!feof(archivo));

	}

}


void CArchivo::ordenarRegistros() {

	std::string stringResult = "";
	int sizeArr = 0;
	

	do
	{
		fgets(cadena, 75, archivo);
		stringResult = cadena;
		dataArr.push_back(stringResult);
		std::cout << dataArr[sizeArr] << sizeArr;
		sizeArr++;
		
	} while (!feof(archivo));



}


void CArchivo::guardarRegistros() {

}


void CArchivo::buscarRegistros(std::string fechaInicial, std::string fechaFinal) {

}

void CArchivo::QuickSort() {

}

CArchivo::CArchivo() {
	
	error = NULL;
	cadena[74] = NULL;
	archivo = NULL;
	dataArr = {};

}

CArchivo::~CArchivo() {}