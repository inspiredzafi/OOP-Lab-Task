
#if !defined(TRACER)
#define TRACER

#include <iostream>
using namespace std;

class Tracer
{
public:
    string name;

    //
    Tracer(string n = "Guest") : name(n)
    {
        cout << "Created an object " << name << endl;
    }

    ~Tracer()
    {

        cout << "Destroyed the object with the name " << name << endl;
    }
};

#endif // TRACER