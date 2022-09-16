#pragma once
#include <bits/stdc++.h>

class CArchivo{

	public:

		errno_t error;                       // Opcional
		FILE* archivo;                       // Descriptor
		char cadena[75];				     // Lector de cadenas
		std::vector<std::string> dataArr;    // Array para almacenar datos

		void abrirArchivo(const char nombreArchivo[15]);
		void cerrarArchivo();
		void imprimirArchivo();
		void ordenarRegistros();
		void guardarRegistros();
		void buscarRegistros(std::string fechaInicial, std::string fechaFinal );
		void QuickSort();

		CArchivo();
		~CArchivo();
};

