#include <iostream>
using namespace std;


class Product {
public:
    Product() {
        cout << "Bike is Ready" << endl;
    }
};


class Builder {
public:
    virtual void BuildEngine() = 0;
    virtual void BuildChasis() = 0;
    virtual void BuildTyre() = 0;
    virtual Product* GetProduct() = 0;
    virtual ~Builder() { }
};

class ConcreteBuilder :public Builder {
public:
    void BuildEngine() {
        cout << "Engine is build" << endl;
    }

    void BuildChasis() {
        cout << "Chasis is build" << endl;
    }

    void BuildTyre() {
        cout << "Tyre is build" << endl;
    }

    Product* GetProduct() {
        return new Product();
    }
};


class Director {
public:
    Director(Builder* pBuilder) {
        _builer = pBuilder;
    }

    void Construct() {
        _builer->BuildEngine();
        _builer->BuildChasis();
        _builer->BuildTyre();
    }

private:
    Builder *_builer;
};


int main() {
    auto builder = new ConcreteBuilder();
    auto director = new Director(builder);
    director->Construct();
    auto product = builder->GetProduct();

    delete product;
    delete builder;
    delete director;

    return 0;
}