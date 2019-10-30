struct Nodo{
  int dato;
  Nodo *sig;
  Nodo *prev;
}*inicio, *fin;

class ListaDobleEnlazada{

  public:
    Nodo* crearNodo(int valor){
      Nodo *n = new Nodo;
      n->dato = valor;
      n->sig = nullptr;
      n->prev = nullptr;
      return n;
    }
    
    void mostrarListaAdelante(){
      Nodo *temp = inicio;
      if(!inicio)
        cout << "La lista no posee elementos" << endl;
      else
        while(temp){
          cout << temp->dato<<", ";
          temp = temp->sig;
        }
     }
     void mostrarListaAtras(){
        Nodo *temp = fin;
        if(!inicio)
          cout << "La lista no posee elementos" << endl;
        else
          while(temp){
             cout << temp->dato<<", ";
             temp = temp->prev;
          }
      }
  
     
     void agregarElemento(int valor){
       Nodo *n = crearNodo(valor), *temp;
       if(!inicio){
        inicio = n;
        fin = n;
       }
       else{
        fin->sig = n;
         n->prev = fin;
         fin = n;
       }
      }
      
      ListaEnlazada(){
        inicio=nullptr;
        fin = nullptr;
       }
};
