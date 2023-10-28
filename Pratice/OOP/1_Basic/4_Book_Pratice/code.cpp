#include<iostream>
using namespace std;

class book {
    private:
    string name;
    float price;
    int number_of_pages;


    public:
    // Setter
    void setName(char n[20])
    {
        name = n;
    }
    void setPrice(float p)
    {
        price = p;
    }

    void setnumber_of_pages(int nop)
    {
        number_of_pages = nop;
    }


    // Geter 

    string getName()
    {
        return name;
    }
    
    int getNoOfPages ()
    {
        return number_of_pages;
    }
    float getPrice()
    {
        return price;
    }


    // Functions 
    int countBooks (int p)
    {
        if (price < p)
        {
            return 1;
        }
        else {
            return 0;
        }
    }

    bool isBookPresent(string st)
    {
        if (name == st)
        {
            return true;
        }
        else {
            return false;
        }
    }
};

int main ()
{
    book demo;
    demo.setName("Sujeet");
    demo.setnumber_of_pages(100);
    demo.setPrice(34.4);

    cout<<demo.isBookPresent("Sujeet");



}