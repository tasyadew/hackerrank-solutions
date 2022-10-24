//Implement the class Box 
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

#include<bits/stdc++.h>
using namespace std;

class Box{
    private:
        int l; //breadth
        int b; //height
        int h; //length
        
    public:
        //default constructor  
        Box(){
            l = b = h = 0;
        }
        
        //constructor with parameter
        Box(int length, int breadth, int height){
            l = length;
            b = breadth;
            h = height;
        }
        
        //copy construtor
        Box(Box& box){
            l = box.l;
            b = box.b;
            h = box.h;
        }
        
        int getLength(){return l;}
        int getBreadth(){return b;}
        int getHeight(){return h;}
        
        long long CalculateVolume(){
            long long lenght = static_cast<long long>(l);
            long long breadth = static_cast<long long>(b);
            long long height = static_cast<long long>(h);
            
            return lenght*breadth*height;
        }
        
        //Note:
        //  can't use {return static_cast<long long>(l*b*h);}
        //  because it will multiply in type int
        //  and then return as long long
        //
        //  so, if want the multiplication not overflow,
        //  change int to long long by static cast first
        //  and then it will multiply as long long instead of int
        
        bool operator<(Box& B){
            if (l < B.l){return true;}
            if (b < B.b && l == B.l){return true;}
            if (h < B.h && b == B.b && l == B.l){return true;}
            return false;
        }
        
        //Note:
        //  no need to add another object inside the operator overload
        //  it will use the default variables instead
                
        friend ostream &operator<<(ostream& out, Box& box){
            out << box.l << " " << box.b << " " << box.h;
            return out;
        }
          
}; 



void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}