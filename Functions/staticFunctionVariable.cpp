#include <iostream>
using namespace std;

class Students{
    int id;
    static int count; //no need to intialize

    public:

    void setData(){
        cout << "Enter id :" ;
        cin >> id;
        count++ ;//this will not increase the count of student as every objedct of class has its own count variable as in s1.count, s2.count... and so on. Count is shared by all.
    }

    void getData(){
        cout << "Id is " << id << " and the student count is " << count << endl;
    }
    //static functions will work only with static variables
    static void getCount(){ //non static variables are not permitted inside static methods
        //cout << id;
        cout << "he value of count is : " << count << endl;
    }
};
int Students::count; //now the count is owned by class Students, a single memory loacation or address is located for the count variable and thus it is updated every time when a new data is entered. Due to static keyword
int main(){
    Students s1, s2, s3;

    s1.setData();
    s1.getData();
    Students::getCount();
    //static method is accessed directly via the class as it is a part of it.

    s2.setData();
    s2.getData();
    Students::getCount();

    s3.setData();
    s3.getData();
    Students::getCount();
    return 0;

}