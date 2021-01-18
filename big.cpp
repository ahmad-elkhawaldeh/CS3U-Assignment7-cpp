// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: Oct 2019
//  This program gives you the lagrest number in a list


#include <iostream>
using namespace std;

int myMax(float arr[]) {
    // Defining myMax function

    float max;
    int loop;
    for (loop = 0; loop < sizeof(arr); ++loop) {
    if (max < arr[loop])                                
        max = arr[loop];                        
    }
    return max;                             
}


int main() {

    int loop, number;               
    float arr[100];

    cout << "Enter total number of elements: ";
    cin >> number;                         
    cout << endl;

        while (number <= 0) {
            cout<<"Enter integer and valid input, Try again ";         
            cin>>number;                                  
    }
    for (loop = 0; loop < number; ++loop) {
       cout << "Enter Number " << " : ";
       cin >> arr[loop];                                                     
    }

    cout << "Largest element = " << myMax(arr);     
}
