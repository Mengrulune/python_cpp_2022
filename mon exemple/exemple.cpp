#include <iostream>
#include <pybind11/pybind11.h>

class Test{
public:
    Test( int i, int j )
    :mI(i),mJ(j){

    }

    void Print(){
        std::cout <<"i= " << mI <<" j= " <<mJ << std::endl;
    }
private:
    int mI;
    int mJ;
};

PYBIND11_MODULE( py2cpp, m ){
    m.doc() = "mon example";
    pybind11::class_<Test>(m, "Test" )
        .def( pybind11::init< int , int >() )
        .def( "print", &Test::Print );
}
