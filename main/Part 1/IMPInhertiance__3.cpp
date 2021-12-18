#include <iostream>
using namespace std;

class base
{

protected:
    int a = 8;

private:
    int b = 9;

public:
    int c = 10;

    int geta()
    {

        return a;
    }

    int getb()
    {

        return b;
    }
};

class derived : private base
{

public:
    int getc()
    {

        return c;
    }

    int getaa()
    {

        return geta();
    }

    int getbb()
    {

        return getb();
    }

    void display()
    {

        cout << "The value of a is : " << geta() << endl; //the private can be taken in the functions in public
        cout << "The value of b is : " << getb() << endl;
        cout << "The value of c is : " << getc() << endl;
    }
};

int main()
{

    derived d1;

    d1.display();

    cout << "The value of a is : " << d1.getaa() << endl;
    cout << "The value of b is : " << d1.getbb() << endl;
    cout << "The value of c is : " << d1.getc() << endl;

    return 0;
}
