#include <iostream>
#include "calcVideo.h"
using namespace std;

int main(){
  // Datos iniciales------------------------------------
    //películas

    Video *pArray[5];

    pArray[0] = new Pelicula("Pelicula", "Dune", "Accion", 4, 2021, 240);
    pArray[0] -> obtener(5);
    
    pArray[1] = new Pelicula("Pelicula", "Batman", "ciencia ficción", 5, 1997, 120);
    pArray[1] -> obtener(2);

    pArray[2] = new Pelicula("Pelicula", "Roma", "Drama", 4, 2018, 135);
    pArray[2] -> obtener(3);

    // series
    pArray[3] = new Serie("Serie", "Flash", "fantasía", 2 ,2011, 60);
    pArray[3] -> obtener(8);
    
    pArray[4] = new Serie("Serie", "Arrow", "Drama", 2,2008, 45);
    pArray[4] -> obtener(5);

  // Creación de menu----------------------------------------
  bool menu = true;
  int n;
  cout<<"\n\n============= Bienvenido a NetflixTec ============="<<endl;
  while (menu){ 
    cout<<"\nMenú:\n----------------------------------------------------\n1.\tMostrar los videos en general "<< endl;
    cout << "2.\tMostrar las series con una calificación determinada" << endl;
    cout << "3.\tMostrar las películas con cierta calificación" << endl;
    cout << "4.\tCalificar un video" <<endl;
    cout << "5.\tSalir" <<endl;
    cout << endl << "Ingresa el número de la opción que quieres: ";
    cin >> n;

    if (n == 1){
      cout << endl << "\nVideos:-----"<< endl;
      for (int i=0; i<=4;i++){
        pArray[i] -> regresaAtributos();
        cout << endl<<endl;
      }

    } 

    else if (n == 2){
      bool temp=false;
      int _calificacion;
      cout << "Ingresa la calificacion de búsqueda: ";
      cin>>_calificacion;
      cout<<"\nSeries:-----"<<endl;
      for (int i=3; i<=4; i++){
        if (_calificacion == pArray[i]-> getCalif()){
          pArray[i] -> regresaAtributos();
          cout<<endl;
          temp=true;
        }
      }
      if(temp==false){
        cout<<"\nNo se encontraron resultados"<<endl<<endl;
      }
    } 
    
    else if (n == 3){
      bool temp=false;
      int _calificacion;
      cout << "Ingresa la calificacion de búsqueda: ";
      cin>>_calificacion;
      cout<<"\nPelícula:-----"<<endl;
      for (int i=0; i<=2; i++){
        if (_calificacion == pArray[i]-> getCalif()){
          pArray[i] -> regresaAtributos();
          cout<<endl;
          temp=true;
        }
      }
      if(temp==false){
        cout<<"\nNo se encontraron resultados"<<endl<<endl;
      }
    } 
 
    
    else if (n == 4){
      bool temp =false;
      string nPeli;
      int _calificacion;
      cout << "¿Qué video quieres calificar?: ";
      cin>>nPeli;
      for (int i=0; i<5; i++){
        if (pArray[i]->getNombre()==nPeli){
          cout << "Ingresa calificación: ";
          cin >> _calificacion;
          pArray[i] -> setCalif(_calificacion);
          pArray[i] -> regresaAtributos();
          temp=true;
          cout << endl;
          } 
        }
        if(temp==false){
        cout<<"\nNo se encontraron resultados"<<endl<<endl;
        } 

    }
      
     
    else if( n== 5){
      cout << "\nHas salido del programa, gracias por ocupar NetlfixTec" << endl;
      menu = false;
    } 
    
    else {
      cout << "Ingrese una opción correcta"<<endl;

    }
  }
  
}