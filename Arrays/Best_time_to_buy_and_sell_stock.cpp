#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int> & prices){
    int maxprofit=0;
    int bestBuy=prices[0];
    for (int i = 0; i < prices.size(); i++) {
        if(prices[i]>bestBuy){
            maxprofit=max(maxprofit,prices[i]-bestBuy);
        }
        bestBuy=min(bestBuy,prices[i]);
    }
    return maxprofit;
}

int main(){
    int size;
    cout<<"Enter Array size: ";
    cin>>size;
    vector <int> prices(size);
    for (int i = 0; i < size; i++) {
        cout<<"Enter prices: ";
        cin>>prices[i];
    }

    cout<<"Output: "<<maxProfit(prices);
}
