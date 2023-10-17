#include<iostream>
using namespace std;
class wall{
private:
double length;

public:
wall(){
length = 8.8;
cout<<"creating a wall"<<endl;
cout<<"Length ="<<length<<endl;


}
};

int main(){
  wall wall1;
  return 0;
}