#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function declarations
void writeToFile(const string& filename);  // Writes data to a file
void readFromFile(const string& filename); // Reads data from a file
void appendToFile(const string& filename); // Appends data to a file

int main() {
    string filename = "example.txt";  // File we'll be working with
    int choice;

    // Main menu loop
    do {
        cout << "1. Write to file\n2. Read from file\n3. Append to file\n4. Exit\nEnter your choice: ";
        cin >> choice;
        cin.ignore();  // Clear the input buffer

        switch (choice) {
            case 1:
                writeToFile(filename);  // Write data to the file
                break;
            case 2:
                readFromFile(filename);  // Read data from the file
                break;
            case 3:
                appendToFile(filename);  // Append data to the file
                break;
            case 4:
                cout << "Exiting program. Goodbye!" << endl;  // Exit the program
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;  // Handle invalid input
        }
    } while (choice != 4);  // Keep running until the user chooses to exit

    return 0;
}

// Writes data to a file
void writeToFile(const string& filename) {
    ofstream file(filename);  // Open the file for writing
    if (file.is_open()) {
        string data;
        cout << "Enter data to write to the file: ";
        getline(cin, data);  // Get input from the user
        file << data;  // Write the data to the file
        file.close();  // Close the file
        cout << "Data written to file successfully!" << endl;
    } else {
        cerr << "Unable to open file for writing." << endl;  // Error if file can't be opened
    }
}

// Reads data from a file
void readFromFile(const string& filename) {
    ifstream file(filename);  // Open the file for reading
    if (file.is_open()) {
        string line;
        cout << "File content:" << endl;
        while (getline(file, line)) {  // Read the file line by line
            cout << line << endl;  // Display each line
        }
        file.close();  // Close the file
    } else {
        cerr << "Unable to open file for reading." << endl;  // Error if file can't be opened
    }
}

// Appends data to a file
void appendToFile(const string& filename) {
    ofstream file(filename, ios::app);  // Open the file in append mode
    if (file.is_open()) {
        string data;
        cout << "Enter data to append to the file: ";
        getline(cin, data);  // Get input from the user
        file << endl << data;  // Append the data to the file
        file.close();  // Close the file
        cout << "Data appended to file successfully!" << endl;
    } else {
        cerr << "Unable to open file for appending." << endl;  // Error if file can't be opened
    }
}