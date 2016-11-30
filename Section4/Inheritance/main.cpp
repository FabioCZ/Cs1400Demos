#include <iostream>

class Canine
{
public:
    Canine(std::string n, int a, bool good)
    {
        name = n;
        age = a;
        goodBoy = good;
    }

    std::string getName() { return name;}
    int getAge() { return age;}
    bool isGoodBoy() { return goodBoy; }
protected:
    std::string name;
    int age;
    bool goodBoy;
};

class Pupper : public Canine
{
public:
    Pupper(std::string n, int a, bool good, bool rare) : Canine(n,a,good)
    {
        rarePupper = rarePupper;
    }


protected:
    bool rarePupper;
};

int main()
{
    Pupper a("fido",3,true,true);
    std::cout << a.getName() << std::endl;
    return 0;
}