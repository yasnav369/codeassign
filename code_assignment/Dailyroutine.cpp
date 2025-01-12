#include <iostream>
#include <string>
using namespace std;

int main() {

// DECLARING VARIABLES.
    string FirstName;
    string LastName;
    int Age;
    int StudyHours = 2;
    float ExerciseHours = 1.5;
    int RelaxationHours = 4;

    //user input
    cout<<"what is your first name? ";
    cin>>FirstName;

    cout<<"what is Last name? ";
    cin>>LastName;

    cout<<"How old are you? ";
    cin>>Age;

    //Full name
    string FullName = FirstName + " " + LastName;

//WELCOME TEXT.
    cout<<"\n\nWelcome ";
    cout<< FullName;
    cout<< " to your Daily Routine Evaluation Script.";


//EVALUATION OF BALANCED ROUTINE.

    cout << "\n\nEVALUATION OF BALANCED ROUTINE:\n";

    //Study Hours.
    cout <<"==>";
    if (StudyHours >= 2)
    {
      cout << "Congratulations, you have studied enough.\n";
    } else {
      cout << "You need to study more.\n";
    }
    
    //Exercise hours 
    cout <<"==>";
   if (ExerciseHours >= 1)
    {
      cout << "Congratulations, you have exercised enough.\n";
    } else {
      cout << "You need more exercise.\n";
    }

    //Relaxation hours.
    cout <<"==>";
    if (RelaxationHours >= 3)
    {
      cout << "You have relaxed enough. Go work on any unfinished task.\n";
    } else {
      cout << "Get some rest.\n";
    }



//AGE GROUPS.
    cout<<"\n\nAGE GROUP:\n";
    cout<<"==>";  
    int AgeGroup;

    //Determining age group from age.
    if (Age>=0 && Age<=1)
    {
      AgeGroup = 1;
    } else if (Age>=2 && Age<=4)
    {
      AgeGroup = 2;
    } else if (Age>=5 && Age<=12)
    {
      AgeGroup = 3;
    } else if (Age>=13 && Age<=19)
    {
      AgeGroup = 4;
    } else if (Age>=20 && Age<=39)
    {
    AgeGroup = 5;
    } else if (Age>= 40 && Age<=59)
    {
      AgeGroup = 6;
    } else if (Age > 59)
    {
      AgeGroup = 7;
    }



    //Displaying the age group.
    switch (AgeGroup)
    {
    case 1:
      cout<<"Infant.\n"; //Infant = 0-1 year
      break;
    case 2:
      cout<<"Toddler.\n"; //Toddler = 2-4 yrs
      break;
    case 3:
      cout<<"Child.\n"; //Child = 5-12 yrs.
      break;
    case 4:
      cout<<"Teenager.\n"; //Teen = 13-19 yrs.
      break;
    case 5:
      cout<<"Adult.\n"; //Adult = 20-39 yrs.
      break;
    case 6:
      cout<<"Middle age adult.\n"; //Middle Age Adult = 40-59 yrs.
      break;
    case 7:
      cout<<"Senior adult.\n"; //Senior Adult = 60+.
      break;
    }




//STRUCTURED DAILY ROUTINE.
    cout << "\n\n\t\tDAILY ROUTINE TABLE\n";
    cout << "\t----------------------------------------\n";
    cout << "\t|   TIME     |  TASK      | DURATION   |\n";
    cout << "\t|============+============+============|\n";
    cout << "\t| 15:30am    |  Wakeup    |   --       |\n";
    cout << "\t| 6:30am     |  Study     |  2+HRS     |\n";
    cout << "\t| 4:30pm     |  Exercise  |  1.5+HRS   |\n";
    cout << "\t| 19:00pm    |  Relax     |  3+HRS     |\n";
    cout << "\t----------------------------------------\n\n";



  return 0;
} 
