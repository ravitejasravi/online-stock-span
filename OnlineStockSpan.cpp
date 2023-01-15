class StockSpanner {
public:
    vector<int> PreviousStockPrices;

    StockSpanner() {
        
    }

    int next(int price) {

        int span = 1;
        
        for(int i = PreviousStockPrices.size()-1; i >= 0; i--)
            if(price >= PreviousStockPrices[i])
                span += 1;
            else
                break;

        PreviousStockPrices.push_back(price);
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */