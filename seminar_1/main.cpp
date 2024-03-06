#include <iostream>

std::string printName() {
    std::string firstName, lastName;
    std::cout << "Enter your first name: ";
    std::cin >> firstName;

    std::cout << "Enter your last name: ";
    std::cin >> lastName;

    int letterCount = firstName.length() + lastName.length();

    return "Hello " + firstName + ' ' + lastName + " your name has: " + std::to_string(letterCount) + " characters";
}

struct Customer {
    int number, zipCode;
    std::string name, address;
};

struct Matrix {
    int matrix[3][3];
};

Matrix readMatrix() {
    Matrix M;
    for (int line = 0; line < 3; ++line) {
        for(int column = 0; column < 3; ++column) {
            std::cin >> M.matrix[line][column];
        }
    }

    return M;
}

/*    0 1 2
 *
 * 0  0 0 0
 * 1  0 0 0
 * 2  0 0 0
 *
 *
 */

int detMatrix(Matrix M) {
    int det = 0;

    for(int line = 0; line < 3; ++line) {
        for(int column = 0; column < 3; ++column) {
            if (line == column) {
                det += M.matrix[line][column];
            }

            if (line + column == 2) {
                det -= M.matrix[line][column];
            }
        }
    }

    return det;
}

int main()
{
    std::vector<Customer> customers;

    Customer cust1;
    cust1.name = "Darius";
    cust1.address = "Cluj-Napoca";
    cust1.number = 213123;
    cust1.zipCode = 12002;
    customers.push_back(cust1);

    std::cout << "The name of the first customer is: " + customers.at(0).name;
}
