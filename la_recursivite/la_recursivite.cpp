// la_recursivite.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

uint64_t  factorielle(int n_fact);
uint64_t  factorielle_recursive(int n_fact);
uint64_t  factorielle_recursive_terminale(int n_fact, uint64_t n_Res);

int main()
{

    //la recursivité
    //uint64_t n_resFact = factorielle(15);
    
   // uint64_t n_resFact = factorielle_recursive(15);
    uint64_t n_resFact = 1;
    n_resFact=factorielle_recursive_terminale(5, n_resFact);

    return 0;

}

uint64_t  factorielle(int n_fact) {

    if (n_fact < 0) {
        return 0;
    }
    if (n_fact == 0) {
        return 1;
    }

    uint64_t  n_resFact = 1;
    for (int n_i = 1; n_i <= n_fact; n_i++) {

        n_resFact = n_resFact * n_i;
    }

    return n_resFact;


}

uint64_t  factorielle_recursive(int n_fact) {

    if (n_fact < 0) {
        return 0 ;
    }
    if (n_fact == 0 || n_fact==1) {
        return 1;
    }

    //remonte la pile d'appel et donne le résultat
    return n_fact * factorielle_recursive(n_fact - 1);
    
}


uint64_t  factorielle_recursive_terminale(int n_fact, uint64_t n_Res) {

    if (n_fact < 0) {
        return 0;
    }
    if (n_fact == 0) {
        return 0;
    }

    if (n_fact == 1) {
        return n_Res;
    }

    //ne remonte pas la pile d'appel car resultat dans n_Res;
    return factorielle_recursive_terminale(n_fact - 1,n_fact*n_Res);

}


