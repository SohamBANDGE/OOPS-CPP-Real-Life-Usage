#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    double cost;
    int quantity;
    static int count;

public:
    Product(int i, string n, double c, int q) {
        id = i;
        name = n;
        cost = c;
        quantity = q;
        count++;
    }

    int getProductId() const {
        return id;
    }

    string getProductName() const {
        return name;
    }

    double getProductPrice() const {
        return cost;
    }

    void changeStock(int q) {
        quantity = q;
    }

    static int totalItems() {
        return count;
    }

    void showProduct() const {
        cout << "Product ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Price: Rs. " << cost << endl;
        cout << "Available Stock: " << quantity << endl;
        cout << "------------------------" << endl;
    }

    ~Product() {
        count--;
    }
};

int Product::count = 0;

int main() {
    Product item1(201, "Monitor", 8500, 20);
    Product item2(202, "Webcam", 1800, 40);
    Product item3(203, "Headset", 950, 60);

    cout << "===== PRODUCT DETAILS =====" << endl;

    item1.showProduct();
    item2.showProduct();
    item3.showProduct();

    cout << "Total Products: "
         << Product::totalItems() << endl;

    return 0;
}