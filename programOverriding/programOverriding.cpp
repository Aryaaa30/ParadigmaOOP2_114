#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalan() final {
        cout << "Halo saya function dari base class";
    }
};

int main()
{
    std::cout << "Hello World!\n";
}


