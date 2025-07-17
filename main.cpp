#include "app/inc/min_max_console_application.hpp"


#include <memory>


int main() {
    std::unique_ptr<Application> application = std::make_unique<MinMaxConsoleApplication>();
    return application->run();
}
