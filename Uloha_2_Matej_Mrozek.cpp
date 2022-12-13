#include <iostream>
#include <valarray>

using namespace std;

void print(const string& text) {
    cout << text << endl;
}

int main() {
    bool inputIncorrect;
    do {
        inputIncorrect = false;

        system("CLS");

        print("------------------------------\nSelect option\n\n1) Comparator\n2) Powers\n3) Powers using for\n4) Value Exchange\n5) Value Exchange (1 variable)\n6) Division check\n------------------------------");

        int option;
        cin >> option;
        switch (option) {
            case 1: {
                int x, y, z, biggest;
                print("Input first value: ");
                cin >> x;
                print("Input second value: ");
                cin >> y;
                print("Input third value: ");
                cin >> z;

                if (x > y && x > z) {
                    biggest = x;
                } else if (y > x && y > z) {
                    biggest = y;
                } else {
                    biggest = z;
                }

                print("Biggest value is " + to_string(biggest) + ".");

                break;
            }
            case 2: {
                int x, y;
                print("Input first value: ");
                cin >> x;
                print("Input second value: ");
                cin >> y;

                print(to_string(x) + " to the power of " + to_string(y) + " is " + to_string(pow(x, y)) + ".");

                break;
            }
            case 3: {
                int x, y, z;
                print("Input first value: ");
                cin >> x;
                print("Input second value: ");
                cin >> y;

                z = x;
                for (int i = 0; i < y; i++) {
                    z *= x;
                }

                print(to_string(x) + " to the power of " + to_string(y) + " is " + to_string(z) + ".");

                break;
            }
            case 4: {
                int x, y;
                print("Input first value: ");
                cin >> x;
                print("Input second value: ");
                cin >> y;

                int z = x;
                x = y;
                y = z;

                print(to_string(x) + " and " + to_string(y) + ".");

                break;
            }
            case 5: {
                int x, y;
                print("Input first value: ");
                cin >> x;
                print("Input second value: ");
                cin >> y;

                swap(x, y);

                print(to_string(x) + " and " + to_string(y) + ".");

                break;
            }
            case 6: {
                int x, y;
                print("Input first value: ");
                cin >> x;
                print("Input second value: ");
                cin >> y;

                print(to_string(x) + " is " + (x % y != 0 ? " not " : " ") + "dividable by " + to_string(y) + ".");

                break;
            }
            default: {
                inputIncorrect = true;

                print("Invalid input!");
            }
        }
    } while (inputIncorrect);

    return 0;
}
