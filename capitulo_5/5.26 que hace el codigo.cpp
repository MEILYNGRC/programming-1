1  for ( unsigned int i = 1; i <= 5; ++i )   // Bucle exterior
2  {
3     for ( unsigned int j = 1; j <= 3; ++j ) // Bucle medio
4     {
5        for ( unsigned int k = 1; k <= 4; ++k ) // Bucle interior
6           cout << '*';  // Imprime un asterisco
7
8        cout << endl;  // Imprime una nueva línea después de cada ciclo del bucle 'k'
9     } // fin del for interior
10
11     cout << endl;  // Imprime una nueva línea después de cada ciclo del bucle 'j'
12 } // fin del for exterior
