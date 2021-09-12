#include<iostream>
#include<cstring>

using namespace std;
//Program for the illustration of Run-time polymorphism
class media{
    protected:
        char title[50];
        float price;
    public:
        media(char *s,float a){
            strcpy(title,s);
            price=a;
        }
        virtual void display(){}
};

class book:public media{
    int pages;
    public:
        book(char *s,float a,int p):media(s,a){
            pages=p;
        }
        void display();
};

class tape:public media{
    float time;
    public:
        tape(char *s,float a,float t):media(s,a){
            time=t;
        }
        void display();
};

void book::display(){
    cout<<"\n Title: "<<title;
    cout<<"\n Pages: "<<pages;
    cout<<"\n Price: "<<price;
}

void tape::display(){
    cout<<"\n Title: "<<title;
    cout<<"\n Play time: "<<time<<" mins";
    cout<<"\n Price: "<<price;
}

int main(){
    char *title=new char[30];
    float price,time;
    int pages;

    cout<<"\n ENTER BOOK DETAILS\n";
    cout<<"Title:";
    cin>>title;
    cout<<"Price:";
    cin>>price;
    cout<<"Pages:";
    cin>>pages;

    book b1(title,price,pages);

    cout<<"\n ENTER TAPE DETAILS\n";
    cout<<"Title:";
    cin>>title;
    cout<<"Price:";
    cin>>price;
    cout<<"Play time:";
    cin>>time;

    tape t1(title,price,time);

    media *ptr;
    ptr=&b1;
    cout<<"\nBOOK";
    ptr->display();
    cout<<"\n";

    ptr=&t1;
    cout<<"\nTAPE";
    ptr->display();

    return 0;
}
