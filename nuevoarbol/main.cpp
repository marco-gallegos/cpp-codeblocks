#include <iostream>

using namespace std;

class nodo
{
public:
    int dato;
    nodo *der,*izq;
    nodo(): der(NULL),izq(NULL){};
    nodo(int d): der(NULL),izq(NULL),dato(d){};
};

class arbol
{
public:
    nodo *raiz;
    nodo *actual;
    int altura,contador;
    arbol():raiz(NULL),actual(NULL){};


    void podar(nodo * &act)
    {
        if(act)
        {
            podar(act->izq);
            podar(act->der);
            delete act;
            act=NULL;
        }
    }

    ~arbol(){podar(raiz);}


    bool vacio(nodo *n){return n==NULL;}
    bool es_hoja(nodo *n){return !n->der&&!n->izq;}
    void Raiz(){actual=raiz;}

    void insertar(int data)
    {
        nodo *padre=NULL;
        actual=raiz;

        while(!vacio(actual)&&data!=actual->dato)
        {
            padre=actual;
            if(data>actual->dato)
            {
                actual=actual->der;
            }
            else
            {
                if(data<actual->dato)
                    actual=actual->izq;
            }
        }
        if(!vacio(actual))
            return;
        if(vacio(padre))
        {raiz=new nodo(data);}
        else
        {
            if(data<padre->dato){padre->izq=new nodo(data);return;}
            if(data>padre->dato){padre->der=new nodo(data);return;}
        }
    }

    void borrar(int data)
    {
        nodo *padre=NULL,tmp;
        int aux;

        actual=raiz;
        while(!vacio(actual))
        {
            if(data==actual->dato)
            {
                if(es_hoja(actual))
                {
                    if(padre)//si hay un anterior no es raiz
                    {
                        if(padre->der==actual){padre->der=NULL;}
                        else{if(padre->izq==actual){padre->izq=NULL;}}
                    }
                    delete actual;
                    actual=NULL;
                    return;
                }
                else
                {
                    padre=actual;
                    if(actual->der)
                    {
                        tmp=actual->der;
                        while(tmp->izq)
                        {
                            padre=tmp;
                            tmp=tmp->izq;
                        }
                    }
                    else
                    {
                        tmp=actual->izq;
                        while(tmp->der)
                        {
                            padre=tmp;
                            tmp=tmp->der;
                        }
                    }
                    aux=actual->dato;
                    actual->dato=tmp->dato;
                    tmp->dato=aux;
                    actual=tmp;
                }
            }
            else
            {
                padre=actual;
                if(data>actual->dato){actual=actual->der;}
                else{if(data<actual->dato){actual=actual->izq;}}
            }
        }
    }

    void preorden(nodo *act)
    {
        cout<<act->dato<<" ";
        if(act->izq){preorden(act->izq);}
        if(act->der){preorden(act->der);}
    }

    void inorden(nodo *act)
    {
        if(act->izq){preorden(act->izq);}
        cout<<act->dato<<" ";
        if(act->der){preorden(act->der);}
    }

    void postorden()
    {
        if(act->izq){preorden(act->izq);}
        if(act->der){preorden(act->der);}
        cout<<act->dato<<" ";
    }





};






int main()
{
    arbol abb;
    abb.insertar(12);
    abb.insertar(12);


}
