#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[39][2][4];

void cargarLibros() {

    // Arreglo con categoria y descripcion

                libros[0][0][0] = "Algoritmos"; libros[0][1][2] = "Algoritmos y Programacion (Guia para docentes)"; libros[0][1][3] = "William ";
                libros[1][0][0] = "Algoritmos"; libros[1][1][2] = "Apuntes de Algoritmos y Estructuras de Datos";libros[1][1][3] = "Pedro";
                libros[2][0][0] = "Algoritmos"; libros[2][1][2] = "Breves Notas sobre Analisis de Algoritmos";libros[2][1][3] = "Pablo";
                libros[3][0][0] = "Algoritmos"; libros[3][1][2] = "Fundamentos de Informatica y Programacion";libros[3][1][3] = "Maria";
                libros[4][0][0] = "Algoritmos"; libros[4][1][2] = "Temas selectos de estructuras de datos";libros[4][1][3] = "Keyla";
                libros[5][0][0] = "Algoritmos"; libros[5][1][2] = "Teoria sintactico-gramatical de objetos";libros[5][1][3] = "Yessenia";
                libros[6][0][0] = "Base de Datos"; libros[6][1][2] = "Apuntes de Base de Datos 1";libros[6][1][3] = "Dominique";
                libros[7][0][0] = "Base de Datos"; libros[7][1][2] = "Base de Datos (2005)";libros[7][1][3] = "Alba";
                libros[8][0][0] = "Base de Datos"; libros[8][1][2] = "Base de Datos (2011)";libros[8][1][3] = "Luz";
                libros[9][0][0] = "Base de Datos"; libros[9][1][2] = "Base de Datos Avanzadas (2013)";libros[9][1][3] = "Karla";
                libros[10][0][0] = "Base de Datos"; libros[10][1][2] = "Diseno Conceptual de Bases de Datos";libros[10][1][3] = "Andrea";
                libros[11][0][0] = "Ciencia Computacional"; libros[11][1][2] = "Breves Notas sobre Automatas y Lenguajes";libros[11][1][3] = "Andres";
                libros[12][0][0] = "Ciencia Computacional"; libros[12][1][2] = "Breves Notas sobre Teoria de la Computacion";libros[12][1][3] = "Tommy";
                libros[13][0][0] = "Metodologias de desarrollo de software"; libros[13][1][2] = "Compendio de Ingenieria del Software";libros[13][1][3] = "John";
                libros[14][0][0] = "Metodologias de desarrollo de software"; libros[14][1][2] = "Diseno agil con TDD";libros[14][1][3] = "Carlos";
                libros[15][0][0] = "Metodologias de desarrollo de software"; libros[15][1][2] = "Ingenieria de Software: Una Guia para Crear Sistemas de Informacion";libros[15][1][3] = "Constantine";
                libros[16][0][0] = "Metodologias de desarrollo de software"; libros[16][1][2] = "Scrum & Extreme Programming (para programadores)";libros[16][1][3] = "Bruce";
                libros[17][0][0] = "Metodologias de desarrollo de software"; libros[17][1][2] = "Scrum y XP desde las trincheras";libros[17][1][3] = "Clark";
                libros[18][0][0] = "Miscelaneos"; libros[18][1][2] = "97 cosas que todo programador deberia saber";libros[18][1][3] = "Diana";
                libros[19][0][0] = "Miscelaneos"; libros[19][1][2] = "Docker";libros[19][1][3] = "Barry";
                libros[20][0][0] = "Miscelaneos"; libros[20][1][2] = "El camino a un mejor programador";libros[20][1][3] = "Hal";
                libros[21][0][0] = "Miscelaneos"; libros[21][1][2] = "Introduccion a Docker";libros[21][1][3] = "Malcolm";
                libros[22][0][0] = "Miscelaneos"; libros[22][1][2] = "Programacion de videojuegos SDL";libros[22][1][3] = "Reece";
                libros[23][0][0] = "PHP"; libros[23][1][2] = "Manual de estudio introductorio al lenguaje PHP procedural";libros[23][1][3] = "Negan";
                libros[24][0][0] = "PHP"; libros[24][1][2] = "PHP y Programacion orientada a objetos";libros[24][1][3] = "Rick";
                libros[25][0][0] = "PHP"; libros[25][1][2] = "POO y MVC en PHP";libros[25][1][3] = "Morty";
                libros[26][0][0] = "PHP"; libros[26][1][2] = "Silex, el manual oficial";libros[26][1][3] = "Ned";
                libros[27][0][0] = "PHP"; libros[27][1][2] = "Symfony 1.4, la guia definitiva";libros[27][1][3] = "Tyrion";
                libros[28][0][0] = "PHP"; libros[28][1][2] = "Symfony 2.4, el libro oficial";libros[28][1][3] = "Emilia";
                libros[29][0][0] = "Python"; libros[29][1][2] = "Aprenda a pensar como un programador (con Python)";libros[29][1][3] = "Superman";
                libros[30][0][0] = "Python"; libros[30][1][2] = "Doma de Serpientes para Ninos: Aprendiendo a Programar con Python";libros[30][1][3] = "Superboy";
                libros[31][0][0] = "Python"; libros[31][1][2] = "Inmersion en Python";libros[31][1][3] = "Ultraman";
                libros[32][0][0] = "Python"; libros[32][1][2] = "Inmersion en Python 3";libros[32][1][3] = "louis";
                libros[33][0][0] = "Python"; libros[33][1][2] = "Introduccion a la programacion con Python";libros[33][1][3] = "Lane";
                libros[34][0][0] = "Python"; libros[34][1][2] = "Introduccion a Programando con Python";libros[24][1][3] = "Cloe";
                libros[35][0][0] = "Python"; libros[35][1][2] = "Python instantaneo (1999)";libros[35][1][3] = "Flash";
                libros[36][0][0] = "Python"; libros[36][1][2] = "Python para ciencia e ingenieria";libros[36][1][3] = "Spiderman";
                libros[37][0][0] = "Python"; libros[37][1][2] = "Python para principiantes";libros[37][1][3] = "Dc";
                libros[38][0][0] = "Python"; libros[38][1][2] = "Python para todos";libros[38][1][3] = "La mera yema";
}


