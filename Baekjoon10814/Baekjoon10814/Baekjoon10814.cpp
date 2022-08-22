// Baekjoon10814.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

//vector<string> MergeSort(vector<string> data);
//vector<string> Merge(vector<string> leftdata, vector<string> rightdata);
bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}
int main()
{
	int length;
	cin >> length;
	vector<pair<int,string>> datas;
	for (int i = 0; i < length; i++)
	{
		int dataage;
		string  dataname;
		cin >> dataage >> dataname;
		datas.push_back(make_pair(dataage,dataname));
	}
	stable_sort(datas.begin(), datas.end(), compare);
	//datas=MergeSort(datas);
	for (int i = 0; i < datas.size(); i++)
	{
		cout << datas[i].first<<' '<<datas[i].second << '\n';
	}
}
//vector<string> MergeSort(vector<string> data)
//{
//	if (data.size() == 1)
//	{
//		return data;
//	}
//	int mid = data.size() / 2;
//	vector<string> lefttempvector(data.begin(), data.begin() + mid);
//	vector<string> righttempvector(data.begin() + mid, data.end());
//	vector<string> leftvector = MergeSort(lefttempvector);
//	vector<string> rightvector = MergeSort(righttempvector);
//	return Merge(leftvector, rightvector);
//}
//vector<string> Merge(vector<string> leftdata, vector<string> rightdata)
//{
//	vector<string> datas;
//	while (leftdata.size() > 0 && rightdata.size() > 0)
//	{
//		if (leftdata[0][0] > rightdata[0][0] || (leftdata[0][0] == rightdata[0][0] && leftdata[0][1] > rightdata[0][1]))
//		{
//			datas.push_back(rightdata[0]);
//			rightdata.erase(rightdata.begin());
//		}
//		else
//		{
//			datas.push_back(leftdata[0]);
//			leftdata.erase(leftdata.begin());
//		}
//	}
//	while (leftdata.size() > 0)
//	{
//		datas.push_back(leftdata[0]);
//		leftdata.erase(leftdata.begin());
//	}
//	while (rightdata.size() > 0)
//	{
//		datas.push_back(rightdata[0]);
//		rightdata.erase(rightdata.begin());
//	}
//	return datas;
//}
//
