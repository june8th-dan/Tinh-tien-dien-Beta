#include <iostream>
#include <stdlib.h>
#include "main.h"
using namespace std;

float task(float value){
    float total;
    float full1 = layer[1] * level[0];
    float full2 = (layer[2] - layer[1]) * level[1];
    float full3 = (layer[3] - layer[2]) * level[2];
    float full4 = (layer[4] - layer[3]) * level[3];
    float full5 = (layer[5] - layer[4]) * level[4];
    if(value < layer[1]){
        total = value * level[0];
    }
    else if(layer[1] <= value < layer[2]){
        total = full1 + ((value - layer[1]) * level[1]);
    }
    else if(layer[2] <= value < layer[3]){
        total = full1 + full2 + ((value - layer[2]) * level[2]);
    }
    else if(layer[3] <= value < layer[4]){
        total = full1 + full2 + full3 + ((value - layer[3]) * level[3]);
    }
    else if(layer[4] <= value < layer[5]){
        total = full1 + full2 + full3 + full4 + ((value - layer[4]) * level[4]);
    }
    else {
        total = full1 + full2 + full3 + full4 + full5 + ((value - layer[5]) * level[5]);
    }    
    return total;
}

int main(){
    float before;
    float after;
    float total;
    float cost;
    cout << "Chuong trinh tinh tien dien - Phien ban " << ver << endl << "Bang gia cap nhat ngay " << update[0] << " thang " << update[1] << " nam " << update[2] << endl << endl;
    cout << "Nhap chi so cu: ";
    cin >> before;
    cout << endl << "Nhap chi so moi: ";
    cin >> after;
    cout << endl;
    if(before < after){
        total = after - before;
        cout << "Ban da tieu thu " << total << " kWh dien" << endl << "Dang tinh so tien phai tra..." << endl;
        cost = task(total);
        cout << "So tien dien phai tra la " << cost << " VND" << endl << endl;
        system ("pause");
    }
    else {
        cout << "Gia tri da nhap khong hop le. Vui long thu lai!" << endl;
        system ("pause");
    }
    return 0;
}