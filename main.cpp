#include <iostream>
#include "definicion.h"
#include "operaciones.cpp"
using namespace std;

int main()
{
    lista cabezal;
    int opcion;
    int valor;
    int posicion;
    menu();
    opcion = ingOpcion();
    cin.get();
    while (opcion !=13)
    {
        switch (opcion)
        {
            case 1:
                cabezal = creo_lista();
                cout << "La lista fue creada correctamente"<<endl;
                break;
            case 2:
                if (es_vacia(cabezal))
                    cout << "La lista se encuentra vacia"<<endl;
                else
                    cout << "La lista contiene nodos"<<endl;
                break;
            case 3:
                if (es_vacia(cabezal))
                    cout << "La lista se encuentra vacia" << endl;
                else
                    muestro_lista(cabezal);
                break;
            case 4:
                cout << "La cantidad de nodos de la lista es: "<<cantidad_nodos(cabezal)<<endl;
                break;
            case 5:
                 if (es_vacia(cabezal))
                    cout << "La lista se encuentra vacia" << endl;
                else
                {
                    cout << "Ingrese valor a buscar en la lista";
                    cin >> valor;
                    cin.get();
                    if (esta_valor_en_lista(cabezal, valor))
                        cout << "El valor "<<valor<<" se encuentra en la lista"<<endl;
                    else
                        cout << "El valor "<<valor<<" NO se encuentra en la lista"<<endl;
                }
                break;
            case 6:
                if (es_vacia(cabezal))
                    cout << "La lista se encuentra vacia" << endl;
                else
                {
                    cout << "Ingrese valor a buscar en la lista";
                    cin >> valor;
                     cin.get();
                    if (esta_valor_en_lista(cabezal, valor))
                        cout << "El valor "<<valor<<" se encuentra en la lista "<< cantidad_veces(cabezal,valor)<< " veces"<<endl;
                    else
                        cout << "El valor "<<valor<<" NO se encuentra en la lista"<<endl;
                }
                break;
            case 7:
                cout << "Ingrese valor a insertar en la lista";
                cin >> valor;
                cabezal = insertar_al_ppio(cabezal,valor);
                cout << "El valor fue insertado correctamente al principio de la lista";
                break;
            case 8:
                cout << "Ingrese valor a insertar en la lista";
                cin >> valor;
                cabezal = inserto_final(cabezal,valor);
                cout << "El valor fue insertado correctamente al final de la lista";
                break;
            case 9:
                cout << "Ingrese valor a insertar en la lista";
                cin >> valor;
                cout << "Ingrese posicion a insertar en la lista";
                cin >> posicion;
                cabezal = inserto_en_posicion(cabezal,valor,posicion);
                cout << "El valor fue insertado correctamente en la posición dada en la lista";
                break;
            case 10:
                if (es_vacia(cabezal))
                    cout << "La lista se encuentra vacia" << endl;
                else
                {
                    cabezal = elimino_nodo_ppio(cabezal);
                    cout << "El nodo fue eliminado del principio de la lista";
                }
                break;
            case 11:
                if (es_vacia(cabezal))
                    cout << "La lista se encuentra vacia" << endl;
                else
                {
                    cabezal = elimino_nodo_final(cabezal);
                    cout << "El nodo fue eliminado del final de la lista";
                }
                break;
            case 12:
                 if (es_vacia(cabezal))
                    cout << "La lista se encuentra vacia" << endl;
                else
                {
                    cout << "Ingrese posicion a eliminar en la lista";
                    cin >> posicion;
                    cabezal = elimino_nodo_en_posicion(cabezal,posicion);
                    cout << "El nodo fue eliminado de la posicion dada en la lista";
                }
                break;
        }
        cin.get();
        menu();
        opcion = ingOpcion();
        cin.get();
    }
     return 0;
}
