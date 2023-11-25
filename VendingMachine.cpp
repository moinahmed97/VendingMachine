/******************************************************************************
Moin Syed

*******************************************************************************/
#include <iostream>

using namespace std;

class cashRegister{
    private:
        int cashOnHand;
    public:
        cashRegister(){
            cashOnHand= 500;
}

cashRegister(int x){
    cashOnHand = x;
}
int getCurrentBalance(){
    return cashOnHand;
}
void acceptAmount(int x){
    cashOnHand +=x;
}
};

class dispenserType
{
    private:
        int numberOfItems;
        int cost;
    public:
    dispenserType(){
        numberOfItems = 50;
        cost = 50;
}
dispenserType(int x, int y){
    cost = x;
    numberOfItems = y;
}
int getNoOfItems(){
    return numberOfItems;
}
int getCost(){
    return cost;
}
void makeSale(){
    numberOfItems--;
}

};
void showSelection(int cost){
    cout<<"Cost of the selected product is "<<cost<<endl;
    cout<<"Please deposit this amount"<<endl;
}

void sellProduct(dispenserType x, cashRegister y){
    int cost = x.getCost();
    int money;
    cin>>money;
    if(money>=cost)
    {
        x.makeSale();
        y.acceptAmount(money);
        cout<<"Collect your item below and enjoy!"<<endl;
    }
    else
        cout<<"You have deposited less amount"<<endl;
    }
void candy(){
    cout<<"Welcome to the candy machine"<<endl;
    cout<<"These are the different products you can buy from this machine"<<endl;
    cout<<"Press 1 for Candies"<<endl;
    cout<<"Press 2 for Chips"<<endl;
    cout<<"Press 3 for Gums"<<endl;
    cout<<"Press 4 for Cookies"<<endl;
    cout<<"Press 5 to  exit"<<endl;
    cashRegister c;
    dispenserType candy;
    dispenserType cookies;
    dispenserType chips;
    dispenserType gums(10,50);
    int x;
    cin>>x;
    switch(x){
        case 5:
         break;
    }
}
int main(){
    cout<<"Welcome to the candy machine"<<endl;
    cout<<"These are the different products you can buy from this machine"<<endl;
    cout<<"Press 1 for Candies"<<endl;
    cout<<"Press 2 for Chips"<<endl;
    cout<<"Press 3 for Gums"<<endl;
    cout<<"Press 4 for Cookies"<<endl;
    cout<<"Press 5 to  exit"<<endl;
    cashRegister c;
    dispenserType candy;
    dispenserType cookies;
    dispenserType chips;
    dispenserType gums(10,50);
    int x;
    cin>>x;
    while(x<1 && x>5){
        cout<<"Wrong selection. select a number between 1 and 4"<<endl;
        cin>>x;
        }
    switch(x){
        case 1:
            if(candy.getNoOfItems()>0){
            int cost=candy.getCost();
            showSelection(cost);
            sellProduct(candy,c);
            main();
            

            
    }
    case 2:
        if(chips.getNoOfItems()>0){
        int cost=chips.getCost();
        showSelection(cost);
        sellProduct(chips,c);
        main();
        

        
    }
    case 3:
        if(gums.getNoOfItems()>0){
        int cost=gums.getCost();
        showSelection(cost);
        sellProduct(gums,c);
        main();
        

        
    }
    main();
        case 4:
        if(cookies.getNoOfItems()>0){
        int cost=cookies.getCost();
        showSelection(cost);
        sellProduct(cookies,c);
        main();

        }
        case 5:
           break;
}
}   




