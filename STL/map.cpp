#include<iostream>
#include<map>
using namespace std;
 //Maps are associative containers that store paired data. These paired data are called key value pairs. where  key is unique but value is not.
 int main(){

    // map<int, string> student = {
    //     {1, 'Karan Garg'},
    //     {2, 'Sai Amulya Kurapati'},
    //     {3, 'Shreya Sharma'},
    //     {4, 'Tushar Bhardwaj'}
    // };

    map<int, string> student;
    student[1] = "Milan";
    student[2] = "Adey";
    student.insert(make_pair(3,"Milan"));
    student.insert(make_pair(4, "Anil"));
    student[5] = "Abhinav";//overwritten
    // student[5] = "Shreya";


    // for(int i = 1; i <= student.size() ; i++){
    //     cout << "Student[" << i << "]:" << student[i] << endl;
    // }

    // map<int, string> :: iterator iter;
    // for(iter = student.begin(); iter != student.end(); iter++){
    //     cout << iter->first << " - " << iter->second << endl;//print key - value
    // }

    map<int, string> :: iterator iter;
    for(iter = student.begin(); iter != student.end(); iter++){
        cout << (*iter).first << " - " << iter->second << endl;
    }

    student.erase(student.find(2), student.find(4));
    cout << endl;
    cout << "2 : ";
    for (iter = student.begin(); iter != student.end(); iter++)
    {
        cout << (*iter).first << " - " << iter->second << endl;
    }
 }