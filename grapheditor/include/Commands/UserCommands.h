#pragma once

#include <iostream>
#include <map>
#include <vector>
#include <tuple>

#include "Command.h"
#include "CommandInfo.h"


class ConnectCommand : public Command {
    public:
        ConnectCommand(const CommandInfo& info) : Command(info) {}
        int exec(const std::vector<std::string>& args) override;
};

class DisconnectCommand : public Command {
    public:
        DisconnectCommand(const CommandInfo& info) : Command(info) {}
        int exec(const std::vector<std::string>& args) override;
};

class CreateDataVolatileCommand : public Command {
    public:
        CreateDataVolatileCommand(const CommandInfo& info) : Command(info) {}
        int exec(const std::vector<std::string>& args) override;
};

class JoinDataCommand : public Command {
    public:
        JoinDataCommand(const CommandInfo& info) : Command(info) {}
        int exec(const std::vector<std::string>& args) override;
};

class LeaveDataCommand : public Command {
    public:
        LeaveDataCommand(const CommandInfo& info) : Command(info) {}
        int exec(const std::vector<std::string>& args) override;
};

class InfoCommand : public Command {
    public:
        InfoCommand(const CommandInfo& info) : Command(info) {}
        int exec(const std::vector<std::string>& args) override;
};

class QuitCommand : public Command {
    public:
        QuitCommand(const CommandInfo& info) : Command(info) {}
        int exec(const std::vector<std::string>& args) override;
};

class HelpCommand : public Command {
    public:
        HelpCommand(const CommandInfo& info) : Command(info) {}
        int exec(const std::vector<std::string>& args) override;
};


