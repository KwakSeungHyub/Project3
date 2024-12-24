#include <iostream>
#include <string>

using namespace std;

// 기본 Animal Class
class Animal {
public:
    // 가상 함수 makeSound 선언
    virtual void makeSound() const = 0;

    // 가상 소멸자
    virtual ~Animal() {}
};

// 파생 클래스: Dog
class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "멍멍" << endl;
    }
};

// 파생 클래스: Cat
class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "야옹" << endl;
    }
};
// 파생 클래스: Cow
class Cow : public Animal {
public:
    void makeSound() const override {
        cout << "음메" << endl;
    }
};
int main() {
    // Creating objects of derived classes
    Animal* dog = new Dog();
    Animal* cat = new Cat();
    Animal* cow = new Cow();

    // 클래스 포인터로 Animal 클래스의 파생클래스를 통해 makeSound() 함수 호출 
    dog->makeSound(); // Output: 월월
    cat->makeSound(); // Output: 야옹
    cow->makeSound(); // Output: 음메

    // Cleaning up
    delete dog;
    delete cat;
    delete cow;

    return 0;
}
