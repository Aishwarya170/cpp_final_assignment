#include<iostream>
using namespace std;

class grade
{
	public:
	float attendance,test_score,total_score,a = 0.80;
	int x,y,z;
	void input()
	{
		cout<<"Enter attendance\n";
		cin>> attendance;
		cout<<"Enter test score\n";
		cin>> test_score;
		cout<<"Enter total score\n";
		cin>> total_score;
	}
	void output()
	{
		if(attendance >=70)
		{
			x =1;
		}
		if(test_score >a || test_score == a)
		{ cout<<"inside test score\n";
			y = 1;
		}
		if(total_score >=7000)
		{
			z = 1;
		}

		if(x == 1 && y == 1 && z == 1)
		{
			cout<<"res:10\n";
		}
		else if(x == 1 && y == 1)
		{
			cout<<"res:9\n";
		}
		else if(y == 1 && z == 1)
		{
			cout<<"res:8\n";
		}
		else if(x == 1 && z == 1 )
		{
			cout<<"res:7\n";
		}
		else if(x == 1 || y == 1 || z == 1)
		{
			cout<<"res:6\n";
		}
		else
		{
			cout<<"res:5\n";
		}
					
	}

};

int main()
{
	grade ob1;
	ob1.input();
	ob1.output();
	return 0;
}
