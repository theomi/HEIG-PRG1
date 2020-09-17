#include <iostream>
#include <string>
using namespace std;


int main() {
    // Variables initialization
    string prenom;
    getline(cin, prenom);
    int age;
    int annee_naissance;

    // Asks the user for its first name and stores it into a variable
    cout << "Entrez votre prénom : ";
    cin >> prenom;

    // Asks the user for its age and stores it into a variable
    cout << "Entrez votre âge : ";
    cin >> age;

    // Calculates the birth year of the user
    annee_naissance = 2020 - age;

    // Returns the user first name, age and birth date
    cout << "Bonjour " + prenom << endl;
    cout << "Vous avez " + to_string(age) + " ans et vous êtes né(e) en " + to_string(annee_naissance) << endl;
    return 0;
}
