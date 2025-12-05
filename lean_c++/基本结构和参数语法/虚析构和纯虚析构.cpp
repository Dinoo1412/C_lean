#include <iostream>
using namespace std;

//虚析构主要是用来解决内存泄漏的问题   --如果父类的指针指向派生类的对象，如果父类的析构函数不是虚函数的话，就会调用不到子类的析构函数

class BaseA{
public:
    BaseA(){
    }
    ~BaseA(){
    }
};

class SonA: public BaseA{
public:
    SonA():value(NULL){};
    int* value;
};

int main(){
    BaseA *a =new SonA();
    delete a;

}