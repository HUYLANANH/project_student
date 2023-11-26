#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <climits>
#include<stack>
using namespace std;
int so_dinh;
int ma_tran[100][100];
int dem = 0, dem_min = 10000;
vector<int> duong_di_min, duong_di_now;
int dinh_bat_dau, dinh_tim;
void start()
{
    cout << "chon dinh bat dau:";
    cin >> dinh_bat_dau;
    dinh_bat_dau--;
    cout << "chon dinh tim:";
    cin >> dinh_tim;
    dinh_tim--;
}
void dfs( int dinh)
{
    duong_di_now.push_back(dinh);
    if (dinh == dinh_tim)
    {
        if (dem < dem_min)
        {
            duong_di_min.clear();
            for (int j = 0; j < duong_di_now.size(); j++)
                duong_di_min.push_back(duong_di_now[j]);
            dem_min = dem;
        }
    }

    if (dinh != dinh_tim)
    {
        for (int j = 0; j < so_dinh; j++)
        {
            if (ma_tran[dinh][j] != 0 && find(duong_di_now.begin(),duong_di_now.end(),j) == duong_di_now.end())
            {
                dem += ma_tran[dinh][j];
                dfs(j);
                dem -= ma_tran[dinh][j];
                duong_di_now.pop_back();
            }
        }
    }
}
void induongdi()
{
    for (int i = 0; i < duong_di_min.size(); i++) 
        cout << duong_di_min[i]+1 << " ";
    cout << dem_min;
}
int main()
{
    ifstream input_file("D:\\input.txt");
    input_file >> so_dinh;
    for (int i = 0; i < so_dinh; ++i)
    {
        for (int j = 0; j < so_dinh; ++j) {
            input_file >> ma_tran[i][j];
        }
    }
    input_file.close();
    start();
    dfs(dinh_bat_dau);
    induongdi();
}