int main(int argc, char const *argv[])

{

    cargarLibros();

    srand (time(NULL));
    
    bool salir = false;

    while (salir == false)
    {
        int op=0;
        string buscar = "";

        system("cls");

        cout<< "Ingrese metodo de busqueda :\n";
        cout<<"1. Por descripcion de libro\n";
        cout<<"2. Por autor\n";
        cout<<endl<<"----->";
        cin>>op;
    
        	switch(op){
                case 1:
    	            cout << "Ingrese la descripcion del libro que busca: ";
    				cin >> buscar;
                                                           
                    // busqueda
                    for (int i = 0; i < 39; i++)
                    {
                        string libro = libros[i][1][2];
                        string libroEnminuscula = libro;

                        // transformamos a minuscula los string buscar y libro
                        transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
                        transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);       
                              
						if (libroEnminuscula.find(buscar) != string::npos) {
                            cout << "Libro encontrado: " << libro << endl;
                            cout << "Tambien te sugerimos estos libros: " << endl;
                            int sugerencia1 = rand() % 38 + 1;
                            int sugerencia2 = rand() % 38 + 1;
                            int sugerencia3 = rand() % 38 + 1;
                            
                            cout << " Sugerencia 1: " << libros[sugerencia1][1][2] << endl;
                            cout << " Sugerencia 2: " << libros[sugerencia2][1][2] << endl;
                            cout << " Sugerencia 3: " << libros[sugerencia3][1][2] << endl;
                            salir = true;

                            break;
                        }             
                    }

                    break;

                case 2:
                    cout << "Ingrese el autor del libro: ";
                    cin >> buscar;
                    
                    for (int i = 0; i < 39; i++)
                    {
                        string autor = libros[i][1][3];
                        
                        string libroEnminuscula = autor;
						string libro = libros[i][1][2];
							//cout<<autor;	
						
                        // transformamos a minuscula los string buscar y libro
                        transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
                        transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

                        if (libroEnminuscula.find(buscar) != string::npos) {
                            cout << "Libro encontrado: " << libro << endl;
                            cout << "Tambien te sugerimos estos libros: " << endl;

                            int sugerencia1 = rand() % 38 + 1;
                            int sugerencia2 = rand() % 38 + 1;
                            int sugerencia3 = rand() % 38 + 1;               

                            cout << " Sugerencia 1: " << libros[sugerencia1][1][2] << endl;
                            cout << " Sugerencia 2: " << libros[sugerencia2][1][2] << endl;
                            cout << " Sugerencia 3: " << libros[sugerencia3][1][2] << endl;

                            salir = true;
                            break;

                        }             
                    }
system("pause");
                    break;

                default:
                    break;

            }

        if (salir == false) {
            char continuar = 'n';

            while(true) {
                system("cls");
                cout << "No se encontro el libro que busca. Desea continuar? s/n ";
                cin >> continuar;
 
                if (continuar == 's' || continuar == 'S') {
                    break;
                } else if (continuar == 'n' || continuar == 'N') {
                    salir = true;
                    break;
                }

            }

        }

    }
    return 0;
}
