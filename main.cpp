#include <iostream>

#include "header/Orderbook.h"

int main() {

    Orderbook book;
    const OrderId orderId = 5119;
    book.AddOrder(std::make_shared<Order>( OrderType::GoodTillCancel, orderId, Side::Buy, 100, 10 ));
    book.AddOrder(std::make_shared<Order>( OrderType::GoodTillCancel, 5120, Side::Buy, 100, 20 ));
    std:: cout << "Orderbook size: " << book.Size() << std::endl;
    book.CancelOrder(orderId);
    std:: cout << "Orderbook size: " << book.Size() << std::endl;
    return 0;
}
