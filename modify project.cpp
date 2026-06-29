#include <iostream>
#include <conio.h>
#include <algorithm>
#include <iomanip> // For alignment
//#include <window.h>
using namespace std;

// Function to convert string to lowercase
void toLowerCase(string &str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
}

// Center-align function
void printCentered(const string &text, int width = 50) {
    int padding = (width - text.length()) / 2;
    cout << string(padding, ' ') << text << endl;
}

int main() {
    char Choice;
    string symptom;
    string a;
    while (true) {
        std::system("cls"); // Clear screen for Windows (use "clear" for Linux/macOS)
        
        // Display main menu
        printCentered("========================================");
        printCentered("HOW CAN I ASSIST YOU ABOUT DISEASES?");
        printCentered("========================================");
        cout << "\n";
        cout << "1. ENTER YOUR DISEASE" << endl;
        cout << "2. ENTER YOUR SYMPTOMS" << endl;
        cout << "3. EXIT" << endl;
        cout << "\nENTER YOUR CHOICE (1, 2, OR 3): ";
        cin >> Choice;
        cin.ignore(); // Clear the input buffer

        if (Choice == '3') {
            std::system("cls");
            printCentered("Thank you for using the program. Goodbye!");
            break; // Exit the program
        }
        // work
        if (Choice == '2')
		 {
            std::system("cls");
            // Symptom selection menu
            printCentered("========================================");
            printCentered("Select Your Symptoms");
            printCentered("========================================");
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
            printCentered("========================================");
            printCentered(symptom);
            printCentered("========================================");
            cout << "\n";

            // Symptom-based results
            if (symptom == "fever")
			 {
                cout << "Diseases: Infection, flu, or viral fever." << endl;
                cout << "MEDICINE:" << endl;
                cout << "1. Paracetamol (Acetaminophen)" << endl;
                cout << "2. Ibuprofen" << endl;
                cout << "3. Antipyretics" << endl;
                cout << "DURATION: 1-3 days typically." << endl;
                cout << "FREQUENCY: Every 4-6 hours as needed." << endl;
            }
			 else if (symptom == "cough") 
			 {
                cout << "Diseases: Cold, throat infection, or allergies." << endl;
                cout << "MEDICINE:" << endl;
                cout << "1. Cough suppressants (Dextromethorphan)" << endl;
                cout << "2. Expectorants (Guaifenesin)" << endl;
                cout << "FREQUENCY: Every 4-6 hours as needed." << endl;
            }
			 else if (symptom == "headache")
			  {
                cout << "Diseases: Stress, migraine, or dehydration." << endl;
                cout << "MEDICINE:" << endl;
                cout << "1. Pain relievers (Ibuprofen, Acetaminophen)" << endl;
                cout << "DURATION: As needed for relief during an episode." << endl;
            }
			 else if (symptom == "stomach pain") 
			 {
                cout << "Diseases: Indigestion, gas, or ulcer." << endl;
                cout << "MEDICINE: Antacids, Probiotics." << endl;
            }
			 else if (symptom == "flu")
			  {
                cout << "Diseases: Influenza virus." << endl;
                cout << "MEDICINE: Antiviral medications (e.g., Oseltamivir)." << endl;
            }
			 else if (symptom == "vomiting")
			  {
                cout << "Diseases: Food poisoning, stomach infection." << endl;
                cout << "MEDICINE: Ondansetron, Domperidone." << endl;
            } 
			else if (symptom == "cold") 
			{
                cout << "Diseases: Viral infection." << endl;
                cout << "MEDICINE: Decongestants (Pseudoephedrine)." << endl;
            } 
			else if (symptom == "diarrhea")
			 {
                cout << "Diseases: Foodborne infection or contaminated water." << endl;
                cout << "MEDICINE: Oral rehydration salts (ORS)." << endl;
            }
			 else if (symptom == "body pain")
			 {
                cout << "Diseases: Muscle strain or general fatigue." << endl;
                cout << "MEDICINE: Ibuprofen (400 mg), Paracetamol (500 mg)." << endl;
            }
			 else
			  {
                cout << "Symptom not recognized. Please consult a doctor." << endl;
            }
               // diesaeses start
             if (Choice == '1')
        {
        	std::system("cls");
        	 printCentered("========================================");
        	 printCentered("ENTER YOUR DISEASE");
        	 printCentered("========================================");
             cin.ignore();
			 getline(cin,a); // getline support space between word of one variable at run time(cin)
       for(int i=0; i<a.size(); i++)
       {
       	a.at(i)=toupper(a.at(i));
	   }
	   std::system("cls");
            printCentered("========================================");
            printCentered(a);
            printCentered("========================================");
            cout << "\n";
    // 1
    if (a == "ASTHMA") // Proper comparison with the input string
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Shortness of breath" << endl;
        cout << "2. Wheezing" << endl;
        cout << "3. Chest tightness" << endl;
        cout << "4. Coughing, especially at night" << endl;
        cout << "5. Fatigue" << endl;
        cout << "6. Difficulty sleeping" << endl;
        cout << "7. Increased mucus production" << endl;
        cout << "8. Rapid breathing" << endl;
        cout << "9. Swelling in the airways" << endl;
        cout << "10. Decreased peak flow readings" << endl;
        
        cout << "CAUSES:" << endl;
        cout << "1. Genetic predisposition" << endl;
        cout << "2. Exposure to allergens" << endl;
        cout << "3. Viral infections" << endl;
        cout << "4. Air pollution" << endl;
        cout << "5. Smoking" << endl;
        cout << "6. Occupational exposures" << endl;
        cout << "7. Stress" << endl;
        cout << "8. Physical activity" << endl;
        cout << "9. Weather changes" << endl;
        cout << "10. Chemical irritants" << endl;
        
        cout << "MEDICINE:" << endl;
        cout << "1. Inhaled corticosteroids (e.g., Fluticasone)" << endl;
        cout << "3. Leukotriene modifiers (e.g., Montelukast)" << endl;
        cout << "4. Combination inhalers (e.g., Advair)" << endl;
        cout << "5. Theophylline" << endl;
        cout << "6. Biologics (e.g., Omalizumab)" << endl;
        cout << "7. Antihistamines" << endl;
        cout << "8. Epinephrine (for emergencies)" << endl;
        cout << "9. Oral steroids (e.g., Prednisone)" << endl;
        cout << "10. Cromolyn sodium" << endl;
        
        cout << "DURATION OF DOSE" << endl;
        cout << "Depends on the medication (e.g., inhaled corticosteroids are often taken daily)." << endl;
        
        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Inhalers (2 times/day)" << endl;
        cout << "2. Oral steroids (short-term bursts)" << endl;
        cout << "3. Biologics (once a month)" << endl;
    }
            cout << "\nPress any key to return to the main menu...";
             // Wait for user input
        } else {
            cout << "Invalid choice. Try again." << endl;
            getch ();
        }
    }

    return 0;
}
}
