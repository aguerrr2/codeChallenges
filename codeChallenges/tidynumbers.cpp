#include <iostream>
#include <vector>


int main(int args,char**argvs){
    int n_cases = 0;
    std::string line;
    std::vector<std::string> info;
    std::cin >> n_cases;
    std::cout << "The number of test cases: " << n_cases << std::endl;
    for(int i = 0; i < n_cases; ++i){
        std::cin >> line;
        info.push_back(line); 
    }
    std::cout <<"number of things in the array: " << info.size() << std::endl;
    



return 0;
}


