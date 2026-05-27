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
 					Registrar libro  
 					Mostrar libros registrados  
 					Buscar libro por código o nombre  
				Módulo de Estudiantes 
 					Registrar estudiante  
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
		
		vector<string> nombre;
		vector<string> carrera;
		vector<string> ci;
		
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
		
		
		vector <string> estudiante={"felipe","luciana","fernando","brenda"};
		
		
		cout << "	Ingrese el nombre del estudiante: ";
			//cin >> e1.nombre;
		//vamos
		bool bandera = 'F';
		
		for (int i = 0; i<estudiante.size();i++){
			
			int validacion= (e1.nombre== estudiante);
		
				if (validacion == 0){
				
			cout << "El nombre del estudiante esta registrado en la base de datos"<<endl;
			
			bool bandera= 'V';
			
			break;
		}
			
		}
			cout<<"No se encontro el nombre"<<endl;
		
		
		return 0;
	}