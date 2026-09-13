#specify the minimum required cmake version
cmake_minimum_required(VERSION 3.28.0)

find_package(Zephyr REQUIED HINTS $EVN{ZEPHYR_BASW})
project(random)

target_sources(app PRIVATE src/main.c)

