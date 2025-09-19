op = 0

while op != 6:
    while True:
        op = int(input("¡¡Bienvndio!! \nIngrese la opcion que desee \n1. Suma de Matrices \n2. Transpuesta de una matriz \n3. Multiplicacion de matrices \n4. Econtrar un numero en una matriz \n5. Contar palabras de una oracion \n"))
        if 1 <= op <= 5:
            break
        else:
            print("Numero invalido, ingrese un numero del 1 al 5 \n")

    if op == 1:
        print("**NOTA: Para Sumar 2 matrices es necesario que contengan la misma dimension de filas y columnas** \n")
        filas = int(input("Ingrese la cantidad de filas que desee para las 2 matrices \n"))
        columnas = int(input("Gracias \n Ahora ingrese la cantidad de columnas que desee para las 2 matrices \n"))
        
        matriz1 = []
        for i in range(filas):
            fila = []
            for j in range(columnas):
                num = int(input("Matriz 1: Ingrese el numero para llenar la matriz \n"))
                fila.append(num)
            matriz1.append(fila)
        
        matriz2 = []
        for i in range(filas):
            fila = []
            for j in range(columnas):
                num = int(input("Matriz 2: Ingrese el numero para llenar la matriz \n"))
                fila.append(num)
            matriz2.append(fila)
        
        print("El resultado de la suma de las matrices es: \n")
        matrizs = []
        for i in range(filas):
            fila = []
            for j in range(columnas):
                suma = matriz1[i][j] + matriz2[i][j]
                fila.append(suma)
            matrizs.append(fila)
        
        for fila in matrizs:
            for num in fila:
                print(num, end=" ")
            print()

    elif op == 2:
        filas = int(input("Ingrese el numero de filas que desee para su matriz: \n"))
        columnas = int(input("Ingrese el numero de columnas que desee para su matriz \n"))
        
        matriz = []
        for i in range(filas):
            fila = []
            for j in range(columnas):
                num = int(input(f"Ingrese los numeros para llenar su matriz \n"))
                fila.append(num)
            matriz.append(fila)
        
        print("Su matriz original es: \n")
        for fila in matriz:
            for num in fila:
                print(num, end=" ")
            print()
        
        matrizt = []
        for j in range(columnas):
            fila = []
            for i in range(filas):
                fila.append(matriz[i][j])
            matrizt.append(fila)
        
        print("La matriz transpuesta es: \n")
        for fila in matrizt:
            for num in fila:
                print(num, end=" ")
            print()

    elif op == 3:
        print("**NOTA: Para multiplicar matrices es necesario que: El numero de columnas de la 1era, Coincida con el numero de Filas de la 2da** \n")
        filas = int(input("Ingrese el numero de filas para la primera matriz y columnas para la segunda matriz: "))
        columnas = int(input("Ingrese el numero de columnas para la primera matriz y filas para la segunda matriz: "))
        
        matriz1 = []
        for i in range(filas):
            fila = []
            for j in range(columnas):
                num = int(input("Matriz 1: Ingrese el numero para llenar la matriz \n"))
                fila.append(num)
            matriz1.append(fila)
        
        matriz2 = []
        for i in range(columnas):
            fila = []
            for j in range(filas):
                num = int(input("Matriz 2: Ingrese el numero para llenar la matriz \n"))
                fila.append(num)
            matriz2.append(fila)
        
        print("Las 2 matrices son: \n")
        for fila in matriz1:
            for num in fila:
                print(num, end=" ")
            print()
        print()
        for fila in matriz2:
            for num in fila:
                print(num, end=" ")
            print()
        
        resultado = []
        for i in range(filas):
            fila = []
            for j in range(filas):
                suma = 0
                for k in range(columnas):
                    suma += matriz1[i][k] * matriz2[k][j]
                fila.append(suma)
            resultado.append(fila)
        
        print("Resultado de la multiplicacion: \n")
        for fila in resultado:
            for num in fila:
                print(num, end=" ")
            print()

    elif op == 4:
        cont = 0
        filas = int(input("Ingrese el numero de filas que desee para su matriz\n"))
        columnas = int(input("Ingrese el numero de columnas que desee para su matriz\n"))
        
        matriz = []
        for i in range(filas):
            fila = []
            for j in range(columnas):
                num = int(input("Ingrese el numero para rellenar su matriz \n"))
                fila.append(num)
            matriz.append(fila)
        
        print("Su matriz es: \n")
        for fila in matriz:
            for num in fila:
                print(num, end=" ")
            print()
        
        num = int(input("Ingrese el numero que desee buscar dentro de su matriz \n"))
        cont = 0
        for fila in matriz:
            for n in fila:
                if n == num:
                    cont += 1

        print("El numero", num ,  "se encuentra:", cont, "veces en su matriz \n")

    elif op == 5:
        oracion = input("INGRESA TU ORACION\n")
        contador = 1
        for char in oracion:
            if char == ' ':
                contador += 1
        print("Su oracion contiene", contador, "palabras")

    op = int(input("¿Desea realizar otro proceso? \n Si desea realizar otro proceso ingrese cualquier otro NUMERO \n Si desea detener el programa ingrese el numero 6 \n"))


