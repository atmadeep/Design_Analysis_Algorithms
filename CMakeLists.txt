cmake_minimum_required(VERSION 3.8)
project(Design_Analysis_Algorithms)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)

add_executable(Design_Analysis_Algorithms ${SOURCE_FILES})
add_executable(Insertion_Sort Insertion_Sort.cpp)
add_executable(Merge_sort Merge_sort.cpp)
add_executable(Bubble_sort Bubble_sort.cpp)
add_executable(Quick_sort Quick_sort.cpp)
add_executable(Binary_search Binary_search.cpp)
add_executable(Shortest_Path_Matrix Shortest_Path_Matrix.cpp)
add_executable(Topological_sort Topological_sort.cpp)
add_executable(AVL_Trees AVL_Trees.cpp)
add_executable(Binary_Trees .idea/Binary_Trees.cpp)
add_executable(Trees .idea/Trees.cpp)

add_executable(Horner .idea/Horner.cpp)
add_executable(Depth_first_search Depth_first_search.cpp)
add_executable(Dijkstra .idea/Dijkstra.cpp)
add_executable(Trials .idea/Trials.cpp)
add_executable(Prim Prim.cpp)
add_executable(Heap_sort Heap_sort.cpp)
add_executable(Binomial_Coefficient Binomial_Coefficient.cpp)
add_executable(Warshall_bool Warshall_bool.cpp)
add_executable(0_1Knapsack 0_1Knapsack.cpp)
add_executable(Heap_sort_min Heap_sort_min.cpp)
add_executable(Tower_Hanoi Tower_Hanoi.cpp)
add_executable(Queue Queue.cpp)
add_executable(Proirity_Queue Proirity_Queue.cpp)
add_executable(Stack Stack.cpp)
add_executable(Linked_list Linked_list.cpp)