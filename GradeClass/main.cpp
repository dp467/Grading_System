//
//  main.cpp
//  GradeClass
//
//  Created by Dhruv Patel on 4/5/20.
//  Copyright © 2020 Dhruv Patel. All rights reserved.
//

#include <iostream>
#include "Grade.h"


void dispay();
char option();



void display(){
    std::cout<< "Selected on of the option below : " << std::endl;
    
    std::cout << "A. First Quiz Grade " << std::endl;
    
    std::cout <<" B: Second Quiz Grade " << std::endl;
    
    std::cout <<"C: Midterm Exam Grade " << std::endl;
   
    std::cout <<"D: Final Exam Grade " << std::endl;
    
    std::cout << "Q : quit " << std::endl;
  
}
char option(){
    char input;
    std:: cout<< "option : " << std::endl;
    std::cin >> input;
    return toupper(input);
    
    
}





int main(int argc, const char * argv[]) {
    // insert code here...
    char options;
     Grade mygrade;
    do{
        
        display();
        options = option();
       
        switch(options){
            case 'A':{
                int g{0};
                std::cout << "Enter the grade of the first quiz out of 10 : "<< std:: endl;
                std::cin >> g;
                mygrade.get_quizgrade_1(g);
                break;
            }
        
            case 'B' :{
               
                int g{0};
                std::cout << "Enter the grade of the first quiz out of 10 : "<< std:: endl;
                std::cin >> g;
                mygrade.get_quizgrade_2(g);
                
                break;
            
            }
            case 'C' :{
                int g{0};
                std::cout << "Enter the grade of the midterm out of 100 : "<< std:: endl;
                std::cin >> g;
                mygrade.get_midtermgrade(g);
                break;
            }
            case 'D' :{
                int g{0};
                std::cout << "Enter the grade of the final out of 100 : "<< std:: endl;
                std::cin >> g;
                mygrade.get_finalgrade(g);
                break;
                }
        }
        
        
        
        
        
    }while (options != 'Q');{
        std::cout<< "thanks for playing" << std::endl;
    }
    mygrade.get_total();
    mygrade.letter_grade();

    
    return 0;
}
