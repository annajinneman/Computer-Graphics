// Author: Anna Jinneman
// Collaberator: William Roberts helped me with alot of the technical codeing stuff (Steps 6-9) 
// because I was really stuggling to get my code to work properly since I am new to C++ and have
// a Windows machine.

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

class Vector3 {
public:
    float x;
    float y;
    float z;

    // Constructor
    Vector3(float xx, float yy, float zz) : x(xx), y(yy), z(zz) {
        // nothing to do here as we've already initialized x, y, and z above
        //std::cout << "in Vector3 constructor" << std::endl;
    }

    Vector3()
    {
    //std::cout << "in Vector3 basic constructor" << std::endl;
}

    // Destructor - called when an object goes out of scope or is destroyed
    ~Vector3() {
           }

    float lengthSquared() {
        return x * x + y * y + z * z;
    }

    void printOut() {

    cout << x << " " << y << " " << z << endl;
    }
};

Vector3 add(Vector3 v, Vector3 v2) { // v and v2 are copies, so any changes to them in this function
    float sumX = v.x + v2.x;	// won't affect the originals
    float sumY = v.y + v2.y;
    float sumZ = v.z + v2.z;

    Vector3 value(sumX, sumY, sumZ);
    return value;                   

    std::ostream& operator<<(std::ostream& stream, const Vector3& v) {
    stream << v.x << ", " << v.y << ", " << v.z << endl;

    return stream;
}

Vector3 operator+(const Vector3& v, const Vector3& v2)
{
    float sumX = v.x + v2.x;
    float sumY = v.y + v2.y;
    float sumZ = v.z + v2.z;

    Vector3 value(sumX, sumY, sumZ);
    return value;
}


int main(int argc, char** argv) {
cout << *argv << " " << endl;


cout << "4.)" << endl;
cout << "What is your name?" << endl;
string name;
cin >> name;

cout << "hello " << name << endl;



    Vector3 a(1,2,3);
    Vector3 b(4,5,6);

    
    cout << "5.)" << endl;
    Vector3 c = add(a,b); 
                          
    c.printOut();


    cout << "6.)" << endl;
    std::cout << a+b << std::endl;

    cout << "7.)" << endl;
    Vector3 d(0,0,0);
    d.y = 5;
    cout << d << endl;


    cout << "8.)" << endl;
    Vector3* arVec = new Vector3[10];

    for (int i = 0; i < 10; ++i)
    {
    arVec[i].y = 5;
    cout << arVec[i] << endl;
    }

    delete [] arVec;


}