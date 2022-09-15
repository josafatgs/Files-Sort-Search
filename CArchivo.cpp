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
	//const int contArr = contarRegistros();

	//std::string* dataArr = new std::string[contArr];

	do
	{
		fgets(cadena, 75, archivo);
		printf(cadena);
		//std::cout << stringResult;
		//dataArr[sizeArr] = stringResult;
		//sizeArr += 1;
	} while (!feof(archivo));

	

	//std::cout << dataArr[0];

	//delete[] dataArr;

}

void CArchivo::guardarRegistros() {

}

void CArchivo::buscarRegistros(std::string fechaInicial, std::string fechaFinal) {

}

int CArchivo::contarRegistros() {

	int sizeArr = 0;

	//Count the number of registers
	if (error != 0)
	{
		printf("Error en la apertura/creacion del archivo");
	}
	else {
		do {
			fgets(cadena, 75, archivo);
			sizeArr++;
		} while (!feof(archivo));
	}

	return sizeArr;
}

CArchivo::CArchivo() {
	
	error = NULL;
	//resultadoString = NULL;
	cadena[74] = NULL;
	archivo = NULL;

}

CArchivo::~CArchivo() {}