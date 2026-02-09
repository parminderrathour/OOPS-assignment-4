//1. Rectangle class with three constructors

// #include <iostream>
// using namespace std;

// class Rectangle {
//     int length, breadth;

// public:
//     // (a) No-argument constructor
//     Rectangle() {
//         length = 0;
//         breadth = 0;
//     }

//     // (b) Two-parameter constructor
//     Rectangle(int l, int b) {
//         length = l;
//         breadth = b;
//     }

//     // (c) One-parameter constructor
//     Rectangle(int x) {
//         length = x;
//         breadth = x;
//     }

//     int area() {
//         return length * breadth;
//     }
// };

// int main() {
//     Rectangle r1;          // no parameter
//     Rectangle r2(5);       // one parameter
//     Rectangle r3(4, 6);    // two parameters

//     cout << "Area r1 = " << r1.area() << endl;
//     cout << "Area r2 = " << r2.area() << endl;
//     cout << "Area r3 = " << r3.area() << endl;

//     return 0;
// }



//2. Array of Objects + Default Arguments + Destructor
// #include <iostream>
// using namespace std;

// class Rectangle {
//     int length, breadth;

// public:
//     // Constructor with default arguments
//     Rectangle(int l = 0, int b = 0) {
//         length = l;
//         breadth = b;
//     }

//     int area() {
//         return length * breadth;
//     }

//     // Destructor
//     ~Rectangle() {
//         cout << "Destructor called\n";
//     }
// };

// int main() {
//     Rectangle r[3] = {
//         Rectangle(),
//         Rectangle(5),
//         Rectangle(4, 6)
//     };

//     for(int i = 0; i < 3; i++) {
//         cout << "Area = " << r[i].area() << endl;
//     }

//     return 0;
// }


//3.Destructor Verification
// #include <iostream>
// using namespace std;

// class Demo {
// public:
//     // Constructor
//     Demo() {
//         cout << "Constructor called" << endl;
//     }

//     // Destructor
//     ~Demo() {
//         cout << "Destructor called" << endl;
//     }
// };

// int main() {
//     Demo obj;   // Object creation
//     cout << "Inside main function" << endl;
//     return 0;   // Destructor automatically called here
// }



//Dynamic Memory Management
#include <iostream>
using namespace std;

class Sample {
    int x;
public:
    Sample(int a = 0) {
        x = a;
        cout << "Constructor called, x = " << x << endl;
    }

    void show() {
        cout << "Value of x = " << x << endl;
    }

    ~Sample() {
        cout << "Destructor called" << endl;
    }
};

int main() {

    // Dynamic integer
    int *iptr = new int(10);
    cout << "Integer value = " << *iptr << endl;
    delete iptr;

    cout << endl;

    // Dynamic float
    float *fptr = new float(3.5);
    cout << "Float value = " << *fptr << endl;
    delete fptr;

    cout << endl;

    // Dynamic integer array
    int *arr = new int[3];
    for(int i = 0; i < 3; i++)
        arr[i] = i + 1;

    cout << "Integer Array: ";
    for(int i = 0; i < 3; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete[] arr;

    cout << endl;

    // Dynamic float array
    float *farr = new float[2];
    farr[0] = 1.1;
    farr[1] = 2.2;

    cout << "Float Array: ";
    for(int i = 0; i < 2; i++)
        cout << farr[i] << " ";
    cout << endl;

    delete[] farr;

    cout << endl;

    // Dynamic class object
    Sample *obj = new Sample(5);
    obj->show();
    delete obj;

    cout << endl;

    // Dynamic array of objects
    Sample *objArr = new Sample[2];
    delete[] objArr;

    return 0;
}
