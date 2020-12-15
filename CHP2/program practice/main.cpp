#include "header"


void DisplayNameAndAddress()
{
    string name = "", address = "";
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your address:";
    cin>>address;
    cout<<"your name is: "<< name <<", your address is: "<< address <<std::endl;
}

void ConvertInputFurlongToYard()
{
    unsigned int furlong = 0;
    cout<<"Enter the number of Furlong:";
    cin>>furlong;
    cout<< furlong <<" Furlong = "<< furlong * 220 <<" Yard."<<std::endl;
}

void Using3Function()
{
    void printtext(){
        cout<<"Three blind mice"<<std::endl;
    };
    void printText(){
        cout<<"See how they run"<<std::endl;
    };
    printtext();
    printtext();
    printText();
    printText();
}

void ConvertYearsToMonths()
{
    unsigned int age = 0;
    cout<<"Enter your age:";
    cin>>age;
    cout<< age <<" has "<< age * 12 <<" months."<<std::endl;
}

void ConvertCelsiusToFahrenheit()
{
    int celsius = 0;
    cout<<"Please enter a Celsius value:";
    cin>>celsius;
    cout<<celsius<<" degrees Celsius is "<<(1.8 * celsius) + 32.0<<" degrees Fahrenheit."<<std::endl;
}

void ConvertLightyearToAstronomicalunits()
{
    unsigned long long astronomical_units = 0;
    float light_year = 0;
    cout<<"Enter the number of light year:";
    cin>>light_year;
    astronomical_units = light_year * 63240;
    cout<<light_year<<" light years = "<<astronomical_units<<" astronomical units."<<std::endl;
}

void DisplayHoursAndMinutes()
{
    unsigned int hours = 0, minutes = 0;
    cout<<"Enter the number of hours:";    
    cin>>hours;
    cout<<"Enter the number of minutes:";
    cin>>minutes;
    cout<<"Time: "<<hours<<":"<<minutes<<std::endl;
}

int main()
{
    cout<<"Hello, world"<<std::endl;
    DisplayNameAndAddress();
    ConvertInputFurlongToYard();
    Using3Function();
    ConvertYearsToMonths();
    ConvertCelsiusToFahrenheit();
    ConvertLightyearToAstronomicalunits();
    DisplayHoursAndMinutes();
    return 0;
}