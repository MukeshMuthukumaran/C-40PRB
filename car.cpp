#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string carModel;
    int carId;
    string carBrand;
    double carPrice;

public:
    // Default Constructor
    Car() {
        carModel = "";
        carId = 0;
        carBrand = "";
        carPrice = 0.0;
    }

    // Parameterized Constructor
    Car(string model, int id, string brand, double price) {
        carModel = model;
        carId = id;
        carBrand = brand;
        carPrice = price;
    }

    // Getter methods
    int getCarId() const {
        return carId;
    }

    void displayCar() const {
        if (carId != 0) {
            cout << "\nCar ID: " << carId << endl;
            cout << "Brand: " << carBrand << endl;
            cout << "Model: " << carModel << endl;
            cout << "Price: $" << carPrice << endl;
            cout << "------------------------" << endl;
        }
    }
};

class Showroom {
private:
    static const int MAX_CARS = 100;
    Car cars[MAX_CARS];
    int carCount;
    string showroomName;

public:
    // Constructor for Showroom
    Showroom(string name) {
        showroomName = name;
        carCount = 0;
    }

    void addCar() {
        if (carCount >= MAX_CARS) {
            cout << "\nShowroom is full! Cannot add more cars." << endl;
            return;
        }

        string model, brand;
        int id;
        double price;

        cout << "\nEnter Car Details" << endl;
        cout << "Enter Car ID: ";
        cin >> id;
        cin.ignore();
        
        cout << "Enter Car Brand: ";
        getline(cin, brand);
        
        cout << "Enter Car Model: ";
        getline(cin, model);
        
        cout << "Enter Car Price: $";
        cin >> price;

        cars[carCount] = Car(model, id, brand, price);
        carCount++;
        cout << "\nCar added successfully to " << showroomName << "!" << endl;
    }

    void displayAllCars() {
        if (carCount == 0) {
            cout << "\nNo cars in " << showroomName << " showroom." << endl;
            return;
        }
        
        cout << "\n=== " << showroomName << " Showroom Inventory ===" << endl;
        for (int i = 0; i < carCount; i++) {
            cars[i].displayCar();
        }
    }

    void searchCar() {
        if (carCount == 0) {
            cout << "\nNo cars in showroom." << endl;
            return;
        }

        int searchId;
        cout << "\nEnter Car ID to search: ";
        cin >> searchId;

        for (int i = 0; i < carCount; i++) {
            if (cars[i].getCarId() == searchId) {
                cout << "\nCar found!" << endl;
                cars[i].displayCar();
                return;
            }
        }
        cout << "\nCar not found!" << endl;
    }
};

int main() {
    string showroomName;
    cout << "Enter Showroom Name: ";
    getline(cin, showroomName);
    
    Showroom showroom(showroomName);
    int choice;

    do {
        cout << "\n=== Car Showroom Management System ===" << endl;
        cout << "1. Add New Car" << endl;
        cout << "2. Display All Cars" << endl;
        cout << "3. Search Car" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                showroom.addCar();
                break;
            case 2:
                showroom.displayAllCars();
                break;
            case 3:
                showroom.searchCar();
                break;
            case 4:
                cout << "\nThank you for using Car Showroom Management System!" << endl;
                break;
            default:
                cout << "\nInvalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}