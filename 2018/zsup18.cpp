//201803-1 ��һ�� 
//#include<iostream>
//using namespace std;
//int a[40];
//int main(){
//	int res=0;
//	for(int i=0;;i++){
//		cin>>a[i];
//		if(!a[i]) break;
//		if(a[i]==1) res+=1;
//		else{
//			if(i==0||a[i-1]==1){
//				res+=2;
//				a[i]=2;
//			}else{
//				res+=a[i-1]+2;
//				a[i]=a[i-1]+2;
//			}
//		}
//	}
//	cout<<res;
//	return 0;
//} 
//
////201803-1 ��һ�� 
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//    int x;
//    int sum=0;
//    int num2=0;
//    while(cin>>x&&x!=0)
//    {
//       if(x==1)
//       {
//           sum++;
//           num2=0;
//       }
//        else if(x==2)
//        {
//            num2++;
//        }
//        sum+=num2*2;
//    }
//    cout<<sum<<endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main(){
//	int x;
//	int sum=0,twocnt=0;
//	while(cin>>x&&x){
//		if(x==1){
//			sum++;
//			twocnt=0;
//		}else if(x==2){
//			twocnt++;
//		}
//		sum+=twocnt*2;
//	}
//	cout<<sum;
//	return 0;
//}


//201803-2 ��ײ��С��
//#include<iostream>
//using namespace std;
//int a[110];
//bool dir[110];
//int main(){
//	int n,L,t;
//	cin>>n>>L>>t;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	while(t--){
//		for(int i=0;i<n;i++){
//			if(dir[i]) a[i]--;
//			else a[i]++;
//			if(a[i]>L){
//				a[i]=L-1;
//				dir[i]=!dir[i];
//			}
//			if(a[i]<0){
//				a[i]=1;
//				dir[i]=!dir[i];
//			}
//			for(int j=0;j<i;j++){
//				if(a[i]==a[j]){
//					dir[i]=!dir[i];
//					dir[j]=!dir[j];
//					break;
//				}
//			}
//		}
//	}
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//	return 0;
//} 


//201803-2 ��ײ��С��
//#include<iostream>
//using namespace std;
//int a[110]; // �洢ÿ��С���λ��
//bool dir[110]; // �洢ÿ��С��ķ���
//int main(){
//    int n,L,t; // n: С��������L: �᳤�ȣ�t: �˶�ʱ��
//    cin>>n>>L>>t;
//    for(int i=0;i<n;i++){
//        cin>>a[i]; // ����ÿ��С��ĳ�ʼλ��
//    }
//    while(t--){ // ѭ�� t ��
//        for(int i=0;i<n;i++){ // ��������С��
//            if(dir[i]) a[i]--; // ���С����Ϊ��λ�ü�һ
//            else a[i]++; // ����λ�ü�һ
//            if(a[i]>L){ // ���С�򵽴��Ҷ˵�
//                a[i]=L-1; // ����
//                dir[i]=!dir[i]; // �ı䷽��
//            }
//            if(a[i]<0){ // ���С�򵽴���˵�
//                a[i]=1; // ����
//                dir[i]=!dir[i]; // �ı䷽��
//            }
//            for(int j=0;j<i;j++){ // ����Ƿ�������С������
//                if(a[i]==a[j]){ 
//                    dir[i]=!dir[i]; // �ı䷽��
//                    dir[j]=!dir[j];
//                    break;
//                }
//            }
//        }
//    }
//    for(int i=0;i<n;i++){ // ���ÿ��С�������λ��
//        cout<<a[i]<<" ";
//    }
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int a[110];
//bool dir[110];
//int main(){
//	int n,L,t;
//	cin>>n>>L>>t;
//	for(int i=0;i<n;i++) cin>>a[i];
//	while(t--){
//		
//		for(int i=0;i<n;i++){
//			if(dir[i]) a[i]--;
//			else a[i]++;
//			
//			if(a[i]>L){//ע���Ǵ��ڣ����ǵ��� 
//				a[i]=L-1;
//				dir[i]=!dir[i];
//			}
//			if(a[i]<0){//ע����С�ڣ����ǵ��� 
//				a[i]=1;
//				dir[i]=!dir[i];
//			}
//			for(int j=0;j<n;j++){
//				if(a[i]==a[j]){
//					dir[i]=!dir[i];
//					dir[j]=!dir[j];
//					break;
//					
//				}
//			}
//		}
//	}
//	for(int i=0;i<n;i++)
//		cout<<a[i]<<" ";
//	return 0; 
//}


