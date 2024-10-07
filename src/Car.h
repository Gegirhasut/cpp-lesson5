#pragma once
#include <string>
#include <iostream>

namespace Cars {
    class Car {
        private:
            std::string _brand;
            int _cylinders;
            int _power;
            static int& getCount() {
                // переменная для всех классов Car
                static int theCount = 0;
                return theCount;
            }
        public:
            Car():_brand("unknown") { Car::getCount()++; std::cout << " ()Constructor called" << std::endl; };
            Car(std::string brand, int cylinders, int power): _brand(brand), _cylinders(cylinders), _power(power) { Car::getCount()++; std::cout << "()Constructor called" << std::endl; };
            ~Car() { Car::getCount()--; std::cout << " ~Destructor " << this->_brand << " calles" << std::endl; };
            friend std::ostream& operator << (std::ostream &out, const Car &car);
            int count() {
                return getCount();
            }
            friend int f_count();
    };

    class Lorry: public Car {
        private:
            int _load;
        public:
            // В конструкторе базового класса вызовется count++, поэтому тут инкремент делать не нужно
            Lorry(std::string brand, int cylinders, int power, int load): _load(load), Car(brand, cylinders, power){};
            friend std::ostream& operator << (std::ostream &out, const Lorry &car);
    };
}