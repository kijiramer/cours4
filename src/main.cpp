//
//  main.cpp
//  
//
//  Created by Mehdi AKOUNAD on 10/10/2018.
//

#include "main.hpp"
#include <vector>
#include <iostream>

using namespace std;


int main ()
{
    vector<int> tab(3);
    
    tab[0]=3;
    tab[1]=4;
    tab[2]=5;
    
    tab.push_back(100);
    
    cout << tab[0] << " " << tab[1] << " " << tab[2] << " " << tab[3] << endl;
    
  
    
    
     return 0;
}
