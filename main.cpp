/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agonzalez
 *
 * Created on November 9, 2017, 11:39 PM
 */


#include <iostream>
#include <regex>
#include <string>

using namespace std;

/*
 * 
 */

   void IPAddress(string source, string dest) 
   {
       regex format("((1[1-9]{2})|(2[1-4][1-9])|(25[1-5])).((1[1-9]{2})|(2[1-4][0-9])|(25[1-5])).((1[1-9]{2})|(2[1-4][1-9])|(25[1-5])).((25[1-5])|(2[1-4][1-9])|[1-9]{2}|[1-9])");
       if(regex_match(source, format) && regex_match(dest, format))
       {
           cout<< "this is a valid IP Address" << endl;
       }
       else
       {
           cout<< "Invalid IP Header - Source IP Address is invalid."<< endl;
       }
   }
   

int main(int argc, char** argv) {

    string a1 = "212.112.212.11";
    string a2 = "212.112.212.12";
    
    string b1 = "212.112.212.333";
    string b2 = "212.112.212.33";
    
    IPAddress(a1,a2);
    IPAddress(b1,b2);
    return 0;
}

