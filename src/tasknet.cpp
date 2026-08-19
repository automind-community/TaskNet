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

void add_task()
{
    fstream add_file("filedb.txt",ios::in);
    if(!add_file)
    {
        cout<<"Error Opening File"<<endl;
    }

}

void show_task()
{
    
}

