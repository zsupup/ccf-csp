#include<iostream>
#include<cmath>
using namespace std;

struct Course{
	int form;//ǰ�� 
	int day;//����ʱ�� 
	int start;//���翪ʼ 
	int last_start;//����ʼ 
};
Course course[105];
int main(){
	int max=-1;
	int n,m;//�������Ϳ�Ŀ�� 
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
			//���ſ�Ŀ�����翪ʼʱ��Ϊǰ�����������ʱ�� 
			course[i].start =course[course[i].form-1].start +course[course[i].form -1].day;
		}
		//������翪ʼʱ�� 
		cout<<course[i].start<<" ";
		//�ж��Ƿ�������� 
		if((course[i].day +course[i].start) >max)
			max=course[i].day +course[i].start -1;
	}
	
	//��������� 
	if(max<=n){
		cout<<endl;
		//�Ӻ���ǰ 
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
