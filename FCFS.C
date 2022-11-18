#include<bits/stdc++.h>
using namespace std;

void answer(int processes[], int n,int bt[], int at[], int wt[],int tat[],int et[])
{
		bool done = true;
		wt[0]=0;
		tat[0]=bt[0]+wt[0];
		for (int i = 1 ; i < n; i++)
		{
			if(at[i]>tat[i-1])
			{
				et[i]=at[i]+bt[i];
				tat[i]=et[i]-at[i];
			}
			else
			{
				et[i]=tat[i-1]+bt[i];
				tat[i]=et[i]-at[i];
			}
		}
		for (int i = 0 ; i < n; i++)
		{
			wt[i]=tat[i]-bt[i];
		}
		int avg=0;
		for (int i = 0 ; i < n; i++)
		{
			avg+=wt[i];
		}
			
		
	cout << "\t\tBT\t\t"<< "AT\t\t"<< "WT\t\t" << "TAT\t\t\n";

	for (int i=0; i<n; i++)
	{
		cout << "\t\t" << bt[i] <<"\t\t"<< at[i] <<"\t\t"<< wt[i] <<"\t\t" << tat[i] <<endl;
	}

	cout << "Average waiting time = "
		<< (float)avg / (float)n<<"\n";
		
}
