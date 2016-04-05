#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

int main(){
	vector<int> w;
	int W=0,total=0;

	ifstream inFile("file.in",ios::in);
	
	if(!inFile){
		cout<<"File opening Error!"<<endl;
		exit(1);
	}
	
	/*************************
	 * 檔案資料存入vector w  *
	 *                       *
	 *************************/
	while(inFile>>W){
		w.push_back(W);
	}
	
	/*********************
	 *sort vector w的值  *
	 *                   *
	 *********************/
	sort(w.begin()+1,w.end());

	/***************
	 *計算total值  *
	 *             *
	 ***************/
	for(int i=0;i<5;i++){
		W = w.back();
		total += W;
		w.pop_back();
	}
	//print it out
	cout<<total<<endl;
}
