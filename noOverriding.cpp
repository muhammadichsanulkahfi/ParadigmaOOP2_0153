#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalan() {
        cout << "Hallo saya Function dari base class";
    }
};
class derivedClass : public  {
public:
    virtual void perkenalan() {
        cout << "Hallo saya Function dari base class";
    }
};

int main() {
    derivedClass a;
    a.perkenalan();

    return 0;
}
