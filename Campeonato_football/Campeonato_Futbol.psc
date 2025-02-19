Algoritmo Campeonato_Futbol
    Definir equipos[6] Como Cadena
    Definir goles[6][6] Como Entero
    Definir ganados[6] Como Entero
    Definir perdidos[6] Como Entero
    Definir empatados[6] Como Entero
    Definir partidosJugados[6] Como Entero
    Definir continuar Como Booleano
    continuar <- Verdadero
	
    Mientras continuar Hacer
        Escribir "Ingrese los nombres de los 6 equipos:"
        Para i <- 0 Hasta 5 Hacer
            Escribir "Equipo ", i+1, ":"
            Leer equipos[i]
            ganados[i] <- 0
            perdidos[i] <- 0
            empatados[i] <- 0
            partidosJugados[i] <- 0
        FinPara
		
        // Generar los resultados de los partidos (ida y vuelta)
        Para i <- 0 Hasta 5 Hacer
            Para j <- i+1 Hasta 5 Hacer
                // Generar el marcador de ida (equipo[i] contra equipo[j])
                goles[i][j] <- GenerarNumeroAleatorio(0, 10)
                goles[j][i] <- GenerarNumeroAleatorio(0, 10)
				
                Escribir "Partido ", equipos[i], " vs ", equipos[j], ": ", goles[i][j], "-", goles[j][i]
				
                // Calcular los resultados
                Si goles[i][j] > goles[j][i] Entonces
                    ganados[i] <- ganados[i] + 1
                    perdidos[j] <- perdidos[j] + 1
                Sino
                    Si goles[i][j] < goles[j][i] Entonces
                        ganados[j] <- ganados[j] + 1
                        perdidos[i] <- perdidos[i] + 1
                    Sino
                        empatados[i] <- empatados[i] + 1
                        empatados[j] <- empatados[j] + 1
                    FinSi
                FinSi
				
                partidosJugados[i] <- partidosJugados[i] + 1
                partidosJugados[j] <- partidosJugados[j] + 1
				
                // Generar el marcador de vuelta (equipo[j] contra equipo[i])
                goles[j][i] <- GenerarNumeroAleatorio(0, 10)
                goles[i][j] <- GenerarNumeroAleatorio(0, 10)
				
                Escribir "Partido de vuelta: ", equipos[j], " vs ", equipos[i], ": ", goles[j][i], "-", goles[i][j]
				
                // Calcular los resultados
                Si goles[j][i] > goles[i][j] Entonces
                    ganados[j] <- ganados[j] + 1
                    perdidos[i] <- perdidos[i] + 1
                Sino
                    Si goles[j][i] < goles[i][j] Entonces
                        ganados[i] <- ganados[i] + 1
                        perdidos[j] <- perdidos[j] + 1
                    Sino
                        empatados[i] <- empatados[i] + 1
                        empatados[j] <- empatados[j] + 1
                    FinSi
                FinSi
				
                partidosJugados[i] <- partidosJugados[i] + 1
                partidosJugados[j] <- partidosJugados[j] + 1
            FinPara
        FinPara
		
        // Mostrar la tabla de clasificación
        Escribir "Tabla de clasificación:"
        Escribir "Equipo | Partidos | Ganados | Empatados | Perdidos"
        Para i <- 0 Hasta 5 Hacer
            Escribir equipos[i], " | ", partidosJugados[i], " | ", ganados[i], " | ", empatados[i], " | ", perdidos[i]
        FinPara
		
        // Calcular el campeón y el último lugar
        mayorPuntos <- -1
        menorPuntos <- 9999
        campeón <- ""
        últimoLugar <- ""
        Para i <- 0 Hasta 5 Hacer
            puntos <- ganados[i] * 3 + empatados[i]
            Si puntos > mayorPuntos Entonces
                mayorPuntos <- puntos
                campeón <- equipos[i]
            FinSi
            Si puntos < menorPuntos Entonces
                menorPuntos <- puntos
                últimoLugar <- equipos[i]
            FinSi
        FinPara
		
        Escribir "El campeón es: ", campeón
        Escribir "El equipo que baja de categoría es: ", últimoLugar
		
        Escribir "¿Desea generar otro campeonato? (S/N):"
        Leer respuesta
        Si respuesta = "N" Entonces
            continuar <- Falso
        FinSi
    FinMientras
FinAlgoritmo

Funcion GenerarNumeroAleatorio(minimo, maximo) Como Entero
    Retornar Aleatorio(minimo, maximo)
FinFuncion

