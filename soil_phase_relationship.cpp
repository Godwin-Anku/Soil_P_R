#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
    float s, Vw, sat, volofVoids, vol_of_voids, Vv, vol_of_solids, vol_of_soil,
    porosity, WaterContent, weight_of_sample, weight_of_dry_sample,
    weight_of_wet_sample, mass_of_sample, density, mass, volume,
    SatUnitWeight, unit_weight_of_water, SGravity_of_solid, VoidRatio,
    DryUnitWeight, TotalUnitWeight, voidRatio;

    int x;
    cout << "\n\t\tLunar Systems" << endl;
    cout << "\tSoil Phase Relationships" << endl;
    cout << "1. Degree of Saturation" << endl;
    cout << "2. Void Ratio" << endl;
    cout << "3. Porosity" << endl;
    cout << "4. Water Content" << endl;
    cout << "5. Density" << endl;
    cout << "6. Total Unit Weight" << endl;
    cout << "7. Saturated Unit Weight" << endl;
    cout << "8. Dry Unit Weight" << endl;
    cout << "9. EXIT" << endl;
    cout << "Please enter a numeric value between 1 to 9" << endl;
    cin >> x;
    switch(x){
        case 1:{
            cout << "Lunar Systems" << endl;
            cout << "1. Degree of Saturation" << endl;
            cout << "Enter volume of water: ";
            cin >> Vw;
            cout << "Enter value for volume of voids: ";
            cin >> vol_of_voids;
            s = Vw / vol_of_voids;
            s *= 100;
            cout << "\nPercentage of degree of saturation = " << s << endl;
            break;
        }
        case 2:{
            cout << "Lunar Systems" << endl;
            cout << "2. Void Ratio" << endl;
            cin >> Vv;
            cout << "Enter volume of voids: " << endl;
            cout << "Enter value for volume of solids: " << endl;
            cin >> vol_of_solids;
            voidRatio = Vv / vol_of_solids;
            cout << "Void Ratio: " << endl;
            break;
        }
        case 3:{
            cout << "Lunar Systems" << endl;
            cout << "Porosity" << endl;
            cout << "Enter value for volume of voids" << endl;
            cin >> volofVoids;
            cout << "Enter value for volume of soil: " << endl;
            cin >> vol_of_soil;
            porosity = volofVoids / vol_of_soil;
            porosity *= 100;
            cout << "Percentage of Porosity: " << porosity;
            break;
        }
    }

}