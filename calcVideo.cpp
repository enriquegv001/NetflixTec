#include <iostream>
#include "calcVideo.h"
using namespace std;

// funciones clase base---------------------------------------
void Video::regresaAtributos(){
    cout << "\nTipo: " << tipo << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Genero: " << genero << endl;
    cout << "Calificación: " << calificacion << endl;
    cout << "Año de lanzamiento: " << anioLanzamiento << endl;
};


void Video::setCalif(int _calificacion){
  if (_calificacion<0){
    calificacion=0;
  }
  else if (_calificacion>5){
    calificacion=5;
  }
  else{
    calificacion =_calificacion;
  }
  
};

string Video::getNombre(){
  return nombre;
}

int Video::getCalif(){
  return calificacion;
}

void Video::obtener(int _num){
  cout <<0<<endl;
}




// funciones clase deriviada1----------------------------------
void Pelicula::obtener(int _nominaciones){
  nominaciones = _nominaciones; 
};

string Pelicula::getNombre(){
  return nombre;
}

int Pelicula::getCalif(){
  return calificacion;
}


void Pelicula::regresaAtributos(){
    Video::regresaAtributos();
    cout << "Duración: " << duracion << " min" << endl;
    cout << "Nominaciones: " << nominaciones << endl;
};

void Serie::obtener(int _cantTemporadas){
  cantidadTemporadas = _cantTemporadas; 
};

void Serie::regresaAtributos(){
    Video::regresaAtributos();
    cout << "Duración: " << duracion << " min por cap" <<endl;
    cout << "Cantidad de temporadas: " << cantidadTemporadas << endl;
};

string Serie::getNombre(){
  return nombre;
}

int Serie::getCalif(){
  return calificacion;
}

