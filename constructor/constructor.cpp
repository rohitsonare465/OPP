#include<iostream>
using namespace std;
class wall{
private:
double length;
double heigth;

public:
wall(double len,double hgt){
  length=len;
  heigth=hgt;
}
double calculatearea(){
  return length*length;
}
};

int main(){
  wall wall1(10.5, 82.3);
  cout<<"Area of wall1 :"<<wall1.calculatearea()<<endl;
  wall wall2(45.2,56.7);
  cout<<"Area of wall2 :"<<wall2.calculatearea();
  return 0;
}