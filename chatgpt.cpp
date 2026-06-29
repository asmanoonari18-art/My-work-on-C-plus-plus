#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Function to convert string to lowercase
void toLowerCase(string &str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
}

int main() {
    char Choice;
    string symptom;

    cout << "HOW CAN I ASSIST YOU ABOUT DISEASES ?" << endl;
    cout << "1. ENTER YOUR DISEASE" << endl;
    cout << "2. ENTER YOUR SYMPTOMS" << endl;
    cout << "ENTER YOUR CHOICE (1 OR 2): ";
    cin >> Choice;
    cin.ignore(); // Clear input buffer

    if (Choice == '1') {
        cout << "Select your Symptoms:" << endl;
        cout << " -- Fever --" << endl;
        cout << " -- Cough --" << endl;
        cout << " -- Flu --" << endl;
        cout << " -- Headache --" << endl;
        cout << " -- Body Pain --" << endl;
        cout << " -- Stomach Pain --" << endl;
        cout << " -- Vomiting --" << endl;
        cout << " -- Cold --" << endl;
        cout << " -- Diarrhea --" << endl;

        cout << "Enter Your Main Symptom: ";
        getline(cin, symptom); // Read the full line including spaces

        // Convert input to lowercase for case-insensitive comparison
        toLowerCase(symptom);

        if (symptom == "fever") {
            cout << "Causes: Infection, flu, or viral fever." << endl;
            cout << "Medicine: Paracetamol (500 mg)" << endl;
            cout << "Duration: Every 6 hours for 3 days." << endl;
        } else if (symptom == "cough") {
            cout << "Causes: Cold, throat infection, or allergies." << endl;
            cout << "Medicine: Cough syrup (Dextromethorphan)" << endl;
            cout << "Duration: 10 ml twice a day for 5 days." << endl;
        } else if (symptom == "headache") {
            cout << "Causes: Stress, migraine, or dehydration." << endl;
            cout << "Medicine: Ibuprofen (400 mg)" << endl;
            cout << "Duration: Once every 8 hours as needed." << endl;
        } else if (symptom == "stomach pain") {
            cout << "Causes: Indigestion, gas, or ulcer." << endl;
            cout << "Medicine: Antacid (Ranitidine)" << endl;
            cout << "Duration: 150 mg twice a day for 7 days." << endl;
        } else if (symptom == "flu") {
            cout << "Causes: Influenza virus." << endl;
            cout << "Medicine: Antiviral drugs (Oseltamivir)" << endl;
            cout << "Duration: 75 mg twice daily for 5 days." << endl;
        } else if (symptom == "vomiting") {
            cout << "Causes: Food poisoning or stomach infection." << endl;
            cout << "Medicine: Ondansetron (4 mg)" << endl;
            cout << "Duration: 3 times a day for 2 days." << endl;
        } else if (symptom == "cold") {
            cout << "Causes: Viral infection." << endl;
            cout << "Medicine: Decongestants (Pseudoephedrine)" << endl;
            cout << "Duration: Twice a day for 5 days." << endl;
        } else if (symptom == "diarrhea") {
            cout << "Causes: Foodborne infection or contaminated water." << endl;
            cout << "Medicine: Oral Rehydration Salts (ORS) and Loperamide." << endl;
            cout << "Duration: As needed, stay hydrated." << endl;
        } else {
            cout << "Symptom not recognized. Please check your input." << endl;
        }
    } else {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}
