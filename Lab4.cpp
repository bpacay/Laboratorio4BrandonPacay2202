#include <iostream>
#include <cmath>

using namespace std;

int suma(){
	//funcion para sumar 2 numeros
    int a, b, salir, salir2;
    //variables a y b, son los numeros a sumar, "salir" es para salir del bucle/aplicacion, y "salir2" es para corroborar si la opción puesta por el usuario es correcta o no
    float res;
    //la variable res, es la respuesta de la operacion
    do{
    	cout<<"\t SUMA"<<endl;
        cout<<"ingrese el primer valor"<<endl;
        cin>>a;
        cout<<"ingrese el segundo valor"<<endl;
        cin>>b;
		//pedimos al usuario que ingrese 2 valores a y b
        res = a + b;
        //colocamos la respuesta de la operacion de a y b en la variable res
        cout<<"el resultado de la suma de los numeros "<<a<<" y "<<b<<" es: "<<res<<endl;
        //se imprimira en pantalla los numeros y el resultado de la operacion
        while(salir == salir2){
        	//ya que salir y salir2, son iguales entramos al bucle de verificacion
            cout<<"desea seguir en esta ventana? (si=1/no=0)"<<endl;
            cin>>salir;
            //pedimos al usuario ingresar una opcion, y luego pasamos a verificar con el if y dependiendo si cumple una u otra opcion realizara una accion
            if(salir == 0){
                cout<<"ahora regresara al menu principal"<<endl;
                salir2 = 1;
                //si "salir" es igual a 0 regresaremos al menu principal (al main) y para salir del bucle de verificacion hacmeos que "salir2" sea diferente a "salir"
            }else if(salir == 1){
                cout<<"puedes seguir utilizando la suma"<<endl;
                salir2 = 2;
				//si "salir" es igual a 1 se repetira el bucle para la operacion y para salir del bucle de verificacion hacmeos que "salir2" sea diferente a "salir"  
            }else if(salir !=0 and salir !=1){
                cout<<"la opcion no es valida"<<endl;
                salir2 = salir;
                //si "salir" es diferente a 0 y a 1, haremos que "salir" y "salir2" sean igual para que se pueda repetir el bucle de verificación
            }
        }
        //el bucle se repetira hasta que "salir" sea igual a 1 o a 0
        salir2 = salir;
        //haremos que "salir2" sea igual a "salir", para cuando se repita la aplicación se pueda repetir el bucle de verificación
        system("PAUSE");
        system("cls");
        // pausamos el sistema para que el usuario pueda ver los resultados y al reptirse o salir de la aplicación limpiamos panta
    }while(salir != 0);
    // se saldra de la aplicación solo si "salir" es 0
    return 0;
    }
// en la aplicaciones de resta(), multi(), divi() y resto() se repite la misma secuencia solo que se realizan operaciones distintas segun su nombre
int resta(){
    int a, b, salir, salir2;
    float res;
    do{
    	cout<<"\t RESTA"<<endl;
        cout<<"ingrese el primer valor"<<endl;
        cin>>a;
        cout<<"ingrese el segundo valor"<<endl;
        cin>>b;

        res = a - b;
        //restaremos los valores a y b que le pedimos al usuario e imprimimos en pantalla los resultados
        cout<<"el resultado de la resta de los numeros "<<a<<" y "<<b<<" es: "<<res<<endl;
        while(salir == salir2){
            cout<<"desea seguir en esta ventana? (si=1/no=0)"<<endl;
            cin>>salir;
            if(salir == 0){
                cout<<"ahora regresara al menu principal"<<endl;
                salir2 = 1;
            }else if(salir == 1){
                cout<<"puedes seguir utilizando la resta"<<endl;
                salir2 = 2;         
            }else if(salir !=0 and salir !=1){
                cout<<"la opcion no es valida"<<endl;
                salir2 = salir;
            }
        }
        salir2 = salir;
        system("PAUSE");
        system("cls");
    }while(salir != 0);
    return 0;
return 0;
}