//201803-3 URLӳ��
//#include<iostream>
//#include<regex>
//using namespace std;
//int n,m;string p,r;
//inline bool isStringDigit(const string &s){
//    for(char c:s) if(c<'0'||c>'9') return 0;
//    return 1;
//}
//int main(){
//    cin>>n>>m;
//    vector<pair<string,regex>>rules;//�洢URL����ӳ��Ϊ������->�����������ʽ
//    vector<pair<regex,string>>trans={
////        {regex("<int>"),"([0-9]+)"},{regex("<str>"),"([^/]+)"},{regex("<path>"),"(.+)"}
//        {regex("<int>"),"(\\d+)"},{regex("<str>"),"(\\w+)"},{regex("<path>"),"(.+)"}
//    };
//    while(n--){
//        cin>>p>>r;
//        for(auto&i:trans)
//            p=regex_replace(p,i.first,i.second);//������ת��Ϊ��Ӧ��������ʽ
//        rules.push_back({r,regex(p)});//������˳��ѹ��rules��
//    }
//    smatch result;
//    while(m--){
//        cin>>p;
//        for(auto &i:rules)//��ÿ��������һ����ƥ��
//            if(regex_match(p,result,i.second)){//ƥ��ɹ�
//                printf("%s",i.first.c_str());//���������
//                for(auto i=1;i<=result.size();++i){//����ÿһ��ƥ�䵽��Ԫ��
//                    p=result.str(i).c_str();
//                    if(p!=""&&isStringDigit(p))//������
//                        printf(" %d",stoi(p));//���ת����������������Զ�ȥ����ǰ��0
//                    else
//                        printf(" %s",p.c_str());//���
//                }
//                puts("");//����
//                goto loop;//ƥ��ɹ���ֱ��ƥ����һ��URL��ַ
//            }
//        puts("404");//û��ƥ�䵽�κ�һ���������404
//        loop:;
//    }
//    return 0;
//}

//201803-3 URLӳ��
//#include<iostream>
//#include<regex>
//using namespace std;
//int n,m;
//string p,r;

//�ж��ַ����Ƿ�Ϊ����
//inline bool isStringDigit(const string &s){
//    for(char c:s) if(c<'0'||c>'9') return 0;
//    return 1;
//}
//
//int main(){
//    cin>>n>>m;
//    vector<pair<string,regex>>rules;//�洢URL����ӳ��Ϊ������->�����������ʽ
//    vector<pair<regex,string>>trans={
//        {regex("<int>"),"(\\d+)"},{regex("<str>"),"(\\w+)"},{regex("<path>"),"(.+)"}
//    };
//    while(n--){
//        cin>>p>>r;
//        for(auto&i:trans)
//            p=regex_replace(p,i.first,i.second);//������ת��Ϊ��Ӧ��������ʽ
//        rules.push_back({r,regex(p)});//������˳��ѹ��rules��
//    }
//    smatch result;
//    while(m--){
//        cin>>p;
//        for(auto &i:rules)//��ÿ��������һ����ƥ��
//            if(regex_match(p,result,i.second)){//ƥ��ɹ�
//                printf("%s",i.first.c_str());//���������
//                for(auto i=1;i<=result.size();++i){//����ÿһ��ƥ�䵽��Ԫ��
//                    p=result.str(i).c_str();
//                    if(p!=""&&isStringDigit(p))//������
//                        printf(" %d",stoi(p));//���ת����������������Զ�ȥ����ǰ��0
//                    else
//                        printf(" %s",p.c_str());//���
//                }
//                puts("");//����
//                goto loop;//ƥ��ɹ���ֱ��ƥ����һ��URL��ַ
//            }
//        puts("404");//û��ƥ�䵽�κ�һ���������404
//        loop:;
//    }
//    return 0;
//}

