#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
    float s, Vw, sat, volofVoids, vol_of_voids, Vv, vol_of_solids, vol_of_soil, VoidR, UnitWeightofWater, 
    SpecificGravityofSolid, porosity, WaterContent, watercontent, weight_of_sample, weight_of_dry_sample,
    weight_of_wet_sample, mass_of_sample, mass_of_solid, density, mass, volume,
    SatUnitWeight, unit_weight_of_water, SGravity_of_solid, unitweightofwater, VoidRatio,
    DryUnitWeight, vRatio, TotalUnitWeight, voidRatio, specificgravityofsolid ;

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
            cout << "\nPercentage of degree of saturation = " << s << "%" << endl;
            break;
        }
        case 2:{
            cout << "Lunar Systems" << endl;
            cout << "2. Void Ratio" << endl;
            cout << "Enter volume of voids: " << endl;
            cin >> Vv;
            cout << "Enter value for volume of solids: " << endl;
            cin >> vol_of_solids;
            voidRatio = Vv / vol_of_solids;
            cout << "Void Ratio: " << voidRatio;
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
            cout << "Percentage of Porosity: " << porosity << "%";
            break;
        }
        case 4:{
            cout << "Lunar Sytems" << endl;
            cout << "4. Water Content" << endl;
            cout << "Enter value for Weight of Wet Sample: " << endl;
            cin >> weight_of_wet_sample;
            cout << "Enter value for Weight of Dry Sample: " << endl;
            cin >> weight_of_dry_sample;
            WaterContent = weight_of_wet_sample / weight_of_dry_sample;
            cout << "Enter value for Mass of Solid: " << endl;
            cin >> mass_of_solid;
            WaterContent /= mass_of_solid;
            WaterContent *= 100;
            cout << "Percentage of Water Content in the given sample: " << WaterContent << "%";
            break;
        }
        case 5:{
            cout << "Lunar Systems" << endl;
            cout << "5. Density" << endl;
            cout << "Enter the value of Mass: " <<endl;
            cin >> mass;
            cout << "Enter the value of Volume: " << endl;
            cin >> volume;
            density = mass / volume;
            cout << "Density: " << density << "kg per cubic meter";
            break;
        }
        case 6:{
            cout << "Lunar Systems" << endl;
            cout << "6. Total Unit Weight" << endl;
            cout << "Enter value for Specific Gravity of Solid: " << endl;
            cin >> SGravity_of_solid;
            cout << "Enter value for Unit Weight of Water: " << endl;
            cin >> unit_weight_of_water;
            cout << "Enter value for Water Content: ";
            cin >> watercontent;
            cout << "Enter value for Void Ratio";
            cin >> VoidRatio;
            TotalUnitWeight = SGravity_of_solid * unit_weight_of_water;
            TotalUnitWeight *= ++watercontent;
            TotalUnitWeight /= ++ VoidRatio;
            cout << "Total Unit Weight: " << TotalUnitWeight;
            break;
        }
        case 7:{
            cout << "Lunar Systems" << endl;
            cout << "7. Saturated Unit Weight" << endl;
            cout << "Enter value for Unit Weight of Water: " << endl;
            cin >> unitweightofwater;
            cout << "Enter value for Specific Gravity of Solid: " << endl;
            cin >> specificgravityofsolid;
            cout << "Enter value for Void Ratio: " << endl;
            cin >> vRatio;
            SatUnitWeight = (specificgravityofsolid + vRatio) * unitweightofwater;
            SatUnitWeight /= ++vRatio;
            cout <<  "Saturated Unit Weight of soil: " << SatUnitWeight;
            break;
        }
        case 8:{
            cout << "Lunar Systems" << endl;
            cout << "8. Dry Unit Weight" << endl;
            cout << "Enter value for Specific Gravity of Solid: " << endl;
            cin >> SpecificGravityofSolid;
            cout << "Enter value for Unit Weight of Water: " << endl;
            cin >> UnitWeightofWater;
            cout << "Enter value for Void Ratio: " << endl;
            cin >> VoidR;
            DryUnitWeight = UnitWeightofWater * SpecificGravityofSolid;
            DryUnitWeight /= ++VoidR;
            cout << "Dry Unit Weight: " << DryUnitWeight << "kilo Newton(s) per cubic meter";
            break;
            default:
            cout << "Invalid option!" << endl;
            cout << "Select a valid option from the options provided.";
    }
        }
        

}