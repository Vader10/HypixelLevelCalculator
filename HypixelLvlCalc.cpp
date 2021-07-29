#include <iostream>
using namespace std;
int curLvl;
int goal;
int curXP;
int getTotalXP(int lvl){
	int ans = 0;
	int cnt = 10000;
	for(int i = 1; i < lvl; i++){
		ans += cnt;
		cnt += 2500;
	}
	return ans;
}
int main(){
	cout<<"Hypixel Level Calculator by Vader100"<<endl;
	cout<<"What is your current Hypixel level? ";
	cin>>curLvl;
	cout<<endl;
	cout<<"How much XP until the next level? ";
	cin>>curXP;
	cout<<endl;
	cout<<"What is your goal? ";
	cin>>goal;
	cout<<endl;
	cout<<"You are "<<getTotalXP(goal)-getTotalXP(curLvl+1)+curXP<<" XP away from level "<<goal<<". "<<endl;
	return 0;
}
