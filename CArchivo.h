#pragma once
#include <bits/stdc++.h>

class CArchivo{

	public:

		errno_t error; // Opcional
		FILE* archivo;
		char cadena[75];
		//char* resultadoString;

		void abrirArchivo(const char nombreArchivo[15]);
		void cerrarArchivo();
		void imprimirArchivo();
		void ordenarRegistros();
		void guardarRegistros();
		void buscarRegistros(std::string fechaInicial, std::string fechaFinal );
		int contarRegistros();

		CArchivo();
		~CArchivo();
};

