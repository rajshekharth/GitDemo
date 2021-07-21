//Shallow copying with the copy constructor

#include <iostream>

using namespace std;

class Shallow {
private:
    int *data;
    
public:
    void set_data_value(int d) {*data = d;}
    int get_data_value() {return *data};
    //Constructors
    Shallow(int d);
    
    //Copy constructor
    Shallow(const Shallow &source);
    
    //Destructor
    ~Shallow();
    
};

Shallow::Shallow(int d) {
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    : data{source.data} {
        cout << "Copy constructor called" << endl;
}

Shallow::~Shallow() {
    delete data;
    cout << "Destructor freeing data << endl;"
}
