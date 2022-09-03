using namespace std;
#define MAX 100
#include <iostream>
template  <typename T> 
class Queuearr{
    private:
    int frente, final,Numelementos;
    T queue[MAX];
    public:
    Queuearr();
    void enqueue(T elemento);
    void dequeue();
    void hacerVacia();
    T getFrente();
    void imprime();
    };
template  <typename T>
Queuearr<T> :: Queuearr(){
    frente=0;
    final=-1;
    Numelementos=0;
}
template  <typename T>
void Queuearr<T> :: enqueue(T elemento){
   if(Numelementos<MAX){
       final=(final+1)%MAX;
       queue[final]=elemento;
       Numelementos++;   
       cout<<elemento;
   }
   else{
       cout<<"Límite de memoria"<<endl;
   }
}
template  <typename T>
void Queuearr<T> :: dequeue(){
   if(Numelementos!=0){
   frente++;
   Numelementos--;
   }
}
template  <typename T>
T Queuearr<T> :: getFrente(){
T temp;
if(Numelementos!=0)
return temp=queue[frente];
}
template  <typename T>
void Queuearr<T> :: hacerVacia(){
frente=0;
final=-1;
Numelementos=0;
}
