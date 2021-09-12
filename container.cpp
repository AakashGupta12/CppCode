#include<iostream>

using namespace std;

class Container{
    int length;
    int breadth;
    int height;
    public:
        Container(int a,int b,int c); //Constructor
        int surfaceArea();
        int volume();
        int area0fWalls();
        void display();
};

Container::Container(int a,int b,int c){
    length=a;
    breadth=b;
    height=c;
}

int Container::surfaceArea(){
    int sa=2*(length*breadth + breadth*height + height*length);
    return sa;
}

int Container::volume(){
    return length*breadth*height;
}

int Container::area0fWalls(){
    return 4*(length*height + breadth*height);
}

void Container::display(){
    int sa,v,aw;
    sa=surfaceArea();
    v=volume();
    aw=area0fWalls();
    cout<<"Surface Area(in cm2): "<<sa<<endl;
    cout<<"Volume(in cm3): "<<v<<endl;
    cout<<"Area of Walls(in cm2): "<<aw<<endl;
    cout<<endl;
}

int main(){
    Container c1(20,30,20);
    c1.display();

    Container c2(100,20,50);
    c2.display();
    return 0;
}