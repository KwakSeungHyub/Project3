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
    // ������ �迭 ����
    Animal* animals[] = { new Dog(), new Cat(), new Cow() };

    // �迭 ��ȸ�ϸ� �� ������ �Ҹ� ���
    for (Animal* animal : animals) {
        animal->makeSound();
    }

    // �޸� ����
    for (Animal* animal : animals) {
        delete animal;
    }

    return 0;
}
