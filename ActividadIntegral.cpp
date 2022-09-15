#include <bits/stdc++.h>

#include "CArchivo.h"

int main(){
	
	CArchivo myArchivo;
	const char archivo[15] = "bitacora.txt";

	myArchivo.abrirArchivo(archivo);
	myArchivo.imprimirArchivo();
	myArchivo.cerrarArchivo();
	
	return 0;
}