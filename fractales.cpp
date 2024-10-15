#include <iostream>
#include <string>



float add(int n, float zn, float z_r, float iz_i, float c_r) {

        zn = z_r*z_r - iz_i*iz_i + c_r;

        return zn;
    }

float mult(int n, float zni, float z_r, float iz_i, float ic_i) {

        zni =  2*iz_i*z_r + ic_i;

        return zni;
    }


float module(float mod, float z_r, float iz_i) {

        mod = z_r*z_r + iz_i*iz_i;
         return mod;

    }
    
int main(int argc, char**argv)
 {
    float mod, c_r, ic_i, z_r,  iz_i, z0, zn, zni, z;
    unsigned int n = 0;


std::cout <<"Entrer n :";
std::cin >> n;
/* std::cout<<"Entrer z_r :";
std::cin >> z_r;
std::cout<<"Entrer z_i :";
std::cin >> z_i; */
std::cout<<"Entrer  c_r :";
std::cin >> c_r;
std::cout<<"Entrer  ic_i :";
std::cin >>ic_i;


for(int i = 0; i < n; i++){

    while (module(mod, z_r = 0, iz_i = 0) < 4){

add(n, zni, z_r = 0, iz_i = 0, c_r);

( n, zni, z_r = 0, iz_i = 0,  ic_i);

    z_r = c_r;

    iz_i = ic_i;
    
    }
      } 

}

    

