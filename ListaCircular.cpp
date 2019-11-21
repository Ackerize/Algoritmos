struct Nodo{
  int dato;
  Nodo *sig;
  Nodo *prev;
}*inicio, *fin;


class ListaCircular{

  public:
    Nodo* crearNodo(int valor){
      Nodo *n = new Nodo;
      n->dato = valor;
      n->sig = nullptr;
      return n;
    }
    
    void mostrarLista(){
        Nodo *temp = fin->sig;
        if(!fin)
            cout << "La lista no posee elementos" << endl;
        while(temp != fin){
            cout << temp->dato<<", ";
            temp = temp->sig;
        }
        cout << temp->dato;
    }
        
    void agregarElemento(int valor){
        Nodo *n = crearNodo(valor);
        if(!fin){
            fin = n;
            n->sig = fin;
        }
        else{
            n->sig = fin->sig;
            fin->sig = n;
            fin = n;
        }

    }
        
    ListaCircular(){
        inicio=nullptr;
        fin = nullptr;
    }
};
