class Student
{
	public:
		float cpp,dbms,web,net,data;	//Attribute
	void setData(float cpp,float dbms,float web,float net,float data)
	{
		this->cpp=cpp;
		this->dbms=dbms;
		this->web=web;
		this->net=net;
		this->data=data;
	}
	float total()
	{
		return cpp+dbms+web+net+data;
	}
	float avg()
	{
		return total()/5;
	}
	void showData()
	{
		cout<<"Total Score: "<<total()<<endl;
		cout<<"Average    : "<<avg()<<endl;
	}
};