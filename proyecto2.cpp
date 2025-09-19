#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string.h>
//Proyecto No.2 - Junior Barrios
using namespace std;
int main (){
	int i, j, k, op, filas, columnas, ale,num,cont,ordenar;
	do{
		do{
			cout<<"¡¡Bienvndio!! \n Ingrese la opcion que desee \n";
			cout<<"1. Suma de Matrices \n";
			cout<<"2. Transpuesta de una matriz \n";
			cout<<"3. Multiplicacion de matrices \n";
			cout<<"4. Encontrar un numero en una matriz \n";
			cout<<"5. Contar palabras de una oracion \n";
			cout<<"6. Ordenar letras de una palabra \n";
			cout<<"7. Ver si una oracion es palindromo \n";
			cin>>op;
			if (op<1 || op>7){
				cout<<"Numero invalido, ingrese un numero del 1 al 7 \n";
			}	
		}while(op<1 || op>7);
	switch(op){
		//Para facilitar el proceso de comparar que las 2 matrices sean iguales, decidi utilizar la misma variable
		//de filas y de columnas para la dimension de ambas matrices
		case 1:{
				cout<<"**NOTA: Para Sumar 2 matrices es necesario que contengan la misma dimension de filas y columnas** \n";
				cout<<"Ingrese la cantidad de filas que desee para las 2 matrices \n";
				cin>>filas;
				cout<<"Gracias \n Ahora ingrese la cantidad de columnas que desee para las 2 matrices \n";
				cin>>columnas;
			do{
				cout<<"Ingrese el numero 1 si desea que sus matrices se generen de manera aleatoria \n";
				cout<<"Ingrese el numero 2 si usted desea ingresar los datos de sus matrices \n";
				cin>>ale;
				if (ale != 1 && ale != 2){
					cout<<"Opcion invalida, ingrese Opcion 1 U Opcion 2 \n";
				}
			}while (ale != 1 && ale != 2);
			if (ale==1){
				srand(time(0));
				int matriz1[filas][columnas];
				for (i=0; i<filas; i++){
					for(j=0; j<columnas; j++){
						matriz1[i][j]=rand() % 25 + 1;
					}
				}
				cout<<"Las 2 matrices aleatorias son: \n";
					for (i=0; i<filas; i++){
					for(j=0; j<columnas; j++){
						cout<<matriz1[i][j]<<" ";
					}
					cout<<endl;
				}
				int matriz2[filas][columnas];
				for(i=0; i<filas; i++){
					for(j=0; j<columnas; j++){
						matriz2[i][j] = rand () % 25 + 1;
					}
				}
				cout<<"\n";
				for (i=0; i<filas; i++){
					for(j=0; j<columnas; j++){
						cout<<matriz2[i][j]<<" ";
					}
					cout<<endl;
				}
				cout<<"\n";
				cout<<"El resultado de las matrices aleatorias sumadas es: \n";
				int matrizs[filas][columnas];
				for(i=0; i<filas; i++){
				for(j=0; j<columnas; j++){
					matrizs[i][j]=matriz1[i][j]+matriz2[i][j];
					cout<<matrizs[i][j]<<" ";
				}
				cout<<endl;
			}
			}else{
			int matriz1[filas][columnas];
			for(i=0; i<filas; i++){
				for(j=0; j<columnas; j++){
					cout<<"Matriz 1: Ingrese el numero para llenar la matriz \n";
					cin>>matriz1[i][j];
				}
			}
			int matriz2[filas][columnas];
			for(i=0; i<filas; i++){
				for(j=0; j<columnas; j++){
					cout<<"Matriz 2: Ingrese el numero para llenar la matriz \n";
					cin>>matriz2[i][j];
				}
			}
			cout<<"El resultado de la suma de las matrices es: \n";
			int matrizs[filas][columnas];
			for(i=0; i<filas; i++){
				for(j=0; j<columnas; j++){
					matrizs[i][j]=matriz1[i][j]+matriz2[i][j];
					cout<<matrizs[i][j]<<" ";
				}
				cout<<endl;
			}
				
			}			
			break;
		}
		case 2:{
			cout<<"Ingrese el numero de filas que desee para su matriz: \n";
			cin>>filas;
			cout<<"Ingrese el numero de columnas que desee para su matriz \n";
			cin>>columnas;
			do{
				cout<<"Ingrese el numero 1 si desea que su matriz se genere de manera aleatoria \n";
				cout<<"Ingrese el numero 2 si usted desea ingresar los datos de su matriz \n";
				cin>>ale;
				if (ale != 1 && ale != 2){
					cout<<"Opcion invalida, ingrese Opcion 1 U Opcion 2 \n";
				}
			}while (ale != 1 && ale != 2);
			if (ale == 1){
				srand(time(0));
				int matriz[filas][columnas];
				for(i=0; i<filas; i++){
					for(j=0; j<columnas; j++){
						matriz[i][j] = rand () % 25 + 1;
					}
				}
				cout<<"Su matriz aleatoria original es: \n";
				for(i=0; i<filas; i++){
					for(j=0; j<columnas; j++){
						cout<<matriz[i][j]<<" ";
					}
					cout<<"\n";
				}
				cout<<"La matriz aleatoria transpuesta es: \n";
			int matrizt[columnas][filas];
			for(i=0; i<filas; i++){
				for(j=0; j<columnas; j++){
					matrizt[j][i]=matriz[i][j];
				}
			}
			for(i=0; i<columnas; i++){
				for(j=0; j<filas; j++){
					cout<<matrizt[i][j]<<" ";
				}
				cout<<endl;
			}	
			}else{
				int matriz[filas][columnas];
			for(i=0; i<filas; i++){
				for(j=0; j<columnas; j++){
					cout<<"Ingrese los numeros para llenar su matriz de dimension: "<<filas<<" X "<<columnas<<endl;
					cin>>matriz[i][j];
				}
			}
			cout<<"Su matriz original es: \n";
			for(i=0; i<filas; i++){
				for(j=0; j<columnas; j++){
					cout<<matriz[i][j]<<" ";
				}
				cout<<endl;
			}
			cout<<"La matriz transpuesta es: \n";
			int matrizt[columnas][filas];
			for(i=0; i<filas; i++){
				for(j=0; j<columnas; j++){
					matrizt[j][i]=matriz[i][j];
				}
			}
			for(i=0; i<columnas; i++){
				for(j=0; j<filas; j++){
					cout<<matrizt[i][j]<<" ";
				}
				cout<<endl;
			}	
			}
			break;
		}
		case 3:{
			//para facilitar el proceso de multiplicacion de matrices, decidi almacenar la dimension de las columnas de la primera matriz
			//con el numero de filas de la segunda matriz en la misma variable 
	cout<<"**NOTA: Para multiplicar matrices es necesario que: El numero de columnas de la 1era, Coincida con el numero de Filas de la 2da** \n";
	cout<<"Ingrese el numero de filas para la primera matriz y columnas para la segunda matriz: ";
	cin>>filas;
	cout<<"Ingrese el numero de columnas para la primera matriz y filas para la segunda matriz: ";
	cin>>columnas;
	do{
		cout<<"Ingrese el numero 1 si desea que sus matrices se generen de manera aleatoria \n";
		cout<<"Ingrese el numero 2 si usted desea ingresar los datos de sus matrices \n";
		cin>>ale;
		if (ale != 1 && ale != 2){
			cout<<"Opcion invalida, ingrese Opcion 1 U Opcion 2 \n";
		}
	}while (ale != 1 && ale != 2);
	if(ale == 1){
		srand(time(0));
		int matriz1[filas][columnas];
		for(i=0; i<filas; i++){
			for(j=0; j<columnas; j++){
				matriz1[i][j] = rand() % 25 + 1;
			}
		}
		int matriz2[columnas][filas];
		for(i=0; i<columnas; i++){
			for(j=0; j<filas; j++){
				matriz2[i][j] = rand() % 25 + 1;
			}
		}
		cout<<"Las 2 matrices aleatorias son: \n";
		for(i=0; i<filas; i++){
			for(j=0; j<columnas; j++){
				cout<<matriz1[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<"\n";
		for(i=0; i<columnas; i++){
			for(j=0; j<filas; j++){
				cout<<matriz2[i][j]<<" ";
			}
			cout<<endl;
		}
		int resultado[filas][filas];
		for(i=0; i<filas; i++){
			for(j=0; j<filas; j++){
				resultado[i][j] = 0;
				for(k=0; k<columnas; k++){
					resultado[i][j] += matriz1[i][k] * matriz2[k][j];
				}
			}
		}
		
		cout<<"Resultado de la multiplicacion: \n";
		for(i=0; i<filas; i++){
			for(j=0; j<filas; j++){
				cout<<resultado[i][j]<<" ";
			}
			cout<<endl;
		}
		
	}else{
		int matriz1[filas][columnas];
		for(i=0; i<filas; i++){
			for(j=0; j<columnas; j++){
				cout<<"Matriz 1: Ingrese el numero para llenar la matriz \n";
				cin>>matriz1[i][j];
			}
		}
		
		int matriz2[columnas][filas];
		for(i=0; i<columnas; i++){
			for(j=0; j<filas; j++){
				cout<<"Matriz 2: Ingrese el numero para llenar la matriz \n";
				cin>>matriz2[i][j];
			}
		}
		
		int resultado[filas][filas];
		for(i=0; i<filas; i++){
			for(j=0; j<filas; j++){
				resultado[i][j] = 0;
				for(k=0; k<columnas; k++){
					resultado[i][j] += matriz1[i][k] * matriz2[k][j];
				}
			}
		}
		
		cout<<"Resultado de la multiplicacion: \n";
		for(i=0; i<filas; i++){
			for(j=0; j<filas; j++){
				cout<<resultado[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	break;
}		
		case 4:{
			//para buscar un numero en una matriz utilice un ciclo FOR y otra variable que vaya comparando cada elemento
			//en la matriz
			cont=0;
			cout<<"Ingrese el numero de filas que desee para su matriz"<<endl;
			cin>>filas;
			cout<<"Ingrese el numero de columnas que desee para su matriz"<<endl;
			cin>>columnas;
			do{
			cout<<"Ingrese 1 si desea que su matriz se genere de manera Aleatoria \n";
			cout<<"Ingrese 2 si desea ingresar de manera manual los datos de su matriz \n";
			cin>>ale;
			if (ale != 1 && ale != 2){
			cout<<"Numero invalido, ingrese la Opcion 1 u Opcion 2 \n";	
			}	
			}while(ale != 1 && ale !=2);
			if(ale==1){
				srand(time(0));
				int matriz[filas][columnas];
				for (i=0; i<filas; i++){
					for(j=0; j<columnas; j++){
						matriz[i][j] = rand () % 25 + 1;
					}
				}
				cout<<"Su matriz aleatoria es: \n";
				for(i=0; i<filas; i++){
					for(j=0; j<columnas; j++){
						cout<<matriz[i][j]<<" ";
					}
					cout<<"\n";
				}
					cout<<"\n";
					cout<<"Ingrese el numero que desee buscar dentro de su matriz \n";
				cin>>num;
				for (i=0; i<filas; i++){
					for(j=0; j<columnas; j++){
						if (num == matriz[i][j]){
							cont++;
						}
					}
				}
				cout<<"El numero "<<num<<" se encuentra: "<<cont<<" veces en su matriz \n";
				
			}else{
				int matriz[filas][columnas];
				for(i=0; i<filas; i++){
					for(j=0; j<columnas; j++){
						cout<<"Ingrese el numero para rellenar su matriz \n";
						cin>>matriz[i][j];
					}
				}
				cout<<"Su matriz es: \n";
				for (i=0; i<filas; i++){
					for(j=0; j<columnas; j++){
						cout<<matriz[i][j]<<" ";
					}
					cout<<"\n";
				}
				cout<<"Ingrese el numero que desee buscar dentro de su matriz \n";
				cin>>num;
				for (i=0; i<filas; i++){
					for(j=0; j<columnas; j++){
						if (num == matriz[i][j]){
							cont++;
						}
					}
				}
				cout<<"El numero "<<num<<" se encuentra: "<<cont<<" veces en su matriz \n";
			}
			break;
		}	
		case 5:{
			string oracion;
			cout<<"Ingrese la oracion: \n";
			//coloque el cin.ignore debido a que investigue y era necesario para que se pueda leer mi variable
			//de oracion, porque seguido al getline tengo un cin (para la opcion que desea realziar el usuario)
			cin.ignore();
			getline(cin, oracion);
			cont=1;
			for (i=0; i < oracion.length(); i++){
				if (oracion[i]== ' '){
					cont++;
				}
			}
			cout<<"Su oracion tiene: "<<cont<<" palabras \n";
			break;
		}
		case 6:{
			//para ordenar la palabra decidi implementar el ciclo de burbuja, intercanbiando valores
			string palabra;
			char almacenar;
			cout<<"Ingrese la palabra que desee ordenar: \n";
			cin.ignore();
			getline(cin, palabra);
			ordenar=palabra.length();
			for (i=0; i<ordenar; i++){
				for (j=0; j<ordenar-1; j++){
					if(palabra[j]>palabra[j+1]){
						almacenar=palabra[j];
						palabra[j]=palabra[j+1];
						palabra[j+1]=almacenar;
					}
					
				}
			}
			cout<<"La palabra ordena es: "<<palabra<<endl;
			break;
		}
		case 7:{
			string oracion, oracion2="", oracion3="";
			cout<<"Ingrese la oracion que desee comparar: \n";
			cin.ignore();
			getline(cin, oracion);
			for(i=0; i<oracion.length(); i++){
				if (oracion[i] != ' '){
					oracion3 += tolower(oracion[i]);
				}
			}
			for (i = oracion3.length()-1; i>=0; i--){
				oracion2+=tolower(oracion3[i]);
			}
			if (oracion3.compare(oracion2)==0){
				cout<<"La palabra: "<<oracion<<" SI es un palindromo \n";
			}else{
				cout<<"La palabra: "<<oracion<<" NO es un palindromo \n";
			}
			
			break;
		}
	}	
		cout<<"¿Desea realizar otro proceso? \n Si desea realizar otro proceso ingrese cualquier otro NUMERO \n Si desea detener el programa ingrese el numero 8 \n";
		cin>>op;
	}while(op!=8);
	return 0;
}
