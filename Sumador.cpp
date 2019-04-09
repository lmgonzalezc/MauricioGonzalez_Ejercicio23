
#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
 
void ejemplo_lee(string filename);
void ejemplo_escribe(string filename);

int main () {
  string filename1;
  string filename2;
  filename1 = "valores_x.txt";
  filename2 = "valores_y.txt";
  leer(filename);
  return 0;
}
void leer(string filename){
  ifstream infile; 
  string line;

  infile.open(filename); 
  
  cout << "Leyendo de " << filename << endl; 
  getline(infile, line);
  while(infile){
    cout << line << endl;
    getline(infile, line); 
  char arreglo[strlen(line)]=line.toCharArray();
  }

  infile.close();
}

