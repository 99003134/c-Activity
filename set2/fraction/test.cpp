#include<iostream>
class Base
{
	
	public:
	int id;
	Base(int id){
	this->id=id;
	}
	
	Base(const Base &n)
	{
	std::cout<<"I am here"<<"\n";
	this->id=n.id;
	}
	
	
	Base operator+(Base n2)
	{
		Base temp(0);
		temp.id=this->id+n2.id;
		return temp;
	}
	void operator=(Base &n1)
	{
		this->id=n1.id;
	}
};


int main()
{
	Base n1(10);
	Base n2(20);
	n2=n1;
	std::cout<<n2.id<<std::endl;
	//Base sum=n1+n2;
	//std::cout<<sum.id<<std::endl;
	
	//display();
	return 0;
}

	
