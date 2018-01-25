/*
 * =========================================================================================
 * Name        : eventLib.cpp
 * Author      : Duc Dung Nguyen
 * Email       : nddung@hcmut.edu.vn
 * Copyright   : Faculty of Computer Science and Engineering - Bach Khoa University
 * Description : library for Assignment 2 - Data structures and Algorithms - Fall 2017
 *               This library contains functions used for event management
 * =========================================================================================
 */

#include "requestLib.h"


void loadRequests(char* fName, L1List<VM_Request> &rList) {
    ifstream file;
    file.open(fName);
    string str, str1;
    while(getline(file,str,'\n')){
        istringstream ss(str);
        while(ss >> str1) {
            
            VM_Request temp(str1);
            rList.push_back(temp);
        }
        ss.clear();
    }
    file.close();// TODO: write your code to load requests. Each request is separated by a whitespace
}
