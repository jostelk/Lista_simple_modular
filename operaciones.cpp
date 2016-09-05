#include <iostream>
#include <cstdlib>
using namespace std;

lista creo_lista()
{
    return NULL;
}

bool es_vacia(lista l)
{
    if (l==NULL)
        return true;
    else
        return false;
}

lista insertar_al_ppio(lista l, int valor)
{
    lista nuevo_nodo;
    nuevo_nodo = new nodo;
    nuevo_nodo->nro = valor;
    nuevo_nodo->ptrsiguiente =l;
    return nuevo_nodo;
}

void muestro_lista(lista l)
{
//se asume que la lista no esta vacia
    lista aux;
    aux=l;
    while (aux != NULL)
    {
            cout << aux->nro << " - ";
            aux=aux->ptrsiguiente;
    }
    cout << endl;
}

int cantidad_nodos(lista l)
{
    lista aux;
    int cantidad;
    cantidad = 0;
    aux = l;
    while (aux != NULL)
    {
            cantidad++;
            aux=aux->ptrsiguiente;

    }
    return cantidad;
}

bool esta_valor_en_lista(lista l, int v)
{
    lista aux;
    bool esta = false;
    aux = l;
    while (!es_vacia(aux))
    {
            if (aux->nro == v)
            {
                esta = true;
            }
            aux=aux->ptrsiguiente;
    }
    return esta;
};

int cantidad_veces(lista l, int v)
{
    lista aux;
    int cantidad;
    cantidad = 0;
    aux = l;
    while (!es_vacia(aux))
    {
        if (aux->nro == v)
        {
                cantidad++;
        }
        aux=aux->ptrsiguiente;
    }
    return cantidad;
}

lista elimino_nodo_ppio(lista l)
{
//consideramos que la lista no esta vacia.
    lista n;
    n = l;
    n = n->ptrsiguiente;
    delete l;
    return n;
}

lista inserto_en_posicion(lista l, int v, int pos)
{
    int lugar;
    lugar = 1;
    lista n,aux,auxant;
    aux = l;
    auxant = NULL;
    if (es_vacia(l) || pos > cantidad_nodos(l)|| pos < 1)
    {
            cout << "No existe dicha posición"<< endl;
    }
    else
    {
        if (pos == 1)
        {
            l=insertar_al_ppio(l,v);
        }
        else{

            while(aux!= NULL)
            {
                if (pos==lugar)
                {
                     n = new nodo;
                     n->nro = v;
                     n->ptrsiguiente=auxant->ptrsiguiente;
                     auxant->ptrsiguiente = n;
                     return l;
                }
                auxant = aux;
                aux=aux->ptrsiguiente;
                lugar++;
           }
        }
    }
    return l;
}

lista inserto_final(lista l, int v)
{
    lista n,aux;
    aux = l;

    n = new nodo;
    n->nro = v;
    n->ptrsiguiente=NULL;

    if (es_vacia(l))
    {
            l=n;
    }
    else
    {
        while (aux->ptrsiguiente!=NULL)
        {
            aux=aux->ptrsiguiente;
        }
        aux->ptrsiguiente = n;
    }
    return l;
}

lista elimino_nodo_final(lista l)
{
// se asume que la lista no esta vacia
lista aux,ant;
aux = l;
ant = NULL;
while (aux->ptrsiguiente!= NULL)
{
    ant = aux;
    aux=aux->ptrsiguiente;
}
ant->ptrsiguiente = aux->ptrsiguiente;
delete aux;
return l;
}

lista elimino_nodo_en_posicion(lista l,int pos)
{
    int lugar;
    lugar = 1;
    lista aux,ant;
    aux = l;
    ant = NULL;
    if (es_vacia(l) || pos > cantidad_nodos(l)|| pos < 1)
    {
            cout << "No existe dicha posición"<< endl;
    }
    else
    {
        if (pos == 1)
        {
            l=elimino_nodo_ppio(l);
        }
        else{

            while(pos!=lugar)
            {
                ant = aux;
                aux=aux->ptrsiguiente;
                lugar++;
            }
            ant->ptrsiguiente = aux->ptrsiguiente;
            delete aux;
        }
    }
    return l;
}

void menu()
{
    system("clear");
    cout << "MENU PRINCIPAL LISTA SIMPLE"<<endl;
    cout << "==========================="<<endl<<endl;
    cout << "1.- Creo lista"<<endl;
    cout << "2.- Lista está Vacia? "<<endl;
    cout << "3.- Muestro Lista"<<endl;
    cout << "4.- Cantidad de Nodos"<<endl;
    cout << "5.- Esta Valor en la lista?"<<endl;
    cout << "6.- Cantidad de veces que esta un valor en la Lista"<<endl;
    cout << "7.- Insertar nodo al Principio"<<endl;
    cout << "8.- Insertar nodo al Final"<<endl;
    cout << "9.- Insertar nodo en posición"<<endl;
    cout << "10.- Eliminar nodo al principio"<<endl;
    cout << "11.- Eliminar nodo al final"<<endl;
    cout << "12.- Elimnar nodo en posicion"<<endl;
    cout << "13.- Salir del sistema lista"<<endl;
}

int ingOpcion()
{
    int op;
    cout << "Ingrese Opción: ";
    cin >> op;
    return op;
}
