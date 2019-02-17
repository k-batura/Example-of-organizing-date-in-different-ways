#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    vector<string> name;
    vector<string> address;
    vector<string> city;
    vector<string> state;
    string choice;
    string Name;
    string Address;
    string City;
    string State;
    name.push_back("Name");
    name.push_back("Bantam Books");
    name.push_back("ETN Corporation");
    name.push_back("Benjamen/Cummings");
    name.push_back("Intertext");
    name.push_back("Addison Wesley");
    name.push_back("Brady Pub");
    name.push_back("Gale");
    name.push_back("ACM");
    address.push_back("Address");
    address.push_back("666 Fifth Ave");
    address.push_back("Rd 4, Box 659");
    address.push_back("390 Bridge Pkwy");
    address.push_back("2633 E.17th Ave");
    address.push_back("Rte 128");
    address.push_back("15 Columbus Cir");
    address.push_back("835 Penobscot");
    address.push_back("11W. 42nd St.");
    city.push_back("City");
    city.push_back("New York");
    city.push_back("Detroit");
    city.push_back("Redwood");
    city.push_back("New York");
    city.push_back("Redwood");
    city.push_back("New York");
    city.push_back("Redwood");
    city.push_back("New York");
    state.push_back("State");
    state.push_back("NY");
    state.push_back("MI");
    state.push_back("MI");
    state.push_back("NY");
    state.push_back("MI");
    state.push_back("NY");
    state.push_back("CA");
    state.push_back("NY");

    while(choice!="e")
    {
        cout<<"a) Display all Information."<<endl;
        cout<<"b) Display information for New York only."<<endl;
        cout<<"c) Add Information (Add a name, address, city, and state to the list)"<<endl;
        cout<<"d) Sort the information according to the name in ascending order."<<endl;
        cout<<"e) Exit."<<endl;
        getline(cin,choice);

        if(choice=="a")
        {
            for(int N=0;N<name.size();N++)
            {
                cout<<setw(17)<<name.at(N)<<setw(17)<<address.at(N)<<setw(17)<<city.at(N)<<setw(17)<<state.at(N)<<endl;
            }
                cout<<endl;
        }
        if(choice=="b")
        {
                for(int N=0;N<city.size();N++)
                {
                    if(city.at(N)=="New York")
                    {
                        cout<<setw(17)<<name.at(N)<<setw(17)<<address.at(N)<<setw(17)<<city.at(N)<<setw(17)<<state.at(N)<<endl;
                    }
                }
        }

        if(choice=="c")
        {
            cout<<"Enter the name you want to add : "<<endl;
            getline(cin,Name);
            cout<<"Enter the address you want to add : "<<endl;
            getline(cin,Address);
            cout<<"Enter the city you want to add : "<<endl;
            getline(cin,City);
            cout<<"Enter the state you want to add : "<<endl;
            getline(cin,State);
            name.insert(name.begin()+1,Name);
            address.insert(address.begin()+1,Address);
            city.insert(city.begin()+1,City);
            state.insert(state.begin()+1,State);
        }

        }

    return 0;
}