//#include<iostream>
//#include<vector>
//#include<regex>
//using namespace std;
//inline bool isStringDigit(const string &s){
//	for(char c:s) if(c<'0'||c>'9') return 0;
//	return 1;
//}
//int main(){
//	int n,m;
//	string p,r; 
//	cin>>n>>m;
//	vector<pair<string,regex>> rules;//�洢URL����ӳ��Ϊ������->�����������ʽ
//	vector<pair<regex,string>> trans={//ת������ 
//		{regex("<int>"),"(\\d+)"},{regex("<str>"),"(\\w+)"},{regex("<path>"),"(.+)"}
//	};
//	while(n--){
//		cin>>p>>r;
//		for(auto &i:trans){
//			p=regex_replace(p,i.first,i.second);
//		rules.push_back({r,regex(p)});
//		}
//	}
//	smatch result; 
//	while(m--){
//		cin>>p;
//		for(auto &i:rules)
//			if(regex_match(p,result,i.second)){
//				cout<<i.first.c_str();
//				for(auto i=1;i<=result.size();++i){
//					p=result.str(i).c_str();
//					if(p!="" && isStringDigit(p))
//						cout<<' '<<stoi(p);
//					else
//						cout<<' '<<p.c_str(); 
//				}
//				puts("");
//				goto loop; 
//			}
//		puts("404");
//		loop:;
//	}
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<regex>
//using namespace std;
//inline bool isStringdigit(const string &s){
//	for(char c:s) if(c<'0'||c>'9') return 0;
//	return 1;
//}
//int main(){
//	int n,m;
//	string p,r;
//	cin>>n>>m;
//	vector<pair<string,regex>> rules;
//	vector<pair<regex,string>> trans{
//		{regex("<int>"),"(\\d+)"},{regex("<str>"),"(\\w+)"},{regex("<path>"),"(.+)"}
//	};
//	while(n--){
//		cin>>p>>r;
//		for(auto &i:trans)
//			p=regex_replace(p,i.first,i.second);
//		rules.push_back({r,regex(p)});
//	}
//	smatch result;
//	while(m--){
//		cin>>p;
//		for(auto &i:rules)
//			if(regex_match(p,result,i.second)){
//				cout<<i.first.c_str();
//				for(auto i=1;i<=result.size();++i){
//					p=result.str(i).c_str();
//					if(p!="" && isStringdigit(p))
//						cout<<' '<<stoi(p);
//					else
//						cout<<' '<<p.c_str();
//				}
//				puts("");
//				goto loop;
//			}
//		puts("404");
//		loop:;
//	}
//	return 0;
//}

//�������



//201809-1 ����
//#include<iostream>
//using namespace std;
//const int N =1010;
//int n;
//int a[N];
//int res[N];
//int main(){
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	int bn=0,p=0,ed=0;
//	for(int i=0;i<n;i++){
//		p=i,bn=i-1,ed=i+1;
//		if(p==0){
//			res[i]=(a[p]+a[ed])/2;
//		}
//		else if(p==n-1){
//			res[i]=(a[bn]+a[p])/2;
//		}
//		else res[i]=(a[bn]+a[p]+a[ed])/3;
//		cout<<res[i]<<' ';
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int a[1005];
//int b[1005];
//int main(){
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++) cin>>a[i];
//	for(int i=1,j=0,k=2;i<=n;i++,j++,k++)
//		b[i]=(a[i]+a[j]+a[k])/((i==1||i==n)?2:3);
//	for(int j=1;j<=n;j++) cout<<b[j]<<' ';
//	return 0;
//}

////201809-2 ���
//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N=1000000;
//int t[N]={0};
//int main(){
//	int n;
//	cin>>n;
//	for(int i=0;i<n*2;i++){
//		int l,r;
//		cin>>l>>r;
//		for(int j=l;j<r;j++)
//			t[j-1]++;
//	}
//	cout<<count(t,t+N,2);
//	return 0;
//} 

//#include<cstdio>
//#include<algorithm>
//using namespace std;
//const int N=1000000;
//int t[N]={0};
//int main(){
//    int n;
//    scanf("%d",&n);
//    for(int i=0;i<n*2;i++){
//        int l,r;
//        scanf("%d%d",&l,&r);
//        t[l-1]++;
//        t[r-1]--;
//    }
//    int ans=0,sum=0;
//    for(int i=0;i<N;i++){
//        sum+=t[i];
//        if(sum==2) ans++;
//    }
//    printf("%d",ans);
//    return 0;
//}

