#include <iostream>
#include <vector>

	using namespace std;
	
	/*
	Desarrollar un Software que sea un Sistema Básico de Gestión de Biblioteca Universitaria
	Debe registrar libros, estudiantes y prestamos. 
	Se utilizara estructura de vectores, registros y archivos para el almacenamiento de datos

		Objetivos Específicos 
1. Implementar vectores para almacenar listas de libros y estudiantes.  (VECTORES)
2. Utilizar registros para estructurar la información de los datos.  	(VECTORES O ARREGLOS)
3. Aplicar archivos para guardar y recuperar información.  				(MANEJO DE ARCHIVOS)
4. Desarrollar operaciones básicas de registro, búsqueda y listado.  (ARREGLOS)
5. Diseñar un menú interactivo para la gestión del sistema. 			(ASCII / TERMINAL_LINUX)



			1. Funcionalidades Básicas 
				Módulo de Libros 
 					Registrar libro  
 					Mostrar libros registrados  
 					Buscar libro por código o nombre  
				Módulo de Estudiantes 
 				Registrar estudiante  
 					Mostrar estudiantes registrados  
				Módulo de Préstamos 
 					Registrar préstamo de libro  
 					Mostrar préstamos realizados  
				Persistencia de Datos 
 					Guardar información en archivos  
 					Leer información desde archivos al iniciar el sistema 

 
			2. Estructuras sugeridas 
				Registro Libro 
 					Código  
 					Título  
 					Autor  
 					Cantidad disponible  
				Registro Estudiante 
 					CI o código  
 					Nombre  
 					Carrera o curso  
				Registro Préstamo 
 					Código libro  
 					Código estudiante  
 					Fecha préstamo  
			3. Requisitos Técnicos 
 					Lenguaje: C++  
				    Interfaz: Consola  
				 Uso obligatorio de:  
						o vectores o arreglos,  
						o registros/struct,  
						o archivos de texto.
	
	*/
	
	struct Estudiante{
		
		string nombre;
		string carrera;
		string ci;
		
	}e1;
	
	struct Libro{ 
		int codigo[13]; 
		string titulo [30]; 
		string autor [10]; 
		int cantidad_Disponible;
	}l1; 
	
	/*struct prestamo{
		
		//ligado al struct Libro==codigo (debe ir este requerimiento. Esta anidado)
		//ligado al struct Estudiante==ci (debe ir este requerimiento. Esta anidado)
		int fecha;
		//ligado al struct Libro==Cantidad (debe ir este requerimiento. Esta anidado)
		
	};
	*/
	
	int main (){
		cout << "	Universidad Privada Domingo Savio"<<endl;
		cout << "			biblioteca"<<endl;	
		
		
		string estudiante[4]={"felipe","luciana","fernando","brenda"};
		
		
		cout << "	Ingrese el nombre del estudiante: ";
		cin >> e1.nombre;
		bool bandera = false;
		
		for (int i = 0; i < 4; i++){
			if (e1.nombre == estudiante[i]){
				cout << "El nombre del estudiante esta registrado en la base de datos" << endl;
				bandera = true;
				break;
			}
		}
		
		if (!bandera) {
			cout << "No se encontro el nombre" << endl;
		}
			
		
		
		return 0;
	}