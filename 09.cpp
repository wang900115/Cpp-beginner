#include <iostream>

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        Car(std::string make,std::string model,int year,std::string color){
            this->make = make ;
            this->model = model;
            this->year = year;
            this->color =color;
        }

        void accelerate(){
            std::cout<<"you step on the gas!"<<'\n';
        }
        void brake(){
            std::cout<<"you step on the brakes!"<<'\n';
        }
};

int main(){
    Car car1("Frod","Mustang",2023,"silver");
    std::cout<<car1.make<<'\n';
    std::cout<<car1.model<<'\n';
    std::cout<<car1.year<<'\n';
    std::cout<<car1.color<<'\n';

    car1.accelerate();
    car1.brake();

    return 0;
}