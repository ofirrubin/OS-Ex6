//
//  main1.hpp
//  Ex6
//
//  Created by Ofir Rubin on 02/06/2022.
//

#ifndef main1_hpp
#define main1_hpp

#include <stdio.h>
#include <iostream>
#include <unistd.h>

#include "../DataTypes/queue.hpp"
#include "../DataTypes/activeObject.hpp"
#include "../DataTypes/tcpServer.hpp"


#define BACKLOG 10
#define MAXINPUT 1024

using std::cout;
using std::endl;
using std::string;

struct MetaData{ // Who it belongs and what's its address
    int sockfd;
    char *ptr;
};

int main(void);

#endif /* main1_hpp */
