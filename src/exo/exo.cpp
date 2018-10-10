//
//  exo.cpp
//  
//
//  Created by Mehdi AKOUNAD on 10/10/2018.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;


class etu {
public:

    string nom;
    int note;
};

int main()
{
    string compare;
    vector<etu> etudiant;
    string tmp_name;
    int tmp_note;
    
    for (int i=1; i<6; i++)
        {
            cout << "Entrez le nom d'un étudiant" << endl;
            cin >> tmp_name;
            cout << "Entrez la note de l'étudiant" << endl;
            cin >> tmp_note;
            etudiant.push_back(etu());
            etudiant[i].nom = tmp_name;
            etudiant[i].note = tmp_note;
        }
    
    cout<< "la liste des etudiants"<< endl;
    
    for (int  i=1; i<=etudiant.size(); i++)
                {
                    cout << etudiant[i].nom << "        " << etudiant[i].note << endl;
                }

    for (int i=1; i<=etudiant.size(); i++ )
{
                    cout << "Entrez le nom d'un étudiant" << endl;
                    string compare;
                    cin >> compare;
        
                }
        if (compare == etudiant[i].nom){
                    cout << "l'étudiant" << etudiant[i].nom << "existe" << endl;
                    cout << "Note" << etudiant[i].note << endl;
                }
        
        else{
                        cout << "aucun étudiant de ce nom existe" << endl;
                    }
        
        ofstream fichier_notes;
        fichier_notes.open("file.txt");
        fichier_notes<<"EPSI";
        fichier_notes.close();
    
    
    
    
    

    return 0;
}
