#include "Car.h"
#include <iostream>

void main () {
    Cars::Car car1;
    Cars::Car car2("Audi", 125, 2200);
    Cars::Lorry lorry("Kamaz", 200, 5000, 200);

    std::cout << " == Show count == " << std::endl;
    std::cout << "Count from car = " << car1.count() << std::endl;
    std::cout << "Count from lorry = " << lorry.count() << std::endl;
    std::cout << "Count from friend function = " << Cars::f_count() << std::endl;

    std::cout << " == Show cars == " << std::endl;
    std::cout << car1 << std::endl;
    std::cout << car2 << std::endl;
    std::cout << lorry << std::endl;

    std::cout << " == Show count, car2 will not be used any more == " << std::endl;
    std::cout << "Count from car = " << car1.count() << std::endl;
    std::cout << "Count from lorry = " << lorry.count() << std::endl;
    std::cout << "Count from friend function = " << Cars::f_count() << std::endl;

    {
        Cars::Car car3("BMW", 220, 2300);
        std::cout << "Count from block, car3 exists = " << car3.count() << std::endl;
    }
    std::cout << "Count from car = " << car1.count() << std::endl;
}