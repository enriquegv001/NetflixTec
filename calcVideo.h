#include <iostream>
using namespace std;

class Video{ 
// Mimebros de clase
  protected:
    string tipo;
    string nombre;
    string genero;
    int calificacion;
    int anioLanzamiento;
    int duracion;
    

  public: // Crear dos constructores, uno en el que con calificación y otro sin ella
    Video (string _tipo, string _nombre, string _genero, int _calificacion, int _anioLanzamiento, int _duracion){
      tipo = _tipo;
      nombre = _nombre;
      genero = _genero;
      calificacion = _calificacion;
      anioLanzamiento = _anioLanzamiento;
      duracion = _duracion;
    }


  // funciones como métodos de clase
    virtual void regresaAtributos();
    virtual string getNombre();
    virtual int getCalif();
    virtual void obtener(int);
    void setCalif(int);
};

//clases heredadas++++++++++++++++++++++++++++++++++++
class Pelicula : public Video{
  public:
    
    Pelicula(string _tipo, string _nombre, string _genero, int _calificacion, int _anioLanzamiento, int _duracion):Video( _tipo, _nombre, _genero, _calificacion, _anioLanzamiento, _duracion){};

    void obtener(int);
    void regresaAtributos();
    void setCalif(int);
    string getNombre();
    int getCalif();
  
  private:
    int nominaciones;
};

class Serie : public Video{
  public:
    Serie( string _tipo, string _nombre, string _genero, int _calificacion, int _anioLanzamiento, int _duracion):Video(_tipo, _nombre, _genero, _calificacion, _anioLanzamiento, _duracion){

    };
    void obtener(int);
    void regresaAtributos();
    string getNombre();
    int getCalif();
    
  private:
    int cantidadTemporadas;
};