int multi(){
    int a, b, salir, salir2;
    float res;
    do{
    	cout<<"\t MULTIPLICACION"<<endl;
        cout<<"ingrese el primer valor"<<endl;
        cin>>a;
        cout<<"ingrese el segundo valor"<<endl;
        cin>>b;

        res = a * b;
        //multiplicaremos los valores a y b que le pedimos al usuario e imprimimos en pantalla los resultados
        cout<<"el resultado de la multiplicacion de los numeros "<<a<<" y "<<b<<" es: "<<res<<endl;
        while(salir == salir2){
            cout<<"desea seguir en esta ventana? (si=1/no=0)"<<endl;
            cin>>salir;
            if(salir == 0){
                cout<<"ahora regresara al menu principal"<<endl;
                salir2 = 1;
            }else if(salir == 1){
                cout<<"puedes seguir utilizando la multiplicacion"<<endl;
                salir2 = 2;         
            }else if(salir !=0 and salir !=1){
                cout<<"la opcion no es valida"<<endl;
                salir2 = salir;
            }
        }
        salir2 = salir;
        system("PAUSE");
        system("cls");
    }while(salir != 0);
    return 0;
return 0;
}

int divi(){
    int salir, salir2;
    float a, b, res;
    do{
    	cout<<"\t DIVICION"<<endl;
        cout<<"ingrese el primer valor"<<endl;
        cin>>a;
        cout<<"ingrese el segundo valor"<<endl;
        cin>>b;

        res = a / b;
        //Dividiremos los valores a y b que le pedimos al usuario e imprimimos en pantalla los resultados de cuantas veces "b" divide a "a"
        cout<<"el resultado de la divicion de los numeros "<<a<<" y "<<b<<" es: "<<res<<endl;
        while(salir == salir2){
            cout<<"desea seguir en esta ventana? (si=1/no=0)"<<endl;
            cin>>salir;
            if(salir == 0){
                cout<<"ahora regresara al menu principal"<<endl;
                salir2 = 1;
            }else if(salir == 1){
                cout<<"puedes seguir utilizando la divicion"<<endl;
                salir2 = 2;         
            }else if(salir !=0 and salir !=1){
                cout<<"la opcion no es valida"<<endl;
                salir2 = salir;
            }
        }
        salir2 = salir;
        system("PAUSE");
        system("cls");
    }while(salir != 0);
    return 0;
return 0;
}

int resto(){
    int a, b, salir, salir2;
    float res;
    do{
    	cout<<"\t SOBRANTE DE UNA DIVISION"<<endl;
        cout<<"ingrese el primer valor"<<endl;
        cin>>a;
        cout<<"ingrese el segundo valor"<<endl;
        cin>>b;

        res = a%b;
        //Dividiremos los valores a y b que le pedimos al usuario e imprimimos en pantalla los resultados y veremos el resto que deja la divicion de a y b
        cout<<"el resultado del resto de la divicion de los numeros "<<a<<" y "<<b<<" es: "<<res<<endl;
        while(salir == salir2){
            cout<<"desea seguir en esta ventana? (si=1/no=0)"<<endl;
            cin>>salir;
            if(salir == 0){
                cout<<"ahora regresara al menu principal"<<endl;
                salir2 = 1;
            }else if(salir == 1){
                cout<<"puedes seguir utilizando el resto de la divicion"<<endl;
                salir2 = 2;         
            }else if(salir !=0 and salir !=1){
                cout<<"la opcion no es valida"<<endl;
                salir2 = salir;
            }
        }
        salir2 = salir;
        system("PAUSE");
        system("cls");
    }while(salir != 0);
    return 0;
return 0;
}

int main(){
	int option;
	// varialbe para el funcionamiento de switch() que utilzamos para hacer un menu
	cout<<"\t CALCULADORA"<<endl;
	cout<<"Bienvenido a la calculadora, en la que puedes operar sumas, restas, multiplicaciones, diviciones y saber el resto de una divicion"<<endl;
	//damos informacion de la aplicacion
	while(1==1){
		
		cout<<"Que operacion deseas realizar: \n1 suma \n2 resta \n3 multiplicacio \n4 division \n5 resto de una division \n6 salir"<<endl;
		cin>>option;
		// pedimos al usuario que ingrese una de las opciones dadas para realizar las operaciones
		switch (option)
        {
        case 1:
            suma();
            break;
        
        case 2:
            resta();
            break;

        case 3:
            multi();
            break;
        
        case 4:
            divi();
            break;

        case 5:
            resto();
            break;

          case 6:
            exit(EXIT_SUCCESS);
            //se cierra el programa exitosamente
            break;

        default:
            cout<<"Ventado no existente"<<endl;
            system("PAUSE");
        	system("cls");
        	// damos a entender que la opcino no existe y se pausa la pantalla para que el usuario pueda leerla, luego se limpliara la pantalla
            break;
        }
	}
	//el bucle se repetira indefinidamente, hasta que se seleccione la opcion 6 que cierra el programa
    return 0;
}