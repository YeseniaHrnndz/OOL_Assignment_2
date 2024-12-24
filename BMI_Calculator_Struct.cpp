#include <iostream>
#include <string>
using namespace std;

struct Person {
  string name;
  int age = 0;
  string gender;
  float height_in_feet = 0;
  float height_in_inches = 0;
  float weight = 0;
};

float find_height(float feet, float inches) {

  float height = (feet * 12) + inches;
  return height;

}

int main() { 
  Person user;
  string BMI_Category;

  cout << "Please enter your name: " << endl;
  cin >> user.name;
  cout << "Please enter your age: " << endl;
  cin >> user.age;
  cout << "Please enter your gender: " << endl;
  cin >> user.gender;
  cout << "Please enter your height in feet: "  << endl;
  cin >> user.height_in_feet;
  cout << "Please enter your height in inches: " << endl;
  cin >> user.height_in_inches;
  cout << "Please enter your weight in pounds: " << endl;
  cin >> user.weight;

  float total_height = find_height(user.height_in_feet, user.height_in_inches);

  float BMI = 703 * (user.weight / (total_height * total_height));

  if (BMI < 16) {
    BMI_Category = "Severe Thinness";
  } else if (16 <= BMI && BMI < 17) {
    BMI_Category = "Moderate Thinness";
  } else if (17 <= BMI && BMI < 18.5) {
    BMI_Category = "Mild Thinness";
  } else if (18.5 <= BMI && BMI < 25) {
    BMI_Category = "Normal";
  } else if (25 <= BMI && BMI < 30) {
    BMI_Category = "Overweight";
  } else if (30 <= BMI && BMI < 35) {
    BMI_Category = "Obese Class I";
  } else if (35 <= BMI && BMI < 40) {
    BMI_Category = "Obsese Class II";
  } else {
    BMI_Category = "Obsese Class III";
  }

  cout << "" << endl;
  cout << "Hi " << user.name << ", " << endl;
  cout << " " << endl;
  cout << "You are a " << user.gender << ". You are " << user.age << " years old. You are currently " << user.height_in_feet << "’" << user.height_in_inches << " and you currently weight " << user.weight << " pounds. Your BMI is " << BMI << ", which is " << BMI_Category << "." << endl;
  cout << " " << endl;
  cout << "Thank you for using the BMI Calculator!" << endl;

}