//#include<cstdio>
//#include<algorithm>
//using namespace std;
//const int N=1000000;
//int t[N+1]={0};
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i=0;i<n*2;i++){
//		int l,r;
//		scanf("%d %d",&l,&r);
//		t[l-1]++;
//		t[r-1]--;
//	}
//	int ans=0,sum=0;
//	for(int i=0;i<N;i++){
//		sum+=t[i];
//		if(sum==2) ans++;
//	}
//	printf("%d",ans);
//	return 0;
//}

////Ԫ��ѡ���� 	201809-3
//#include<iostream>
//#include<vector>
//#include<set>
//#include<map>
//#include<cstring>
//using namespace std;
//typedef pair<string,int> P;
//map<P,vector<int> > G;
//map<P,vector<int> >::iterator it;
//int max_dp,n,m;
//void toLower(string& s){for(int i=0,ni=s.size();i<ni;++i)s[i]=tolower(s[i]);}


//void find(int vi,int dp,set<int>&s,const vector<string>&v,const int& N){
//	if(dp>max_dp||vi>N) return;
//	if((it=G.find(P(v[vi],dp)))!=G.end()){
//		if(vi==N)
//			s.insert(it->second.begin(),it->second.end());
//		else
//			find(vi+1,dp+2,s,v,N);
//	}
//	find(vi,dp+2,s,v,N);
//}

//int main(){
//	string s;
//	cin>>n>>m,cin.get(),max_dp=0;
//	for(int i=0,j,nj,l;i<n;++i){
//		getline(cin,s),j=0,nj=s.size();
//		while(j<nj&&s[j]=='.')++j;
//		l=j;
//  		while(j<nj&&s[j]!=' ')++j;
//		string label=s.substr(l,j-l);
//		max_dp=max(max_dp,l),toLower(label);
//		G[P(label,l)].emplace_back(i+1);
//		while(j<nj&&s[j]==' ')++j;
//		if(j==nj)continue;
//		G[P(s.substr(j,nj-j),l)].emplace_back(i+1);
//	for(int i=0;i<m;++i){
//		getline(cin,s);
//		int j=0,nj=s.size(),l;
//		vector<string>V;
//		set<int>S;
//		while(j<nj){
//			l=j;
//			while(j<nj&&s[j]!=' ')++j;
//			string s1=s.substr(l,j-l);
//			if(s1[0]!='#')toLower(s1);
//			V.emplace_back(s1);
//			while(j<nj&&s[j]==' ')++j;
//		}
//		find(0,0,S,V,V.size()-1);
//		cout<<S.size();
//		for(set<int>::iterator it=S.begin();it!=S.end();++it) cout<<" "<<(*it);
//		cout<<endl;
//	}
//	return 0;
//}
// 

//#include<iostream>
//#include<algorithm>
//#include<map>
//#include<vector>
//#include<set>
//using namespace std;
//int max_dp;
//typedef pair<string,int> P;
//map<P,vector<int> > G;
//map<P,vector<int> >::iterator it;
//void toLower(string& s){for(int i=0,ni=s.size();i<ni;++i)s[i]=tolower(s[i]);}
//
//void find(int vi,int dp,set<int> &s,const vector<string> &v,const int &N){
//	if(dp>max_dp || vi>N) return;
//	if((it=G.find(P(v[vi],dp)))!=G.end()){
//		if(vi==N)
//			s.insert(it->second.begin(),it->second.end());
//		else
//			find(vi+1,dp+2,s,v,N);
//	}
//	find(vi,dp+2,s,v,N);
//}


//void find(int vi,int dp,set<int>&s,const vector<string>&v,const int& N){
//	if(dp>max_dp||vi>N) return;
//	if((it=G.find(P(v[vi],dp)))!=G.end()){
//		if(vi==N)
//			s.insert(it->second.begin(),it->second.end());
//		else
//			find(vi+1,dp+2,s,v,N);
//	}
//	find(vi,dp+2,s,v,N);
//}

//int main(){
//	string s;
//	int n,m,max_dp=0;
//	cin>>n>>m;
//	cin.get();
	
//	for(int i=0,j,nj,l;i<n;++i){
//		getline(cin,s);
//		j=0,nj=s.size();
//		while(j<nj && s[j]=='.') ++j;
//		l=j;
//		while(j<nj && s[j]!=' ') ++j;
//		string label=s.substr(l,j-l);
//		max_dp=max(max_dp,l),toLower(label);
//		G[P(label,l)].emplace_back(i+1);
//		while(j<nj && s[j]==' ') ++j;
//		if(j==nj) continue;
//		G[P(s.substr(j,nj-j),l)].emplace_back(i+1); 
//	}
//	

	
//	for(int i=0;i<m;i++){
//		getline(cin,s);
//		int j=0,nj=s.size(),l;
//		vector<string> V;
//		set<int> S;
//		while(j<nj){
//			l=j;
//			while(j<nj && s[j]!=' ') ++j;
//			string s1=s.substr(l,j-l);
//			if(s1[0]!='#') toLower(s1);
//			V.emplace_back(s1);
//			while(j<nj && s[j]==' ') ++j; 
//		}
//		find(0,0,S,V,V.size()-1);
//		cout<<S.size();
//		for(set<int>::iterator it=S.begin();it!=S.end();++it) cout<<' '<<(*it);
//		cout<<endl;
//	}
//	
//	
//	return 0;
//} 

//201812-1 С����ѧ
//#include<iostream>
//using namespace std;
//int main(){
//	int r,y,g;
//	cin>>r>>y>>g;
//	int n;
//	cin>>n;
//	int res=0;
//	while(n--){
//		int k,t;
//		cin>>k>>t;
//		if(!k) res+=t;
//		else{
//			if(k==3) continue;
//			if(k==1) res+=t;
//			else res+=(r+t);
//		}
//	}
//	cout<<res;
//	return 0;
//} 

//#include<iostream>
//using namespace std;
//int main(){
//    int r,y,g; //������̵�ʱ��
//    cin>>r>>y>>g; //������̵�ʱ��
//    int n; //����·������
//    cin>>n; //����·������
//    int res=0; //������ʱ�䲢��ʼ��Ϊ0
//    while(n--){ //ѭ������ÿ��·�ڵ�״̬
//        int k,t;
//        cin>>k>>t;
//        if(!k) res += t; //����ǵ�·��ֱ�Ӽ���ͨ��ʱ��
//        else if(k == 1) res += t; //����Ǻ�ƣ�����ʣ��ȴ�ʱ��
//        else if(k == 2) res += (r + t); //����ǻƵƣ�����ʣ��ȴ�ʱ��ͺ��ʱ��
//        else continue; //������̵ƣ����õȴ�������ѭ��
//    }
//    cout<<res; //�����ʱ��
//    return 0;
//}


//#include<iostream>
//using namespace std;
//int main(){
//	int r,y,g,n;
//	cin>>r>>y>>g;
//	cin>>n;
//	int ans=0;
//	while(n--){
//		int k,t;
//		cin>>k>>t;
//		if(!k) ans+=t;
//		else if(k==1) ans+=t;
//		else if(k==2) ans+=(r+t);
//		else continue;
//	}
//	cout<<ans;
//	return 0;
//}
//201812-2 С����ѧ
//#include<iostream>
//using namespace std;
//int main(){
//	int r,y,g,n;
//	cin>>r>>y>>g>>n;
//	int cnt=0;
//	while(n--){
//		int k,t;
//		cin>>k>>t;
//		if(!k){
//			cnt+=t;
//			continue;
//		}else{
//			if(k==1) t=r-t;
//			else if(k==2) t=r+g+y-t;
//			else t=r+g-t;
//			t=(t+cnt)%(r+g+y);
//			if(t>=0&&t<r) cnt+=(r-t);
//			else if(t>=r&&t<r+g) cnt+=0;
//			else if(t>=r+g&&t<r+g+y) cnt+=(r+g+y-t)+r;
//		}
//	}
//	cout<<cnt;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//long long r,y,g,n,ans,k,t,mod,tmp;
//long long get(const long long &t){
//	if(t<r)
//		return r-t;
//	if(t<r+g)
//		return 0L;
//	return mod-t+r;
//}
//int main(){
//	cin>>r>>y>>g>>n,mod=r+y+g,ans=0L;
//	for(int i=0;i<n;++i){
//		cin>>k>>t,tmp=ans;
//		switch(k){
//			case 0L:
//				ans+=t;
//				break;
//			case 1L://r
//				ans+=get((r-t+ans)%mod);
//				break;
//			case 2L://y
//				ans+=get((mod-t+ans)%mod);
//				break;
//			case 3L://g
//				ans+=get((g-t+r+ans)%mod);
//				break;
//		}
//	}
//	cout<<ans<<endl;
//	return 0;
//}

#include<iostream>
using namespace std;
long long r,y,g,n,ans,k,t,mod,temp;
long long get(const long long &t){
	if(t<r)
		return r-t;
	if(t<r+g)
		return 0L;
	return mod-t+r;
}
int main(){
	cin>>r>>y>>g>>n;
	mod=r+y+g;
	ans=0L;
	for(int i=0;i<n;++i){
		cin>>k>>t;
		temp=ans;
		switch(k){
			case 0L:
				ans+=t;
				break;
			case 1L:
				ans+=get((r-t+ans)%mod);
				break;
			case 2L:
				ans+=get((mod-t+ans)%mod);
				break;
			case 3L:
				ans+=get((g-t+r+ans)%mod);
				break;
		}	
	}
	cout<<ans;
	return 0;
} 


