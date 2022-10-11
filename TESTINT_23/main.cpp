//
//  main.cpp
//  TESTINT_23
//
//  Created by Fajar Adie Santosa on 11/10/22.
//


//Nama :Fajar Adie Santosa
//NRP :5002221145
//Jurusan:Matematika

#include <iostream>
#include <cmath>
using namespace std;


#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari meter
#define SUDUT 45 //sudut elevasi tembakan


float mencari_v0 (float a,float b)
{
    //bow kuadrat
    //sqrt akar
    float v0;
    //mencari jarak
    v0 = pow(a,b)*2*sin(SUDUT)/GRAVITASI;
    
    return v0;
}

int speed_dgn_loss(int a)
{
    START_PENGUKURAN;
    a = START_PENGUKURAN ;
    return a;
}

int main()
{
    cin >> mencari_v0;
    cout << mencari_v0(a,b) << endl;
    
    cout << START_PENGUKURAN;
    
    return 0;
}

