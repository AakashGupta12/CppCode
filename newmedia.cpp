#include<iostream>
#include<string>

using namespace std;

class BaseMedia{
    public:
        virtual void displayBaseMedia(){};
};

class Tape:virtual public BaseMedia{
    int time;
    public:
        Tape(int t){
            time=t;
        }

        virtual void displayBaseMedia(){
            cout<<"Time:"<<time<<endl;
        }
};

class Book:virtual public BaseMedia{
    int pages;
    public:
        Book(int p){
            pages=p;
        }

        virtual void displayBaseMedia(){
            cout<<"Pages:"<<pages<<endl;
        }
};

class Media:public Book,public Tape{
    string title;
    int price;
    BaseMedia baseMediaArr[20];
    public:
        static int i;
        Media(string ti,int p){
            title=ti;
            price=p;
        }
        
        void addBaseMedia(BaseMedia *obj){
                baseMediaArr[i]=*obj;
                i++;
        }

        void display(){
            cout<<"Title:"<<title<<endl;
            cout<<"Price:"<<price<<endl;
            for(int j=0;j<i;j++){
                baseMediaArr[j].displayBaseMedia();
            }
        }
};

int Media::i=0;

int main(){
    Media m1("ABC",500);
    Book b1(200);
    m1.addBaseMedia(&b1);
    Tape t1(90);
    m1.addBaseMedia(&t1);
    m1.display();
    return 0;
}