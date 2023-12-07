#include<iostream>
using namespace std;


int main()
{
	double AugMatrix[3][6];
	//identity matrix
	AugMatrix[0][3]=1;
	AugMatrix[0][4]=0;
	AugMatrix[0][5]=0;
	
	AugMatrix[1][3]=0;
	AugMatrix[1][4]=1;
	AugMatrix[1][5]=0;
	
	AugMatrix[2][3]=0;
	AugMatrix[2][4]=0;
	AugMatrix[2][5]=1;
	
	//matrix from Linear Equation
	cout<<"Enter The Values:";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>AugMatrix[i][j];
		}
	}
	
	//Now let's start solving the equation by using these tips and tricks
	//Divide Row [1] by first letter
	for(int j=0;j<6;j++)
	{
		AugMatrix[0][j]=AugMatrix[0][j]/AugMatrix[0][0];
	}
	cout<<"Step1:R1/a11"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<6;j++)
		{
			cout<<AugMatrix[i][j];
			cout<<"   ";
		}
		cout<<endl;
	}

	
	//Row[2] - a21 × Row[1]
	for(int j=0;j<6;j++)
	{
		AugMatrix[1][j]=AugMatrix[1][j]-AugMatrix[1][0]*AugMatrix[0][j];
	}
	cout<<"Row[2] - a21 * Row[1]"<<endl;
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<6;j++)
		{
			cout<<AugMatrix[i][j];
			cout<<"   ";
		}
		cout<<endl;
	}
	
	//Row[3] - a31 * Row[1]
	for(int j=0;j<6;j++)
	{
		AugMatrix[2][j]=AugMatrix[2][j]-AugMatrix[2][0]*AugMatrix[0][j];
	}
	cout<<"Row[3] - a31 * Row[1]"<<endl;
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<6;j++)
		{
			cout<<AugMatrix[i][j];
			cout<<"   ";
		}
		cout<<endl;
	}
	
	//Divide Row [2] by a22
	for(int j=0;j<6;j++)
	{
		AugMatrix[1][j]=AugMatrix[1][j]/AugMatrix[1][1];
	}
	cout<<"Divide Row [2] by a22"<<endl;
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<6;j++)
		{
			cout<<AugMatrix[i][j];
			cout<<"   ";
		}
		cout<<endl;
	}
	
	//Row[1] - a12 * Row[2] 
	for(int j=0;j<6;j++)
	{
		AugMatrix[0][j]=AugMatrix[0][j]-AugMatrix[0][1]*AugMatrix[1][j];
	}
	cout<<"Divide Row [2] by a22"<<endl;
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<6;j++)
		{
			cout<<AugMatrix[i][j];
			cout<<"   ";
		}
		cout<<endl;
	}
	
	//Row[3] - a32 * Row[2] 
	for(int j=0;j<6;j++)
	{
		AugMatrix[2][j]=AugMatrix[2][j]-AugMatrix[2][1]*AugMatrix[1][j];
	}
	cout<<"Row[3] - a32 * Row[2]"<<endl;
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<6;j++)
		{
			cout<<AugMatrix[i][j];
			cout<<"   ";
		}
		cout<<endl;
	}
	
	//Divide Row [3] by a33 
	for(int j=0;j<6;j++)
	{
		AugMatrix[2][j]=AugMatrix[2][j]/AugMatrix[2][2];
	}
	cout<<"Divide Row [3] by a33 "<<endl;
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<6;j++)
		{
			cout<<AugMatrix[i][j];
			cout<<"   ";
		}
		cout<<endl;
	}
	
	//Row[1] - a13 * Row[3] 
	for(int j=0;j<6;j++)
	{
		AugMatrix[0][j]=AugMatrix[0][j]-AugMatrix[0][2]*AugMatrix[2][j];
	}
	cout<<"Divide Row [3] by a33 "<<endl;
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<6;j++)
		{
			cout<<AugMatrix[i][j];
			cout<<"   ";
		}
		cout<<endl;
	}
	
	//Row[2] - a23 * Row[3]  
	for(int j=0;j<6;j++)
	{
		AugMatrix[1][j]=AugMatrix[1][j]-AugMatrix[1][2]*AugMatrix[2][j];
	}
	cout<<"Row[2] - a23 * Row[3]  "<<endl;
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<6;j++)
		{
			cout<<AugMatrix[i][j];
			cout<<"   ";
		}
		cout<<endl;
	}
	

	
	
}