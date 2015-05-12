//
//  Beispiel mit pattern.cpp
//  ePortfolio
//
//  Created by Jonas Blunck on 12.05.15.
//  Copyright (c) 2015 Jonas Blunck. All rights reserved.
//

#include "Beispiel mit pattern.h"
#include <iostream>
#include <string>
using namespace std;



class Automodell
{
public:
    void SetModel()
    {
        string carm;
        //.. definition des ausgewählten Automodells
        cout << "Automodell: " << carm << endl;
    }
};


class Automotor
{
public:
    void SetMotor()
    {
        string careng;
        //.. definition des ausgewählten Automotors
        cout << "Automodell: " << careng << endl;
    }
    
};

class karosserie
{
public:
    void SetMkarosserie()
    {
        string karosserie;
        //... definition der ausgewählten Karosserie
        cout << "Automodell: " << karosserie << endl;
    }
    
};


class zubehör
{
public:
    zubehör()
    {
        //...
    }
    
    void Setzubehör()
    {
        string zubehör;
        //... definition des ausgewählten Zubehörs
        cout << "Automodell: " << zubehör << endl;
    }
    
};


class fassade
{
public:
    Automodell modell;
    Automotor motor;
    karosserie karosserie;
    zubehör zubehör;
    
    fassade()
    {
        // Klassen mit NullWerten initialisieren, ggf andere Routinen starten
        
        
    }
    void autozusammenstellen()
    {
        cout << "Auto wird zusammen gestellt" << endl;
        modell.SetModel();
        motor.SetMotor();
        karosserie.SetMkarosserie();
        zubehör.Setzubehör();
        cout << "Auto wurde zusammen gestellt" << endl;
    }
    
    void produktverwaltung()
    {
        //.... Produktverwaltung
    }
    
};


class käufer_fass
{
private:
    fassade fass;
    
public:
    käufer_fass()
    {
        fass.autozusammenstellen();
    }
};

class verkäufer_fass
{
private:
    fassade fass;
    
public:
    verkäufer_fass()
    {
        fass.produktverwaltung();
    }
};


