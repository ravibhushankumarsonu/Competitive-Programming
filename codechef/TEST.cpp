#include <bits/stdc++.h>

using namespace std;
int main()
 {
	int i[99],j;
	for(j=0;j<99;)
	{
	scanf("%d",&i[j]);
	if(i[j]>=0&&i[j]<100)
	j++;
	else
	break;
}
	for(j=0;j<99;j++)
	{
		if(i[j]==42)
		break;
		else
		printf("\n %d",i[j]);
    }
    
    return 0;
} 