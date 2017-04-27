#include <iostream>

using namespace std;

/*La funcion muestra el menu y valida entrada que sea un valor correcto
retorna la opcion elegida por el usuario*/

int menu();
int factorial(int);


int main(){
    bool salir = false;
    while (!salir){
        switch(menu()){
	    case 1:{
	        int num1, num2;
		cout << "Escriba un número: ";
		cin >> num1;
		cout << "Escriba un número: ";
		cin >> num2;
		cout << "El resultado es: " << num1 * num2 << endl;
		break;}

	    case 2:{
		int num1, num2;
		cout << "Esctiba un número: ";
		cin >> num1;
		cout << "Escriba un número: ";
		cin >> num2;
		cout << "El resultado es: " << num1 + num2 << endl;
		break;}

	    case 3:{
	        int num;
                cout<< "Escriba un numero: ";
                cin>>num;
                cout<<"El factorial de "<< num<< "es: "<< factorial(num)<< endl;
        	break;}
              
	    case 4:
		salir = true;
		break;
        }//Fin switch
    }//Fin while
 
    return 0;
}

int factorial(int i){
  if(i<0)
    return -1;
  else if(i==0){
    return 1;
  }else{
    return i * factorial(i-1);
  }
}

int menu(){
    int opcion;
    bool valido = true;
    do{
        cout << "    MENU" << endl
             << "1.- Multiplicar dos números" << endl
             << "2.- Sumar dos números" << endl
             << "3.- Calcular Factorial" <<  endl
             << "4.- Salir" << endl;

        cout << " Ingrese una opción: ";
        cin >> opcion;

        if (opcion > 0 && opcion < 5)
            valido = true;
        else {
            cout << "Opción no válida, intente de nuevo ..." << endl;
        }


    }while(!valido);
    return opcion;
}
