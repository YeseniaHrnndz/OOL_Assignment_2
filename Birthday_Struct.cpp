#include <iostream>
#include <string>
using namespace std;

struct Birthday {
    string month;
    int day;
    int year;
};

int month_conversion(string month_input) {
  int month = 0;

  if (month_input == "January") {
    month = 1;
  } else if (month_input == "February") {
    month = 2;
  } else if (month_input == "March") {
    month = 3;
  } else if (month_input == "April") {
    month = 4;
  } else if (month_input == "May") {
    month = 5;
  } else if (month_input == "June") {
    month = 6;
  } else if (month_input == "July") {
    month = 7;
  } else if (month_input == "August") {
    month = 8;
  } else if (month_input == "September") {
    month = 9;
  } else if (month_input == "October") {
    month = 10;
  } else if (month_input == "November") {
    month = 11;
  } else if (month_input == "December") {
    month = 12;
  } else {
    cout << "Invalid month input" << endl;
  }
  return month;
  
}

string month_assignment(int month) {
  string assignment;
  
  switch (month) {
    case 1:
      assignment = "Janus";
      break;
    case 2:
      assignment = "Februalia";
      break;
    case 3:
      assignment = "Mars";
      break;
    case 4:
      assignment = "Aperire";
      break;
    case 5:
      assignment = "Maia";
      break;
    case 6:
      assignment = "Youth";
      break;
    case 7:
      assignment = "Julius Caesar";
      break;
    case 8:
      assignment = "Augustus Caesar";
      break;
    case 9:
      assignment = "Seven";
      break;
    case 10:
      assignment = "Eight";
      break;
    case 11:
      assignment = "Nine";
      break;
    case 12:
      assignment = "Ten";
      break;
    }
  
  return assignment;
}

string day_assignment(int day) {
  string assignment;

  switch (day) {
    case 1:
      assignment = "Self-Starter";
      break;
    case 2:
      assignment = "Solution Finder";
      break;
    case 3:
      assignment = "Expressive";
      break;
    case 4:
      assignment = "Stable and Rational";
      break;
    case 5:
      assignment = "Flexible";
      break;
    case 6:
      assignment = "Nurturer";
      break;
    case 7:
      assignment = "Knowledge-Oriented";
      break;
    case 8:
      assignment = "Self-Sufficient and Successful";
      break;
    case 9:
      assignment = "Compassionate";
      break;
    case 10:
      assignment = "Leadership Skills";
      break;
    case 11:
      assignment = "Intuitive";
      break;
    case 12:
      assignment = "Creative";
      break;
    case 13:
      assignment = "Conscientious";
      break;
    case 14:
      assignment = "Open-Minded";
      break;
    case 15:
      assignment = "Curious and Social Nature";
      break;
    case 16:
      assignment = "Inquisitive";
      break;
    case 17:
      assignment = "Independent and Ambitious";
      break;
    case 18:
      assignment = "Open-Minded, Open-Hearted, and Ambitious";
      break;
    case 19:
      assignment = "Independent and Self-Sufficient";
      break;
    case 20:
      assignment = "Relatability";
      break;
    case 21:
      assignment = "Charming and Social";
      break;
    case 22:
      assignment = "Determined and Hard-Working";
      break;
    case 23:
      assignment = "Eager";
      break;
    case 24:
      assignment = "Loyal";
      break;
    case 25:
      assignment = "Curious";
      break;
    case 26:
      assignment = "Innovative";
      break;
    case 27:
      assignment = "Tolerant and Compassionate";
      break;
    case 28:
      assignment = "Collaborative";
      break;
    case 29:
      assignment = "Connective";
      break;
    case 30:
      assignment = "Innovative Thinker and an Excellent Communicator";
      break;
    case 31:
      assignment = "Creative and Organized";
      break;
  }

  return assignment;
}

string year_assigment(int year) {
  string assignment;

  switch (year) {
    case 2000:
      assignment = "Millenial";
      break;
    case 2001:
      assignment = "Generation Z";
      break;
    case 2002:
      assignment = "Generation Z";
      break;
    case 2003:
      assignment = "Generation Z";
      break;
    case 2004:
      assignment = "Generation Z";
      break;
    case 2005:
      assignment = "Generation Z";
      break;
    case 2006:
      assignment = "Generation Z";
      break;
    case 2007:
      assignment = "Generation Z";
      break;
    case 2008:
      assignment = "Generation Z";
      break;
    case 2009:
      assignment = "Generation Z";
      break;
    case 2010:
      assignment = "Generation Z";
      break;
    case 2011:
      assignment = "Generation Z";
      break;
    case 2012:
      assignment = "Generation Z";
      break;
    case 2013:
      assignment = "Gen Alpha";
      break;
    case 2014:
      assignment = "Gen Alpha";
      break;
    case 2015:
      assignment = "Gen Alpha";
      break;
    case 2016:
      assignment = "Gen Alpha";
      break;
    case 2017:
      assignment = "Gen Alpha";
      break;
    case 2018:
      assignment = "Gen Alpha";
      break;
    case 2019:
      assignment = "Gen Alpha";
      break;
    case 2020:
      assignment = "Gen Alpha";
      break;
    case 2021:
      assignment = "Gen Alpha";
      break;
    case 2022:
      assignment = "Gen Alpha";
      break;
    case 2023:
      assignment = "Gen Alpha";
      break;
    case 2024:
      assignment = "Gen Alpha";
      break;
    case 2025:
      assignment = "Gen Alpha";
      break;
  }

  return assignment;
}

int main() {
  Birthday birthday_input;
  int month_int = 0;
  bool running = true;
  string retry;

  while (running == true) {
    
    cout << "Welcome to Birthday Date Meaning Generator!" << endl;
    cout << "Please enter the month of your birthday: " << endl;
    cin >> birthday_input.month;
    cout << "Please enter the day of your birthday: " << endl;
    cin >> birthday_input.day;
    cout << "Please enter the year of your birthday: " << endl;
    cin >> birthday_input.year;
  
    month_int = month_conversion(birthday_input.month);
    
    string month_meaning = month_assignment(month_int);
    cout << "The month of " << birthday_input.month << " means " << month_meaning << endl;
  
    string day_meaning = day_assignment(birthday_input.day);
    cout << "The day of " << birthday_input.day << " means " << day_meaning << endl;
  
    string year_meaning = year_assigment(birthday_input.year);
    cout << "The year of " << birthday_input.year << " means that you are " << year_meaning << endl;

    cout << "Would you like to try another one? (Y/N)" << endl;
    cin >> retry;

    if (retry == "Y") {
      running = true;
    } else if (retry == "N") {
      running = false;
      cout << "Thanks for playing!" << endl;
    }

  }
  
  return 0;
  
}