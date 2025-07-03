#ifndef MIN_MAX_CONSOLE_APPLICATION_HPP
#define MIN_MAX_CONSOLE_APPLICATION_HPP


#include <string>


#include "abstraction/application.hpp"
#include "min_max_console_application_config.hpp"


class MinMaxConsoleApplication : public Application {

    public: MinMaxConsoleApplication(std::unique_ptr<MinMaxConsoleApplicationConfig> application_config);
    public: int run() override;

};


#endif // MIN_MAX_CONSOLE_APPLICATION_HPP
