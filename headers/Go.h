#ifndef ZUUL_CPP_GO_H
#define ZUUL_CPP_GO_H

#include <vector>
#include <string>
#include "Command.h"

class Go: public Command
{
private:
    std::vector<std::string> directions = {"north", "south", "east", "west"};
public:
    void execute(std::vector<std::string> inputArr) override;
    bool validate(const std::string& direction);
};

#endif //ZUUL_CPP_GO_H
