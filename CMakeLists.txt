cmake_minimum_required(VERSION 3.31)
project(OrderBook)

set(CMAKE_CXX_STANDARD 20)

add_executable(OrderBook main.cpp
        header/LevelInfo.h
        header/Usings.h
        header/OrderType.h
        header/Order.h
        header/Side.h
        header/OrderModify.h
        header/Trade.h
        header/TradeInfo.h
        header/OrderbookLevelInfos.h
        header/Orderbook.h
        Orderbook.cpp
)
