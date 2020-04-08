//
//  Grade.cpp
//  GradeClass
//
//  Created by Dhruv Patel on 4/5/20.
//  Copyright © 2020 Dhruv Patel. All rights reserved.
//

#include <stdio.h>
#include "Grade.h"
using namespace std;
#include <iostream>

void Grade:: get_quizgrade_1(int grade){
    
    if (grade <=10){
        quiz_grade_1= grade;
        
    }else {
        cout << "illegal entry ---- try again : " << endl;
        
    }
    
   
}
void Grade:: get_quizgrade_2(int grade){
    
    if (grade <=10){
        quiz_grade_2= grade;
        
    }else {
        cout << "illegal entry ---- try again : " << endl;
       
    }
    
   
}
void Grade:: get_midtermgrade(int grade){
    
    if (grade <=100){
        midterm_grade= grade;
       
    }else {
        cout << "illegal entry ---- try again : " << endl;
     
    }
    
   
}
void Grade:: get_finalgrade(int grade){
    
    if (grade <=100){
        final_grade= grade;
        
    }else {
        cout << "illegal entry ---- try again : " << endl;
        
    }
    
   
}

void Grade:: get_total(){
   double total;
    total = quiz_grade_1 + quiz_grade_2;
    
    
    double  avg_1;
    avg_1 = total * 0.25;
   
    
    double avg_2;
    avg_2 = midterm_grade * 0.25;
   
    
    double  avg_3;
    avg_3 = final_grade * 0.50;

    double  avg;
    
    avg = avg_1 +avg_2 +avg_3;
   
    cout << " You got : " << (avg/100)*100 << " percent for this class " << endl;
    total_grade = avg;
}

void Grade:: letter_grade(){
    if ( total_grade >= 90){
        cout << " Good Job Your letter grade is A " << endl;
    }else if (total_grade >= 80 && total_grade <= 89){
        cout << "Good Job you Your Letter Grade is B " << endl;
    }else if (total_grade >= 70 && total_grade <= 79){
        cout << " Your Letter Grade is C " << endl;
    
}else if (total_grade >= 60 && total_grade <= 69){
    cout << " Your Letter Grade is D " << endl;
}else {
    cout << "You got F "<< endl;
}
}
