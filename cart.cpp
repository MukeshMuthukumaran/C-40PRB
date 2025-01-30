#include <iostream>
using namespace std;

// Product class
class Product {
public:
    string name;
    double price;
    int quantity;

    Product() {} // Default constructor

    Product(string n, double p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    double getTotalPrice() {
        return price * quantity;
    }
};

// ShoppingCart class
class ShoppingCart {
private:
    Product cart[10]; // Fixed-size array for 10 products
    int count; // To keep track of the number of products

public:
    ShoppingCart() {
        count = 0;
    }

    void addProduct(string name, double price, int quantity) {
        if (count < 10) { // Check array limit
            cart[count] = Product(name, price, quantity);
            count++;
        } else {
            cout << "Cart is full!" << endl;
        }
    }

    void displayCart() {
        if (count == 0) {
            cout << "Cart is empty!" << endl;
            return;
        }

        cout << "\nShopping Cart:\n";
        double total = 0;
        for (int i = 0; i < count; i++) {
            cout << cart[i].name << " - " << cart[i].quantity 
                 << " x $" << cart[i].price << " = $" << cart[i].getTotalPrice() << endl;
            total += cart[i].getTotalPrice();
        }
        cout << "Total Price: $" << total << endl;
    }
};

// Main function
int main() {
    ShoppingCart cart;
    int choice;
    string name;
    double price;
    int quantity;

    do {
        cout << "\n1. Add Product\n2. View Cart\n3. Exit\nChoose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter product name: ";
                cin >> name;
                cout << "Enter price: ";
                cin >> price;
                cout << "Enter quantity: ";
                cin >> quantity;
                cart.addProduct(name, price, quantity);
                break;

            case 2:
                cart.displayCart();
                break;

            case 3:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
