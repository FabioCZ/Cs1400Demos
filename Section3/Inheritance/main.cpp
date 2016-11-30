#include <iostream>
#include <vector>
class Canine
{
public:
    Canine(std::string n, int a, bool good)
    {
        name = n;
        age = a;
        goodBoy = good;
    }

    std::string getName() {return name;}
    int getAge() { return age;}
    bool isAGoodBoy() {return goodBoy;}
private:
    std::string name;
    int age;
    bool goodBoy;
};

class Pupper : public Canine
{
public:
    Pupper(std::string n, int a, bool good, bool rare) : Canine(n,a,good)
    {
        rarePupper = rare;
    }
    bool isARarePupper() { return rarePupper;}
protected:
    bool rarePupper;
};

class Doggo : public Canine
{
public:
    Doggo(std::string n, int a, bool good) : Canine(n,a,good)
    {

    }

};

int main()
{
    Pupper a("Waldo", 4,true,true);
    std::cout << a.getName() << std::endl;
    std::cout << a.isARarePupper() << std::endl;
    return 0;
}