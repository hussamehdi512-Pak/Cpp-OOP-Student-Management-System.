#include <iostream>
#include <vector>
using namespace std;
int number = 0;
class student {
protected:
    int grade;
    string name;
    
 public:
     int num;
     
     

virtual  void show_details(){
    cout << name << endl;
    cout << "Grade:"<< grade << endl;
    cout << endl;

}
virtual void add_student(){
 string a;
 cout << "Enter the student name:" ;
 cin.ignore();
 getline(cin, a);
 int b;
 cout << "Enter the grade:" ;
 cin >> b; 
 name = a;
 grade = b;
 number += 1;
 num = number ;
 cout << "Added as roll no." << num << endl;
 cout<<endl;
 
 
 
}

};

class matric: public student{
protected:
   string  group;
   string section;
public:   
   
   
   
   void show_details() override{
   cout << name << endl;
   cout << "Grade:"<< grade<<endl;
   cout << "Section:" << section << endl;
   cout << "Group:" << group << endl;
   cout << endl;
    }
   void add_student() override{
    string a;
    cout << "Enter the student name:" ;
    cin.ignore();
    getline(cin, a);
    int b;
    cout << "Enter the grade:" ;
    cin >> b; 
    string c;
    cout << "Enter the Section:" ;
    cin >> c;
    string d;
    cout << "Enter the Group:" ;
    cin >> d;
    
    name = a;
    grade = b ;
    section = c;
    group = d;
    number++;
    num = number ;
    cout << "Added as roll no." << num << endl;
    cout << endl;
 
   
   
   
   }
 
 }; 

int main(){
    vector<student> students;
    vector<matric> students_matric;
    student s;
    matric m;
    while (true){
    string c;
    cout << "Do you want to add student or veiw the Student or Quit(1/0/Q):" ;
    cin >> c;
    if( c == "1"){
    string d;
    cout << "Perss m for matric and s for simple student:" ;
    cin >> d;
    if(d == "m" || d == "M"){
    m.add_student();
    students_matric.push_back(m);
    
    }
    else if(d == "s" || d == "S"){
    s.add_student();
    students.push_back(s);
    
    
    }
    }
    else if(c == "0"){
    if(number >= 1){
    int a;
    cout << "Enter Student's Roll no: " ;
    cin >> a;
    for(int b = 0 ; b < students.size(); b++){
        if(students[b ].num == a){
        students[b].show_details();
    }
    
    }
    for(int z = 0 ; z < students_matric.size(); z++){
        if (students_matric[z].num == a){
        students_matric[z].show_details();
        }
    }
    }
    else {
    cout << "No Students in the Data Base!" << endl;
    
    
    }
    }
    else if(c == "q" || c == "Q"){
    cout << "exiting......" << endl;
    break;
    
    }
    else {
    cout << "Invalid input try again!" << endl;
    continue;
    
    
    }
    
    
    }
}
    