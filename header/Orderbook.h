#pragma once
#include <map>
#include "Order.h"
#include "OrderbookLevelInfos.h"
#include "OrderModify.h"
#include "Trade.h"


class Orderbook {
private:
     struct OrderEntry {
         OrderPointer order_{nullptr};
         OrderPointers::iterator location_;
     };

    std::map<Price, OrderPointers, std::greater<Price>> bids_;
    std::map<Price, OrderPointers, std::less<Price>> asks_;
    std::unordered_map<OrderId, OrderEntry> orders_;


    bool CanMatch(Side side, Price price) const;
    Trades MatchOrders();

public:
    std::size_t Size() const {return orders_.size();}

    Trades AddOrder(OrderPointer const &order);
    void CancelOrder(OrderId orderId);
    Trades ModifyOrder(OrderModify const &order);
    OrderbookLevelInfos GetOrderInfos() const;

};
