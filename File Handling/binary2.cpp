#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class Employee{
    public:

    int id;//4bytes
    char name[30];//30 bytes
    char address[50];//50 bytes
    //total = 84 bytes

    Employee(){

    }
    Employee(int _id, string _name, string _address){//string is class and int is primitive datatype
        id = _id;
        // name = _name;        
        // address = _address;
        strcpy(name, _name.c_str());//cannot copy directly thus use strcpy to copy the value in _name from name by type casting
        strcpy(address, _address.c_str());
    }
    void info()
    {
        cout << "ID: " << id << "\t Name : " << name << "\tAddress : " << address << endl;
    }
};

void create(Employee obj){
    ofstream file("details.dat", ios::binary | ios::app);
    file.write((char*) &obj, sizeof(obj));
    file.close();
}

void read(Employee){
    ifstream file("details.dat", ios::binary);
    Employee obj;
    while(file.read((char*) &obj), sizeof(obj)){

            obj.info();
    }
    file.close();
}

int main(){
    Employee e1(1, "Benjamin", "Jammu & Kashmir");
    Employee e2(2, "Eqlakh", "Arunachal Pradesh");
    // create(e1);
    // create(e2);
    read();
    return 0;
}

//crud operations