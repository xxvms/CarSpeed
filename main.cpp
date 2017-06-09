#include <iostream>
class Vehicle
{
protected:
    int maxSpeed;
public:
//    virtual void Vehicle();
    virtual void Speed() = 0;
};

class Car : public Vehicle
{
private:
    std::string car {"This is car with max speed: "};
public:
    Car()
    {
        maxSpeed = 100;
    }
    void Speed()
    {
        std::cout << car << std::endl;
        std::cout << maxSpeed << std::endl;
    }
};
class Van : public Vehicle
{
private:
    std::string van {"I am Van I do brum brum at "};
public:
    Van()
    {
        maxSpeed = 50;
    }
    void Speed()
    {
        std::cout << van << std::endl;
        std::cout << maxSpeed << std::endl;
    }

};

int main() {

    Car car;
    Van van;
    // Vehicle vehicle; <- this is not going to vork as Vehicle is pure virtual function
    // vehicle.Speed(); <- same as above this class can not be instantiated

    car.Speed();
    van.Speed();


    system("pause");
    return 0;
}