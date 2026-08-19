#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    fstream task_file("taskdb.txt",ios::in);
    if(!task_file)
    {
        cout<<"Error opening File"<<endl;
    }else{
        cout<<"Files opened successfully"<<endl;
    }
    task_file.close();

}