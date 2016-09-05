#ifndef DEFINICION_H_INCLUDED
#define DEFINICION_H_INCLUDED

typedef struct nodo {
        int nro;
        nodo *ptrsiguiente;

}*lista;


int ingOpcion();

void menu();

lista creo_lista();

bool es_vacia(lista l);

lista insertar_al_ppio(lista l, int v);

void muestro_lista(lista l);

int cantidad_nodos(lista l);

bool esta_valor_en_lista(lista l, int v);

int cantidad_veces(lista l, int v);

lista elimino_nodo_ppio(lista l);

lista inserto_en_posicion(lista l, int v, int pos);

lista inserto_final(lista l, int v);

lista elimino_nodo_final(lista l);

lista elimino_nodo_en_posicion(lista l,int pos);



#endif // DEFINICION_H_INCLUDED
