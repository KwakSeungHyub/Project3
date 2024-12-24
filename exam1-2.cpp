#include <iostream>
#include <string>

using namespace std;

// Base class
class Animal {
public:
    // ���� �Լ� makeSound ����
    virtual void makeSound() const = 0;

    // ���� �Ҹ���
    virtual ~Animal() {}
};

// �Ļ� Ŭ����: Dog
class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "�۸�" << endl;
    }
};

// �Ļ� Ŭ����: Cat
class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "�߿�" << endl;
    }
};
// �Ļ� Ŭ����: Cow
class Cow : public Animal {
public:
    void makeSound() const override {
        cout << "����" << endl;
    }
};
int main() {
    // Creating objects of derived classes
    Animal* dog = new Dog();
    Animal* cat = new Cat();
    Animal* cow = new Cow();

    // Ŭ���� �����ͷ� Animal Ŭ������ �Ļ�Ŭ������ ���� makeSound() �Լ� ȣ�� 
    dog->makeSound(); // Output: ����
    cat->makeSound(); // Output: �߿�
    cow->makeSound(); // Output: ����

    // Cleaning up
    delete dog;
    delete cat;
    delete cow;

    return 0;
}