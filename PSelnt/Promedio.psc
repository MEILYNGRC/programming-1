//revisado por Meilyn Juleisy Garc�a Lima 9959-23-17838
// Calcula el promedio de una lista de N datos

Algoritmo Promedio
	
	Escribir "Ingrese la cantidad de datos:";
	Leer n;
	
	acum<-0;
	
	Para i<-1 Hasta n Hacer
		Escribir "Ingrese el dato ",i,":";
		Leer dato;
		acum<-acum+dato;
	FinPara
	
	prom<-acum/n;
	
	Escribir "El promedio es: ",prom;
	
FinAlgoritmo