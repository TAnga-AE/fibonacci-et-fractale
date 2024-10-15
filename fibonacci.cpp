#include <iostream>
#include <string>

using namespace std;


int main(int argc, char**argv)
 {
    unsigned int num, first=0, second=1, next;

    std::cout<<"Entrez le numero du terme a calculer: \n ";

    std::cin >> num ;

    std::cout<<"la suite de fibonacci pour le numero "  <<  num  <<  " est : \n";

    for(int i=0; i<num; i++)
    {
        std::cout<< first;
        next = first+second;
        first = second;
        second = next;
        
    
    }
    
}
