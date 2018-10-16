//Setion 19
//Challenge 1
//Formatting Output

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct City{
    std::string name;
    long population;
    double cost;
    };

//Asumme each country has at least 1 city
struct Country{
    std::string name;
    std::vector<City> cities;
    };

struct Tours{
    std::string title;
    std::vector<Country> countries;
    };

void ruler(){
    std::cout << "\n1234567890123456789012345678901234567890123456789012345678901234567890" << endl;
}

int main(){
    Tours tours
    {"Tour Ticket Prices from Miami",
    {
         {
            "Brazil",{
                {"Rio De Janiero",13500000,567.45},
                {"Sao Paulo",11310000,975.45},
                {"Salvador",18234000,855.99}
            },
        },
         {
            "Colombia",{
                {"Bogota",8778000,400.98},
                {"Cali",2401000,424.12},
                {"Medellin",972000,345.34}
            },
        },
         {
            "New Zealand",{
                {"Auckland",1600000,2000.98},
                {"Wellington",200000,2424.12},
                {"Christchurch",380000,2345.34}
            },
        },
        {
            "Argentina",{
                {"Buenos Aires",8778000,400.98},
                {"La Paz",2401000,424.12},
                {"Puebla",972000,345.34}
                }
            },
        }
    
    
    };
    
    const int total_width{70};
    const int field1_width{20}; //country
    const int field2_width{20}; //city name
    const int field3_width{15}; //population
    const int field4_width{15}; //cost
    
    //Display the Report title header centered in width of total_width
    //You could make this a function for practice
    
    ruler();
    int title_length = tours.title.length();
    //cout << title_length << endl;
    cout << std::setw((total_width - title_length)/2) << "" << tours.title << endl;
    cout << endl;
    cout << std::setw(field1_width) << std::left << "Country"
         << std::setw(field2_width) << std::left << "City"
         << std::setw(field3_width) << std::right << "Population"
         << std::setw(field4_width) << std::right << "Price"
         << endl;
    
    cout << std::setw(total_width)
         << std::setfill('-')
         << ""
         << endl; //display total_width dashes
         
    cout << std::setfill(' ');
    cout << std::setprecision(2) << std::fixed;
    
    for(Country country : tours.countries){
        for(size_t i = 0; i < country.cities.size(); ++i){
            cout << std::setw(field1_width) << std::left << ((i == 0) ? country.name: "") //conditional operator
                 << std::setw(field2_width) << std::left << country.cities.at(i).name
                 << std::setw(field3_width) << std::right << country.cities.at(i).population
                 << std::setw(field4_width) << std::right << country.cities.at(i).cost
                 << endl;
        }
    }
    
    cout << endl << endl;
    return 0;
}
