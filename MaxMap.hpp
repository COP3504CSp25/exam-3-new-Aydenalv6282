#pragma once

#include <algorithm>
#include <map>
#include <string>
#include <vector>

float consultMax(const std::string& search_term, const std::map<std::string, std::vector<float>>& data) {
    auto it = data.find(search_term);
    if(it!=data.end()){
        std::vector<float> vec = it->second;
        int max = vec.at(0);
        for(size_t i=0; i<vec.size(); i++){
            if(vec.at(i) > max){
                max = vec.at(i);
            }
        }
        return max;
    }
    return -1;
}

std::map<std::string, float> returnMaxMap(const std::map<std::string, std::vector<float>>& in_map) {
    //implement your function here
    std::map<std::string, float> stuff;
    return stuff;
}