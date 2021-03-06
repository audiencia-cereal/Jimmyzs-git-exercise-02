/******************************************************************************
  Title          : main.cpp
  Authors        : Jimmyzs
  Created on     : October  7, 2018
  Description    : Displays random peculiar facts
  Purpose        : To exercise collaborative source code development
  Usage          : nuttyfact
  Build with     : g++ -Wall -g -o oddities  main.cpp
  Modifications  : Added LiudmilaZyrianova239_oddity to main.cpp
                   Added yizongk_oddity to main.cpp
  Notes:
  The number N below is the number of people on each team.
  This program prints N peculiar facts, called "oddities" here.
  The main program calls N functions, each with the syntax defined
  by the output_function typedef defined below. Each function must be 
  named 
       username_oddity

  where username is the GitHub username of its author.
  For example, 
      output_function  stewartweiss_oddity;

  Oddities are found in the file "oddities.txt" in the project source directory
 
******************************************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;

/******************************************************************************/

// The syntax of the output function that must be used to print an oddity.
typedef ostream& (*output_function) (ostream & out);


ostream& LiudmilaZyrianova239_oddity(ostream & out){
    out << "If nothing ever sticks to TEFLON, how do they make TEFLON stick to the pan?\n";
    return out;
}

ostream& yizongk_oddity(ostream& out) {
    out << "How does the guy who drives the snowplow get to work in the mornings?\n";
    return out;
}

ostream& Jimmyzs_oddity(ostream & out)
{
    out<< "This is a collection of strange but true facts.\n";
    return out;
}

ostream& audiencia_cereal_oddity(ostream& out)
{
    out << "Have you ever imagined a world with no hypothetical situations?\n";
    return out;
}


int main(int argc, char* argv[] )
{

    // Calls to output functions
    //Jimmyzs Function
    output_function Jimmyzs;
    Jimmyzs = Jimmyzs_oddity;
    Jimmyzs(cout);
    //Liudmila Fuction
    LiudmilaZyrianova239_oddity(cout);
    //yizongk Function
    output_function a;
    a = &yizongk_oddity;
    a(cout);
    //audiencia_cereal function
    output_function audiencia_cereal = audiencia_cereal_oddity;
    audiencia_cereal(cout);

    return 0;
}
