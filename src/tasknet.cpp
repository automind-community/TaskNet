#include <iostream>
#include <fstream>


using namespace std;
void add_task();
void show_task();
int main()
{

    bool is_menu_running = true;

    cout<<"\n==============================\n";
    cout<<"         TaskNet\n";
    cout<<"==============================\n";

    while(is_menu_running)
    {

        int usrinp;
        cout<<"Please Enter a selection\n1.Add Task\t2.Show Tasks\n";
        cin>>usrinp;
        switch(usrinp)
        {
            case 1:add_task();break;
            case 2:show_task();break;
            case 3:is_menu_running = false;break;
            default:cout<<"Please Enter a valid selection";break;
        }
    }



}

enum Priority
{
    HIGH,
    MEDIUM,
    LOW
};

void add_task()
{
    string temp_task_name;
    string temp_task_description;
    Priority temp_task_priority;

    bool is_priority = true;

    fstream add_file("taskdb.txt",ios::out);
    if(!add_file)
    {
        cout<<"Error Opening File"<<endl;
    }

    cout<<"Enter Task Name:\n";
    cin>>temp_task_name;
    cout<<"Enter Task description:\n";
    cin.ignore();
    getline(cin,temp_task_description);
    while(is_priority)
    {
        int user_priotity_inp;
        cout<<"Enter the priority of task\n1.HIGH\t2.MEDIUM\t3.LOW\n";
        cin>>user_priotity_inp;
        switch(user_priotity_inp)
        {
            case 1:temp_task_priority = Priority::HIGH;is_priority = false;break;
            case 2:temp_task_priority = Priority::MEDIUM;is_priority = false;break;
            case 3:temp_task_priority = Priority::LOW;is_priority = false;break;
            default:cout<<"Please Enter a valid Selection!"<<endl;

        }
        
    }

    add_file<<temp_task_name<<"-"<<temp_task_description<<"-"<<temp_task_priority;


    
    

}

void show_task()
{
    
}

