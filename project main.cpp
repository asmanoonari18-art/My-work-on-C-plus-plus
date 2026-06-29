#include <iostream>
#include <conio.h>
#include <algorithm>
using namespace std;

void toLowerCase(string &str) 
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
}

int main ()
{
	char Choice;
	string symptom;
	string a;
    cout << "HOW CAN I ASSIST YOU ABOUT DISEASES ?" << endl;
    cout<<"1.ENTER YOUR DISEASE"<<endl;
    cout<<"2.ENTER YOUR SYMPTOMS"<<endl;
    cout<<"ENTER YOUR CHOICE 1 OR 2"<<endl;
    cin >> Choice;
    cin.ignore();
    
    
     if(Choice == '2')
 {
     cout<<"Select your Symptoms"<<endl;
	 cout<<" --Fever--"<<endl;
	 cout<<" --Cough--"<<endl;	
	 cout<<" --Flu--"<<endl;
	 cout<<" --Headache--"<<endl;
	 cout<<" --Body Pain--"<<endl;
	 cout<<" --Stomach Pain--"<<endl;
	 cout<<" --Vomiting--"<<endl;
	 cout<<" --cold--"<<endl;
	 cout<<" --Diarrhea--"<<endl;
	 
	 cout<<"Enter Your Main Symptom: "<<endl;
	    getline(cin,symptom);
	      toLowerCase(symptom);
	 // 1
	     if( symptom == "fever")
	   {
	     	cout << "Diseases: Infection, flu, or viral fever."<<endl;
	     	cout << "MEDICINE:" << endl;
            cout << "1. Paracetamol (Acetaminophen)" << endl;
            cout << "2. Ibuprofen" << endl;
            cout << "3. Antipyretics" << endl;

            cout << "DURATION OF DOSE" << endl;
            cout << "Depends on the underlying cause. Typically, fever lasts 1-3 days." << endl;

            cout << "DOSE FREQUENCY" << endl;
            cout << "1. Paracetamol/Ibuprofen every 4-6 hours as needed." << endl;
		 }
	 // 2
	 else if( symptom == "cough")
	 {
	 	cout << "Diseases: Cold, throat infection, or allergies.\n";
        cout << "MEDICINE:" << endl;
        cout << "1. Cough suppressants (Dextromethorphan)" << endl;
        cout << "2. Expectorants (Guaifenesin)" << endl;
        cout << "3. Inhalers (for asthma-related cough)" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Depends on the underlying condition. Usually taken until symptoms resolve." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Cough medicine every 4-6 hours as needed." << endl;
	 }
	 // 3
	  else if (symptom == "headache") 
	  {
        cout << "Diseases: Stress, migraine, or dehydration.\n";
        cout << "MEDICINE:" << endl;
        cout << "1. Pain relievers (Ibuprofen, Acetaminophen)" << endl;
        cout << "2. Triptans (for migraines)" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Usually as needed for relief during an episode." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Pain relievers as needed (x)." << endl;
    } 
    // 4
    else if (symptom == "stomach pain") 
	{
        cout << "Diseases: Indigestion, gas, or ulcer.\n";
        cout << "MEDICINE:" << endl;
        cout << "1. Antacids" << endl;
        cout << "2. Pain relievers (e.g., Antispasmodics)" << endl;
        cout << "3. Probiotics" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Usually short-term, until symptoms subside." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Antacids as needed after meals." << endl;
    }  
    // 5
    else if (symptom == "flu") 
	{
            cout << "Diseases: Influenza virus." << endl;
            cout << "MEDICINE:" << endl;
            cout << "1. Antiviral medications (e.g., Oseltamivir)" << endl;
            cout << "2. Pain relievers (Acetaminophen, Ibuprofen)" << endl;

            cout << "DURATION OF DOSE" << endl;
            cout << "Typically 5-7 days for mild cases." << endl;

            cout << "DOSE FREQUENCY" << endl;
            cout << "1. Antiviral medication every 12 hours as prescribed." << endl;
        }
        //  6
         else if (symptom == "vomiting")
		  {
            cout <<"Diseases: Food poisoning, stomach infection, motion sickness, or pregnancy (morning sickness)." << endl;
            cout <<"MEDICINES"<<endl;
			cout << "Ondansetron (4 mg) - Antiemetic to control nausea and vomiting." << endl;
            cout << "Domperidone (10 mg) - Helps with stomach motility and reduces nausea."<<endl;
			cout <<"DURATION OF DOSE:"<<endl;
			cout << "Take Ondansetron 4 mg three times a day for 2-3 days, as needed."<<endl;
			cout << "Domperidone can be taken every 8 hours for 2 days, depending on the severity." << endl;
        } 
        // 7
		else if (symptom == "cold") 
		{
            cout << "Diseases: Viral infection." << endl;
            cout << "MEDICINE:" << endl;
            cout << "1. Decongestants (e.g., Pseudoephedrine)" << endl;
            cout << "2. Antihistamines (e.g., Loratadine)" << endl;
            cout << "3. Pain relievers (e.g., Acetaminophen, Ibuprofen)" << endl;

            cout << "DURATION OF DOSE" << endl;
            cout << "Usually resolves within 7-10 days." << endl;

            cout << "DOSE FREQUENCY" << endl;
            cout << "1. Decongestants every 4-6 hours as needed." << endl;
        }
        // 8
		 else if (symptom == "diarrhea") 
		 {
           cout << "Diseases: Foodborne infection or contaminated water." << endl;
           cout << "MEDICINES: " << endl;
           cout << "1. Oral rehydration salts (ORS)" << endl;
           cout << "2. Antibiotics for bacterial causes" << endl;

           cout << "DURATION OF DOSE" << endl;
           cout << "Typically 3-5 days, or until symptoms resolve." << endl;

           cout << "DOSE FREQUENCY" << endl;
           cout << "1. Rehydration frequently; antibiotics as prescribed." << endl;
        }
        // 9
        else if ( symptom == "body pain")
        {
          cout<<"Diseases: Muscle strain, injury, arthritis, or general fatigue."<<endl;
          
          cout<<"MEDICINES"<<endl;
		  cout<<"Ibuprofen (400 mg) - Nonsteroidal Anti-Inflammatory Drug (NSAID) for pain relief."<<endl;
		  cout<<"Paracetamol (500 mg) - Effective for mild to moderate pain."<<endl;
		  cout<<"Topical analgesics like diclofenac gel for localized muscle or joint pain."<<endl;
		  
		  cout<<"DURATION OF DOSE"<<endl;
		  cout<<"Ibuprofen: Take 400 mg every 6-8 hours as needed, not exceeding 3 doses a day."<<endl;
		  cout<<"Paracetamol: Take 500 mg every 4-6 hours, maximum 4 doses per day."<<endl;
		  cout<<"Use topical analgesics 2-3 times a day for relief."<<endl;	
		}

        else {
            cout << "Symptom not recognized. Please consult a doctor." << endl;
        }
}
// diseases start
        else if (Choice == '1')
        {
        	cout<<"ENTER YOUR DISEASE"<<endl;
        	getline(cin,a); // getline support space between word of one variable at run time(cin)
       for(int i=0; i<a.size(); i++)
       {
       	a.at(i)=toupper(a.at(i));
	   }
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
    // 2
    else if (a == "ANXIETY") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "Excessive worry, restlessness, fatigue, difficulty concentrating, irritability, muscle tension." << endl;

        cout << "CAUSES: " << endl;
        cout << "Genetics, stress, brain chemistry imbalances, traumatic events." << endl;

        cout << "MEDICINES: " << endl;
        cout << "SSRIs (Sertraline, Fluoxetine), Benzodiazepines (Alprazolam), Buspirone." << endl;

        cout << "DOSE DURATION: " << endl;
        cout << "Long-term management or until symptoms improve." << endl;

        cout << "DOSE FREQUENCY: " << endl;
        cout << "Daily for SSRIs, as needed for Benzodiazepines." << endl;
    }
    // 3
    else if (a == "FEVER") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Elevated body temperature (above 100.4°F)" << endl;
        cout << "2. Chills" << endl;
        cout << "3. Sweating" << endl;
        cout << "4. Headache" << endl;
        cout << "5. Muscle aches" << endl;
        cout << "6. Fatigue" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Infection (bacterial, viral, etc.)" << endl;
        cout << "2. Inflammatory conditions" << endl;
        cout << "3. Heat exhaustion" << endl;
        cout << "4. Medications" << endl;
        cout << "5. Immune response" << endl;

        cout << "MEDICINE:" << endl;
        cout << "1. Paracetamol (Acetaminophen)" << endl;
        cout << "2. Ibuprofen" << endl;
        cout << "3. Antipyretics" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Depends on the underlying cause. Typically, fever lasts 1-3 days." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Paracetamol/Ibuprofen every 4-6 hours as needed." << endl;
    }
    //  4
    else if (a == "COUGH")
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Persistent dry or productive cough" << endl;
        cout << "2. Sore throat" << endl;
        cout << "3. Chest discomfort" << endl;
        cout << "4. Shortness of breath" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Respiratory infections (common cold, flu)" << endl;
        cout << "2. Asthma" << endl;
        cout << "3. Allergies" << endl;
        cout << "4. Smoking" << endl;
        cout << "5. GERD (Gastroesophageal reflux disease)" << endl;

        cout << "MEDICINE:" << endl;
        cout << "1. Cough suppressants (Dextromethorphan)" << endl;
        cout << "2. Expectorants (Guaifenesin)" << endl;
        cout << "3. Inhalers (for asthma-related cough)" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Depends on the underlying condition. Usually taken until symptoms resolve." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Cough medicine every 4-6 hours as needed." << endl;
    }
    //  5
    else if (a == "BACKPAIN")
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Pain in the lower or upper back" << endl;
        cout << "2. Muscle stiffness" << endl;
        cout << "3. Limited range of motion" << endl;
        cout << "4. Radiating pain in the legs (sciatica)" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Poor posture" << endl;
        cout << "2. Muscle strain or sprain" << endl;
        cout << "3. Herniated disc" << endl;
        cout << "4. Osteoarthritis" << endl;
        cout << "5. Sedentary lifestyle" << endl;

        cout << "MEDICINE:" << endl;
        cout << "1. Pain relievers (Ibuprofen, Acetaminophen)" << endl;
        cout << "2. Muscle relaxants" << endl;
        cout << "3. Physical therapy" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Depends on severity. Usually, pain relievers for short-term use." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Pain relievers 1-2 times/day or as needed." << endl;
    }
    //  6
    else if (a == "HEADACHE") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Pain in the head, often throbbing" << endl;
        cout << "2. Sensitivity to light or sound" << endl;
        cout << "3. Nausea" << endl;
        cout << "4. Fatigue" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Tension or stress" << endl;
        cout << "2. Migraines" << endl;
        cout << "3. Sinus infections" << endl;
        cout << "4. Eye strain" << endl;

        cout << "MEDICINE:" << endl;
        cout << "1. Pain relievers (Ibuprofen, Acetaminophen)" << endl;
        cout << "2. Triptans (for migraines)" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Usually as needed for relief during an episode." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Pain relievers as needed (usually 1-2 times/day)." << endl;
    }
    // 7
    else if (a == "STOMACHPAIN"||a == "STOMACH PAIN") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Abdominal discomfort" << endl;
        cout << "2. Bloating" << endl;
        cout << "3. Nausea" << endl;
        cout << "4. Diarrhea or constipation" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Indigestion" << endl;
        cout << "2. Gastritis" << endl;
        cout << "3. Food poisoning" << endl;
        cout << "4. Irritable Bowel Syndrome (IBS)" << endl;

        cout << "MEDICINE:" << endl;
        cout << "1. Antacids" << endl;
        cout << "2. Pain relievers (e.g., Antispasmodics)" << endl;
        cout << "3. Probiotics" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Usually short-term, until symptoms subside." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Antacids as needed after meals." << endl;
    }
    
    // 8
     else if (a == "COLD") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Runny or stuffy nose" << endl;
        cout << "2. Sneezing" << endl;
        cout << "3. Sore throat" << endl;
        cout << "4. Mild cough" << endl;
        cout << "5. Fatigue" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Viral infections (usually rhinovirus)" << endl;
        cout << "2. Exposure to cold weather or sudden temperature changes" << endl;

        cout << "MEDICINE:" << endl;
        cout << "1. Decongestants (e.g., Pseudoephedrine)" << endl;
        cout << "2. Antihistamines (e.g., Loratadine)" << endl;
        cout << "3. Pain relievers (e.g., Acetaminophen, Ibuprofen)" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Usually resolves within 7-10 days." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Decongestants every 4-6 hours as needed." << endl;
    }
    // 9
    else if (a == "FLU") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Fever" << endl;
        cout << "2. Body aches" << endl;
        cout << "3. Cough" << endl;
        cout << "4. Sore throat" << endl;
        cout << "5. Fatigue" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Influenza virus infection" << endl;
        cout << "2. Close contact with infected individuals" << endl;

        cout << "MEDICINE:" << endl;
        cout << "1. Antiviral medications (e.g., Oseltamivir)" << endl;
        cout << "2. Pain relievers (Acetaminophen, Ibuprofen)" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Typically 5-7 days for mild cases." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Antiviral medication every 12 hours as prescribed." << endl;
    }
    // 10
    else if (a == "DIABETES") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Frequent urination" << endl;
        cout << "2. Excessive thirst" << endl;
        cout << "3. Extreme hunger" << endl;
        cout << "4. Fatigue" << endl;
        cout << "5. Blurred vision" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Genetic predisposition" << endl;
        cout << "2. Poor diet, sedentary lifestyle" << endl;

        cout << "MEDICINE:" << endl;
        cout << "1. Insulin" << endl;
        cout << "2. Oral medications (e.g., Metformin)" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Life-long management." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Insulin 1-3 times/day, as prescribed." << endl;
    }
    // 11
    else if (a == "PNEUMONIA") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Cough (may produce mucus)" << endl;
        cout << "2. Shortness of breath" << endl;
        cout << "3. Chest pain" << endl;
        cout << "4. Fatigue" << endl;
        cout << "5. Fever" << endl;
        cout << "6. Sweating" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Bacterial, viral, or fungal infections" << endl;
        cout << "2. Aspiration of food or liquids into the lungs" << endl;
        cout << "3. Smoking" << endl;

        cout << "MEDICINE:" << endl;
        cout << "1. Antibiotics (for bacterial pneumonia)" << endl;
        cout << "2. Antivirals (for viral pneumonia)" << endl;
        cout << "3. Pain relievers (Acetaminophen, Ibuprofen)" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Typically 7-14 days, depending on the cause." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Antibiotics or antivirals as prescribed (usually 2-3 times a day)." << endl;
    }
    /// 12
    else if (a == "MIGRAINE") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Severe headache, often on one side" << endl;
        cout << "2. Nausea and vomiting" << endl;
        cout << "3. Sensitivity to light and sound" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Genetics" << endl;
        cout << "2. Hormonal changes" << endl;
        cout << "3. Environmental triggers (stress, food, weather)" << endl;

        cout << "MEDICINE:" << endl;
        cout << "1. Pain relievers (Acetaminophen, Ibuprofen)" << endl;
        cout << "2. Triptans (e.g., Sumatriptan)" << endl;
        cout << "3. Preventive medications (e.g., Beta-blockers, Antidepressants)" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Depends on the frequency of migraines. Preventive meds are long-term." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Pain relievers as needed." << endl;
        cout << "2. Preventive meds daily, if prescribed." << endl;
    }
    //13
    else if (a == "BLOOD PRESSURE" || a == "HYPERTENSION") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Headache" << endl;
        cout << "2. Dizziness" << endl;
        cout << "3. Shortness of breath" << endl;
        cout << "4. Chest pain" << endl;
        cout << "5. Vision problems" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Genetic factors" << endl;
        cout << "2. Obesity" << endl;
        cout << "3. High salt intake" << endl;
        cout << "4. Lack of physical activity" << endl;
        cout << "5. Alcohol consumption" << endl;

        cout << "MEDICINES: " << endl;
        cout << "1. Diuretics (e.g., Hydrochlorothiazide)" << endl;
        cout << "2. ACE inhibitors (e.g., Lisinopril)" << endl;
        cout << "3. Beta-blockers (e.g., Atenolol)" << endl;
        cout << "4. Calcium channel blockers" << endl;
        
        cout << "DURATION OF DOSE" << endl;
        cout << "Long-term management to control blood pressure." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Daily medications as prescribed." << endl;
    }
    //14
    else if (a == "KIDNEY STONE") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Severe pain in the back or side" << endl;
        cout << "2. Painful urination" << endl;
        cout << "3. Nausea and vomiting" << endl;
        cout << "4. Blood in urine" << endl;
        
        cout << "CAUSES: " << endl;
        cout << "1. Dehydration" << endl;
        cout << "2. High intake of salt, sugar, and animal protein" << endl;
        cout << "3. Obesity" << endl;
        cout << "4. Family history" << endl;

        cout << "MEDICINES: " << endl;
        cout << "1. Pain relievers (e.g., Ibuprofen)" << endl;
        cout << "2. Alpha blockers to relax muscles" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Depends on the size and location of the stone." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "As needed for pain relief, or prescribed medications daily." << endl;
    }
    //15
    else if (a == "SKIN ALLERGY") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Itchy, red rash" << endl;
        cout << "2. Swelling" << endl;
        cout << "3. Dry, flaky skin" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Pollen, dust, animal dander" << endl;
        cout << "2. Chemical irritants" << endl;
        cout << "3. Food allergens" << endl;

        cout << "MEDICINES: " << endl;
        cout << "1. Antihistamines (e.g., Cetirizine)" << endl;
        cout << "2. Topical corticosteroids" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "As needed for symptom relief." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Antihistamines daily for long-term management." << endl;
    }
    // 16
    else if (a == "OBESITY") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Excess body fat" << endl;
        cout << "2. Breathlessness" << endl;
        cout << "3. Joint pain" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Poor diet" << endl;
        cout << "2. Lack of physical activity" << endl;
        cout << "3. Genetic factors" << endl;

        cout << "MEDICINES: " << endl;
        cout << "1. Weight loss medications (e.g., Orlistat)" << endl;
        cout << "2. Appetite suppressants" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Long-term management alongside lifestyle changes." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Medications daily, with exercise and diet changes." << endl;
    }
    // 17
    else if (a == "COVID-19")
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Fever" << endl;
        cout << "2. Cough" << endl;
        cout << "3. Shortness of breath" << endl;
        cout << "4. Fatigue" << endl;
        cout << "5. Loss of taste/smell" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. SARS-CoV-2 virus" << endl;
        cout << "2. Person-to-person transmission" << endl;

        cout << "MEDICINES: " << endl;
        cout << "1. Antiviral drugs (e.g., Remdesivir)" << endl;
        cout << "2. Oxygen therapy (for severe cases)" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Depends on severity, but recovery is often 1-3 weeks." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Medications daily as prescribed." << endl;
    }
    //18
    else if (a == "POLIO") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Fever" << endl;
        cout << "2. Fatigue" << endl;
        cout << "3. Muscle weakness or paralysis" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Poliovirus infection" << endl;

        cout << "MEDICINES: " << endl;
        cout << "1. Supportive care for pain management" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Supportive care is long-term to manage symptoms." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. As needed for symptom management." << endl;
    }
    //19
    else if (a == "TYPHOID")
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. High fever" << endl;
        cout << "2. Weakness and fatigue" << endl;
        cout << "3. Stomach pain" << endl;
        cout << "4. Diarrhea or constipation" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Salmonella Typhi bacteria" << endl;

        cout << "MEDICINES: " << endl;
        cout << "1. Antibiotics (e.g., Ciprofloxacin)" << endl;
        cout << "2. Hydration therapy" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "7-14 days of antibiotic treatment." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Daily antibiotics as prescribed." << endl;
    }
    // 20
    else if (a == "DENGUE")
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. High fever" << endl;
        cout << "2. Severe headache" << endl;
        cout << "3. Pain behind the eyes" << endl;
        cout << "4. Joint and muscle pain" << endl;
        cout << "5. Skin rash" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Dengue virus transmitted by mosquitoes" << endl;

        cout << "MEDICINES: " << endl;
        cout << "1. Pain relievers (e.g., Paracetamol)" << endl;
        cout << "2. Hydration" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Symptom relief for 7-10 days." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. As needed for pain relief." << endl;
    }
    //21
    else if (a == "DIARRHEA") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Frequent loose stools" << endl;
        cout << "2. Stomach cramps" << endl;
        cout << "3. Dehydration" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Bacterial or viral infections" << endl;
        cout << "2. Contaminated food or water" << endl;

        cout << "MEDICINES: " << endl;
        cout << "1. Oral rehydration salts (ORS)" << endl;
        cout << "2. Antibiotics for bacterial causes" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Typically 3-5 days, or until symptoms resolve." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Rehydration frequently; antibiotics as prescribed." << endl;
    }
    //22
    else if (a == "FOOD POISONING") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Nausea and vomiting" << endl;
        cout << "2. Diarrhea" << endl;
        cout << "3. Stomach cramps" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Contaminated food or water" << endl;

        cout << "MEDICINES: " << endl;
        cout << "1. Anti-nausea medications (e.g., Ondansetron)" << endl;
        cout << "2. Hydration therapy" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Usually resolves in 1-2 days." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. As needed for symptom relief." << endl;
    }
    //23
    else if (a == "ULCER") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Burning stomach pain" << endl;
        cout << "2. Bloating" << endl;
        cout << "3. Nausea and vomiting" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Helicobacter pylori infection" << endl;
        cout << "2. Long-term use of NSAIDs" << endl;

        cout << "MEDICINES: " << endl;
        cout << "1. Proton pump inhibitors (e.g., Omeprazole)" << endl;
        cout << "2. Antibiotics for H. pylori" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Usually 2-4 weeks of treatment." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Daily as prescribed for pain relief." << endl;
    }
    //24
    else if (a == "THROAT") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Sore throat" << endl;
        cout << "2. Difficulty swallowing" << endl;
        cout << "3. Swollen lymph nodes" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Viral or bacterial infection" << endl;

        cout << "MEDICINES: " << endl;
        cout << "1. Pain relievers (e.g., Paracetamol)" << endl;
        cout << "2. Antibiotics for bacterial causes" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Typically 1-2 weeks depending on severity." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. As needed for symptom relief." << endl;
    }
    //25
    else if (a == "TONSILLITIS") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Sore throat" << endl;
        cout << "2. Difficulty swallowing" << endl;
        cout << "3. Swollen tonsils" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Viral or bacterial infections" << endl;

        cout << "MEDICINES: " << endl;
        cout << "1. Pain relievers (e.g., Ibuprofen)" << endl;
        cout << "2. Antibiotics (for bacterial infection)" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Typically 10-14 days of antibiotics." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. As prescribed by the doctor." << endl;
    }
    //26
    else if (a == "LUNGCANCER" || a== "LUNG CANCER") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Chronic cough" << endl;
        cout << "2. Shortness of breath" << endl;
        cout << "3. Chest pain" << endl;
        cout << "4. Weight loss" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Smoking" << endl;
        cout << "2. Exposure to radon, asbestos" << endl;
        cout << "3. Genetic factors" << endl;

        cout << "MEDICINES: " << endl;
        cout << "1. Chemotherapy" << endl;
        cout << "2. Targeted therapy" << endl;
        cout << "3. Immunotherapy" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Long-term treatment with chemotherapy and other medications." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. As prescribed based on treatment plan." << endl;
    }
    // 27
    else if (a == "DEFICIENCY OF WBC") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Frequent infections" << endl;
        cout << "2. Fatigue" << endl;
        cout << "3. Fever" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Bone marrow disorders" << endl;
        cout << "2. Autoimmune diseases" << endl;

        cout << "MEDICINES: " << endl;
        cout << "1. Growth factors (e.g., Filgrastim)" << endl;
        cout << "2. Antibiotics for infections" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Depends on the underlying cause and treatment." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. As prescribed based on treatment plan." << endl;
    }
    //28
    else if (a == "DEFICIENCY OF VITAMIN D") 
    {
        cout << "SYMPTOMS: " << endl;
        cout << "1. Bone pain and muscle weakness" << endl;
        cout << "2. Fatigue" << endl;
        cout << "3. Depression" << endl;

        cout << "CAUSES: " << endl;
        cout << "1. Lack of sunlight exposure" << endl;
        cout << "2. Poor dietary intake" << endl;

        cout << "MEDICINES: " << endl;
        cout << "1. Vitamin D supplements" << endl;
        cout << "2. Cod liver oil" << endl;

        cout << "DURATION OF DOSE" << endl;
        cout << "Until vitamin D levels are normalized." << endl;

        cout << "DOSE FREQUENCY" << endl;
        cout << "1. Daily supplements as prescribed." << endl;
    }
   //29
    else if ( a == "HEARTATTACK" || a == "HEART ATTACK" ) 
{
    cout << "SYMPTOMS: " << endl;
    cout << "1. Chest pain or discomfort" << endl;
    cout << "2. Shortness of breath" << endl;
    cout << "3. Lightheadedness, nausea, or vomiting" << endl;
    cout << "4. Pain in the back, neck, jaw, or stomach" << endl;
    cout << "5. Pain in one or both arms or shoulders" << endl;

    cout << "CAUSES: " << endl;
    cout << "1. Blockage of blood flow to the heart muscle" << endl;
    cout << "2. Coronary artery disease" << endl;
    cout << "3. High blood pressure" << endl;
    cout << "4. High cholesterol" << endl;
    cout << "5. Diabetes" << endl;
    cout << "6. Smoking" << endl;
    cout << "7. Family history of heart disease" << endl;
    cout << "8. Excessive alcohol consumption" << endl;

    cout << "MEDICINES: " << endl;
    cout << "1. Antiplatelet drugs (e.g., Aspirin)" << endl;
    cout << "2. Blood thinners (e.g., Heparin)" << endl;
    cout << "3. Beta-blockers (e.g., Metoprolol)" << endl;
    cout << "4. Statins (e.g., Atorvastatin)" << endl;
    cout << "5. ACE inhibitors (e.g., Lisinopril)" << endl;
    cout << "6. Nitroglycerin" << endl;

    cout << "DURATION OF DOSE" << endl;
    cout << "The duration depends on the treatment and recovery plan. Acute treatment may last a few weeks, while long-term treatment can last for months to years." << endl;

    cout << "DOSE FREQUENCY" << endl;
    cout << "1. Aspirin (once a day)" << endl;
    cout << "2. Statins and beta-blockers (once or twice a day, depending on doctor's instructions)" << endl;
    cout << "3. Nitroglycerin (as needed for chest pain)" << endl;
}

    
    else
    {
        cout << "SORRY! I don't have imformation about that disease" << endl;
    }
    
}
       return 0; 	
		}
	 
