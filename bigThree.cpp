
using namespace std;
#include <iostream>

class numArray {
  private: 
    int numElts;
    int *arr;


  public:
     
    numArray(int numEltsIn){
      arr = new int[numEltsIn];
      numElts = numEltsIn;
    }

    numArray(numArray & other){

    }

    void operator=(numArray& rhs) {

    }

    ~numArray(){
    }


    
};


