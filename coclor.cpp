#include <iostream>
#include <conio.h>
#include <algorithm>
#include <iomanip> // For alignment
#include <windows.h> // For changing text color (Windows-specific)

using namespace std;

// Function to convert string to lowercase
void toLowerCase(string &str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
}

// Function to set console text color
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Center-align function
void coutCentered(const string &text, int width = 50) {
    int padding = (width - text.length()) / 2;
    cout << string(padding, ' ') << text << endl;
}

int main() {
    char Choice;
    string symptom;
    while (true) {
        std::system("cls"); // Clear screen for Windows (use "clear" for Linux/macOS)
        
        // Display main menu
        setColor(14); // Yellow
        coutCentered("========================================");
        setColor(12); // red
        coutCentered("HOW CAN I ASSIST YOU ABOUT DISEASES?");
        setColor(14); // Yellow
        coutCentered("========================================");
        setColor(7); // White (default color)
        cout << "\n";
        cout << "1. ENTER YOUR DISEASE" << endl;
        cout << "2. ENTER YOUR SYMPTOMS" << endl;
        cout << "3. EXIT" << endl;
        cout << "\nENTER YOUR CHOICE (1, 2, OR 3): ";
        cin >> Choice;
        cin.ignore(); // Clear the input buffer

        if (Choice == '3') {
            std::system("cls");
            setColor(12); // Red
            coutCentered("Thank you for using the program. Goodbye!");
            setColor(7); // Reset to default
            break; // Exit the program
        }

        if (Choice == '2') {
            std::system("cls");
            // Symptom selection menu
            setColor(14); // Yellow
            coutCentered("========================================");
            setColor(11); // Cyan
            coutCentered("Select Your Symptoms");
            setColor(14); // Yellow
            coutCentered("========================================");
            setColor(7); // White (default color)
            cout << "\n";
            cout << " --Fever--" << endl;
            cout << " --Cough--" << endl;
            cout << " --Flu--" << endl;
            cout << " --Headache--" << endl;
            cout << " --Body Pain--" << endl;
            cout << " --Stomach Pain--" << endl;
            cout << " --Vomiting--" << endl;
            cout << " --Cold--" << endl;
            cout << " --Diarrhea--" << endl;
            cout << "\nEnter Your Main Symptom: ";
            getline(cin, symptom);
            toLowerCase(symptom);

            std::system("cls");
            setColor(14); // Yellow
            coutCentered("========================================");
            setColor(11); // Cyan
            coutCentered("RESULTS");
            setColor(14); // Yellow
            coutCentered("========================================");
            setColor(7); // Reset to default color
            cout << "\n";

            // Symptom-based results
            if (symptom == "fever") {
                setColor(10); // Green
                cout << "Diseases: Infection, flu, or viral fever." << endl;
                setColor(7);
                cout << "MEDICINE:" << endl;
                cout << "1. Paracetamol (Acetaminophen)" << endl;
                cout << "2. Ibuprofen" << endl;
                cout << "3. Antipyretics" << endl;
                cout << "DURATION: 1-3 days typically." << endl;
                cout << "FREQUENCY: Every 4-6 hours as needed." << endl;
            } else if (symptom == "cough") {
                setColor(10);
                cout << "Diseases: Cold, throat infection, or allergies." << endl;
                setColor(7);
                cout << "MEDICINE:" << endl;
                cout << "1. Cough suppressants (Dextromethorphan)" << endl;
                cout << "2. Expectorants (Guaifenesin)" << endl;
                cout << "FREQUENCY: Every 4-6 hours as needed." << endl;
            } else if (symptom == "headache") {
                setColor(10);
                cout << "Diseases: Stress, migraine, or dehydration." << endl;
                setColor(7);
                cout << "MEDICINE:" << endl;
                cout << "1. Pain relievers (Ibuprofen, Acetaminophen)" << endl;
                cout << "DURATION: As needed for relief during an episode." << endl;
            } else {
                setColor(12); // Red
                cout << "Symptom not recognized. Please consult a doctor." << endl;
                setColor(7);
            }

            cout << "\nPress any key to return to the main menu...";
            _getch(); // Wait for user input
        } else {
            setColor(12); // Red
            cout << "Invalid choice. Try again." << endl;
            setColor(7); // Reset to default
            _getch();
        }
    }

    return 0;
}
