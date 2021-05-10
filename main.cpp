#include <iostream>
#include "BinPacking.h"
#include "PassengerManager.h"
#include "IViaje.h"

/*
using namespace std;

    void binPacking(int *a, int size, int n) {
        int binCount = 1;
        int m = size;
        for (int i = 0; i < n; i++) {
            if (m - *(a + i) > 0) {
                m -= *(a + i);
                continue;
            } else {
                binCount++;
                m = size;
                i--;
            }
        }
        cout << "Number of bins required: " << binCount;
    }*/
PassengerManager distri (IViaje* viaje){
    return viaje->distribucion(int *a, int , int cantBurbujas, Passenger *_passenger);
}

    int main(int argc, char **argv) {
        PassengerManager passengerManager;
        BinPacking binPacking;
        std::cout << "Enter the number of items in Set: ";
        int n;
        std::cin >> n;
        std::cout << "Enter " << n << " items:";
        int a[n];
        for (int i = 0; i < n; i++)
            std::cin >> a[i];
        std::cout << "Enter the bin size: ";
        int size;
        std::cin >> size;


    }


