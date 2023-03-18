#include<iostream>
#include<algorithm>
using namespace std;

struct Student{
	int y;
	int result;
};

bool cmp(Student s1,Student s2){
	return s1.y<s2.y;
}

int main(){
	Student student[100005];
	int count_0[100005]={0};
	int count_1[100005]={0};
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>student[i].y>>student[i].result;
	}
	sort(student,student+m,cmp);
	int i=0,j=1;
	int coing_0=0,coing_1=0;
	while(j<m){
		if(student[j].y==student[i].y){
			j++;
			continue;
		}
		int temp=0;
		while(i<j){
			if(student[i].result==0) temp++;
			count_0[i]=coing_0;
			i++;
		}
		coing_0+=temp;
	}
	while(i<j){
		count_0[i]=coing_0;
		i++;
	}
	for(int i=m-1;i>=0;i--){
		if(student[i].result ==1) coing_1++;
		count_1[i]=coing_1;
	}
	int ans =student[0].y;
	int num =count_0[0]+count_1[0];
	for(int i=1;i<m;i++){
		if(count_0[i]+count_1[i]>=num){
			num = count_0[i]+count_1[i];
			ans = student[i].y;
		}
	}
	cout<<ans<<endl;
	return 0; 
}
