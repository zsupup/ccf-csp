#include<iostream>
#include<cmath>
using namespace std;

struct Course{
	int form;//前驱 
	int day;//消耗时间 
	int start;//最早开始 
	int last_start;//最晚开始 
};
Course course[105];
int main(){
	int max=-1;
	int n,m;//总天数和科目数 
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>course[i].form;
		course[i].start =1;
		course[i].last_start =0;
	}
	for(int i=0;i<m;i++){
		cin>>course[i].day;
	}
	for(int i=0;i<m;i++){
		if(course[i].form!=0){
			//该门科目的最早开始时间为前驱课最早结束时间 
			course[i].start =course[course[i].form-1].start +course[course[i].form -1].day;
		}
		//输出最早开始时间 
		cout<<course[i].start<<" ";
		//判断是否能上完课 
		if((course[i].day +course[i].start) >max)
			max=course[i].day +course[i].start -1;
	}
	
	//能上完输出 
	if(max<=n){
		cout<<endl;
		//从后往前 
		for(int i=m-1;i>=0;i--){
			if(course[i].last_start ==0)w
				course[i].last_start =n-course[i].day +1;
			if(course[i].form !=0){
				int temp=course[i].last_start -course[course[i].form-1].day;
				if(course[course[i].form -1].last_start ==0){
					course[course[i].form-1].last_start =temp;
				}else{
					course[course[i].form-1].last_start =min(temp,course[course[i].form-1].last_start);
				}
			}
		}
		for(int i=0;i<m;i++){
			cout<<course[i].last_start<<" ";
		}
		return 0;
	}
}
