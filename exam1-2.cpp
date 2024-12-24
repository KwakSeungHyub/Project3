#include <iostream>
#include <string>

using namespace std;

// Base class
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
    // 포인터 배열 생성
    Animal* animals[] = { new Dog(), new Cat(), new Cow() };

    // 배열 순회하며 각 동물의 소리 출력
    for (Animal* animal : animals) {
        animal->makeSound();
    }

    // 메모리 해제
    for (Animal* animal : animals) {
        delete animal;
    }

    return 0;
}
