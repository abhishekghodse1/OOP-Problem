//Program: Write a program in C++ to implement string class. Write constructors, destructor, Accepts function and Display function. To overload = operator so as call copy constructor 


#include <iostream>

int strlen(char*); // Find length of string
void strcpy(char*, char*); // Deep copy of string

class String
{
    char* string;

    public:
        String(); // Default Constructor
        String(char*); // Parameterised Constructor
        String(const String&); // Copy Constructor
        String operator=(char*); // String s = char*
        String operator=(const String& s); // String s2 = s
        friend std::ostream& operator<<(std::ostream&, const String&); // enable the use of String object in std::cout
        friend std::istream& operator>>(std::istream&, const String&); // enable the use of String object in std::cin
        void accept();
        void display();
        ~String(); // Destructor
};

String::String()
{
    this->string = new char[1];
    this->string[0] = '\0';
}

String::String(char* _string)
{
    if(_string == nullptr)
    {
        String();
    }
    else
    {
        this->string = new char[strlen(_string) + 1];
        strcpy(this->string, _string);   
    }    
}

String::String(const String& s)
{
    if(s.string == nullptr)
    {
        String();
    }
    else
    {
        this->string = new char[strlen(s.string) + 1];
        strcpy(this->string, s.string);   
    } 
}

String String::operator=(char* str)
{
    String s;
    if(str == nullptr)
    {
        s = String();
    }
    else
    {
        s.string = new char[strlen(str) + 1];
        strcpy(this->string, str);   
    }
    
    return s;
}

String String::operator=(const String& s)
{
    char* str = s.string;
    String stemp;
    if(str == nullptr)
    {
        stemp = String();
    }
    else
    {
        stemp.string = new char[strlen(str) + 1];
        strcpy(this->string, str);   
    }
    return stemp;
}

std::ostream& operator<<(std::ostream& output, const String& s)
{
    output << s.string;
    return output;
}

std::istream& operator>>(std::istream& input, const String& s)
{
    input >> s.string;
    return input;
}

void String::accept()
{
    std::cout << "[INPUT] Enter a word: ";
    std::cin >> *this;
}

void String::display()
{
    std::cout << *this << std::endl;
}

String::~String()
{
    delete[] this->string;
}

int main()
{
    String s1("Arindam Pal");
    std::cout << s1 << std::endl;
    String s2(s1);
    std::cout << s2 << std::endl;
    s2 = "Akash";
    std::cout << s2 << std::endl;
    String s3;
    s3 = s2;
    std::cout << s3 << std::endl;
    String s4;
    s4.accept();
    s4.display();
    String s5;
    std::cout << "[INPUT] Enter a word: ";
    std::cin >> s5;
    std::cout << s5 << std::endl;
    return 0;
}

int strlen(char* str)
{
    int length;
    for(int i = 0; str[i] != '\0'; i++)
        length++;
    return length;
}

void strcpy(char* destination, char* source)
{
    int i;
    for(i = 0; source[i] != '\0'; i++)
        destination[i] = source[i];
    destination[i] = '\0';
}

