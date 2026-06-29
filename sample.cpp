#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
using namespace std;
void toLowerCase(char *str) {
    for(int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char choice;
    char symptom[50];
    char answer[10];
    
    cout<<"Welcome to Disease Checker!\n";
    cout<<"1. Enter symptoms\n";
    cout<<"2. Enter disease name\n";
    cout<<"Enter your choice (1 or 2): ";
    cin>>" %c", &choice;
    
    if(choice == '1') {
        printf("\nSelect your symptoms:\n");
        printf("- fever\n");
        printf("- headache\n");
        printf("- cough\n");
        printf("- rash\n");
        
        printf("Enter your main symptom: ");
        scanf("%s", symptom);
        toLowerCase(symptom);
        
        if(strcmp(symptom, "fever") == 0) {
            printf("Do you also have a cough? (yes/no): ");
            scanf("%s", answer);
            toLowerCase(answer);
            
            if(strcmp(answer, "yes") == 0) {
                printf("\nPossible disease: Flu\n");
                printf("Treatment: Rest, drink fluids, take fever reducer\n");
            } else {
                printf("\nPossible disease: Viral Fever\n");
                printf("Treatment: Rest and paracetamol\n");
            }
        }
        else if(strcmp(symptom, "headache") == 0) {
            printf("Is it recurring? (yes/no): ");
            scanf("%s", answer);
            toLowerCase(answer);
            
            if(strcmp(answer, "yes") == 0) {
                printf("\nPossible disease: Migraine\n");
                printf("Treatment: Rest in dark room, migraine medication\n");
            } else {
                printf("\nPossible disease: Tension Headache\n");
                printf("Treatment: Rest and pain relievers\n");
            }
        }
        else if(strcmp(symptom, "cough") == 0) {
            printf("Is it dry? (yes/no): ");
            scanf("%s", answer);
            toLowerCase(answer);
            
            if(strcmp(answer, "yes") == 0) {
                printf("\nPossible disease: Common Cold\n");
                printf("Treatment: Rest, warm fluids, throat lozenges\n");
            } else {
                printf("\nPossible disease: Bronchitis\n");
                printf("Treatment: Rest, humidifier, cough medicine\n");
            }
        }
        else if(strcmp(symptom, "rash") == 0) {
            printf("Is it itchy? (yes/no): ");
            scanf("%s", answer);
            toLowerCase(answer);
            
            if(strcmp(answer, "yes") == 0) {
                printf("\nPossible disease: Allergic Reaction\n");
                printf("Treatment: Antihistamines, avoid allergens\n");
            } else {
                printf("\nPossible disease: Heat Rash\n");
                printf("Treatment: Keep area cool and dry\n");
            }
        }
        else {
            printf("\nSymptom not recognized. Please consult a doctor.\n");
        }
    }
    else if(choice == '2') {
        printf("Enter disease name: ");
        scanf("%s", symptom);
        toLowerCase(symptom);
        
        if(strcmp(symptom, "flu") == 0) {
            printf("\nCommon symptoms: Fever, cough, body aches\n");
            printf("Treatment: Rest, fluids, fever reducer\n");
        }
        else if(strcmp(symptom, "migraine") == 0) {
            printf("\nCommon symptoms: Severe headache, sensitivity to light\n");
            printf("Treatment: Rest in dark room, migraine medication\n");
        }
        else if(strcmp(symptom, "cold") == 0) {
            printf("\nCommon symptoms: Cough, runny nose, sore throat\n");
            printf("Treatment: Rest, warm fluids, decongestants\n");
        }
        else if(strcmp(symptom, "allergy") == 0) {
            printf("\nCommon symptoms: Rash, itching, swelling\n");
            printf("Treatment: Antihistamines, avoid allergens\n");
        }
        else {
            printf("\nDisease not in database. Please consult a doctor.\n");
        }
    }
    else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }
    */
    return 0;
}