#ifndef APPLICATION_HPP
#define APPLICATION_HPP


#include <memory>


#include "application_config.hpp"


class Application {

    // Поля
    private: std::unique_ptr<ApplicationConfig> application_config_;


    // Методы
    Application(const Application &application) = delete;
    Application& operator=(const Application &application) = delete;

    public: Application(Application&&) noexcept = default;
    public: Application& operator=(Application&&) noexcept = default;

    public: Application(std::unique_ptr<ApplicationConfig> application_config);
    public: virtual ~Application() = default;
    public: virtual int run();

};


#endif // APPLICATION_HPP
