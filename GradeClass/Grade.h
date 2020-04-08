//
//  Grade.h
//  GradeClass
//
//  Created by Dhruv Patel on 4/5/20.
//  Copyright © 2020 Dhruv Patel. All rights reserved.
//

#ifndef Grade_h
#define Grade_h

class Grade{
private:
    int quiz_grade_1;
    int quiz_grade_2;
    int midterm_grade;
    int final_grade;
    double total_grade;
    
    

public:
    void get_quizgrade_1 ( int grade);
    void get_quizgrade_2 (int grade);
    void get_midtermgrade (int grade);
    void get_finalgrade (int grade);
    void get_total();
    void letter_grade();
    
};
#endif /* Grade_h */
