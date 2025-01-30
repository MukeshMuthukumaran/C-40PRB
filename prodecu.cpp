#include <iostream>
#include <string>
using namespace std;

class Product {
    private:
        string productName;
        int productID;
        int quantity;

    public:
        // Setter functions to set the values
        void setProductName(string name) {
            productName = name;
        }

        void setProductID(int id) {
            productID = id;
        }

        void setQuantity(int qty) {
            if (qty >= 0) {
                quantity = qty;
            } else {
                cout << "Quantity cannot be negative!" << endl;
            }
        }

        // Getter functions to get the values
        string getProductName() {
            return productName;
        }

        int getProductID() {
            return productID;
        }

        int getQuantity() {
            return quantity;
        }

        // Function to display product details
        void displayProductDetails() {
            cout << "\nProduct Details: \n";
            cout << "Product Name: " << getProductName() << endl;
            cout << "Product ID: " << getProductID() << endl;
            cout << "Quantity: " << getQuantity() << endl;
        }
};

int main() {
    Product product;

    // Setting product details using setter functions
    product.setProductName("Laptop");
    product.setProductID(101);
    product.setQuantity(50);

    // Displaying product details using getter functions
    product.displayProductDetails();

    // Update product quantity using setter
    cout << "\nUpdating product quantity...\n";
    product.setQuantity(100);

    // Display updated details
    product.displayProductDetails();

    return 0;
}
