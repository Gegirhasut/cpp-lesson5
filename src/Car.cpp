#include "Car.h"
#include <iostream>

using namespace Cars;

std::ostream& Cars::operator<<(std::ostream &out, const Car &car)
{
    out << " == Brand:" << car._brand << " == " << std::endl;
    out << "Cylinders:" << car._cylinders << std::endl;
    out << "Power:" << car._power;
    return out;
}

int Cars::f_count()
{
    // Доступ к приватной функции получен
    return Car::getCount();
}

std::ostream& Cars::operator<<(std::ostream &out, const Lorry &car)
{
    // тут допустил ошибку преобразовав к (Car) а не ссылке, в выводе наблюдал вызов деструктора Car
    out << (Car&) car << std::endl;
    out << "Load capacity:" << car._load;

    return out;
}
