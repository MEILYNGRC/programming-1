Algoritmo calculadora
	Definir c, a, b, resultado Como Real; // MEILYN JULEISY GARCIA LIMA 9959-23-17838
	Repetir
		Limpiar Pantalla;
		Escribir '---------------------------';
		Escribir '      MENU PRINCIPAL';
		Escribir '---------------------------';
		Escribir '1. suma';
		Escribir '2. resta';
		Escribir '3. multiplicacion';
		Escribir '4. division';
		Escribir '5. salir';
		Escribir '---------------------------';
		Escribir '  seleccionar una opcion';
		Escribir '---------------------------';
		Leer c;
		Escribir '';
		Si c=1 Entonces
			Escribir 'ingrese el primer valor:';
			Leer a;
			Escribir 'ingrese el segundo valor:';
			Leer b;
			resultado <- a+b;
			Escribir 'la suma es: ', resultado;
			Escribir 'presione ENTER para continuar...';
			Esperar Tecla;
		FinSi
		Si c=2 Entonces
			Escribir 'ingrese el primer valor';
			Leer a;
			Escribir '';
			Escribir 'ingrese el segundo valor';
			Leer b;
			Escribir '';
			resta <- a-b;
			Escribir 'la resta es: ', resta;
			Escribir 'presione ENTER para continuar...';
			Esperar Tecla;
		FinSi
		Si c=3 Entonces
			Escribir 'ingrese el primer valor';
			Leer a;
			Escribir '';
			Escribir 'ingrese el segundo valor';
			Leer b;
			Escribir '';
			multiplicacion <- a*b;
			Escribir 'la multiplicacion es: ', multiplicacion;
			Escribir 'presione ENTER para continuar...';
			Esperar Tecla;
		FinSi
		Si c=4 Entonces
			Escribir 'ingrese el primer valor';
			Leer a;
			Escribir '';
			Escribir 'ingrese el segundo valor';
			Leer b;
			Escribir '';
			division <- a/b;
			Escribir 'la division es: ', division;
			Escribir 'presione ENTER para continuar...';
			Esperar Tecla;
		FinSi
	Hasta Que c=5
	Escribir 'saliendo del programa...';
FinAlgoritmo
