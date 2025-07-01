#include<iostream>
using namespace std;

class Car{
public:
    string brand;
    string color;
    int weight;
    string model;
void drive(){
}
};

int main(){
    Car car;
    car.brand = "mercedes benz";
    car.color = "blue";
    car.weight = 2200;
    car.model = "benz suv";

    cout << car.brand<< "\n";
    cout << car.color<< "\n";
    cout << car.weight<< "\n";
    cout << car.model;

return 0;
}
