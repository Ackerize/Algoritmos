struct Nodo{
  int dato;
  Nodo *sig;
}*inicio;


class ListaEnlazada{

  public:
    Nodo* crearNodo(int valor){
      Nodo *n = new Nodo;
      n->dato = valor;
      n->sig = nullptr;
      return n;
    }
    
    void mostrarLista(){
      Nodo *temp = inicio;
      if(!inicio)
        cout << "La lista no posee elementos" << endl;
      else
        while(temp){
          cout << temp->dato<<", ";
          temp = temp->sig;
        }
     }
     
     void agregarElemento(int valor){
       Nodo *n = crearNodo(valor), *temp;
       if(!inicio)
        inicio = n;
       else{
        for(temp=inicio; temp->sig; temp = temp->sig);
          temp->sig = n;
       }
      }
      
      ListaEnlazada(){
        inicio=nullptr;
       }
};
