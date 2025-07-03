#ifndef APPLICATION_HPP
#define APPLICATION_HPP


#include <memory>


#include "application_config.hpp"


class Application {

    // Поля
    private: std::unique_ptr<ApplicationConfig> application_config_;


    // Конструкторы и операторы
    Application(const Application &application) = delete;
    Application& operator=(const Application &application) = delete;

    public: explicit Application(std::unique_ptr<ApplicationConfig> application_config);
    // public: Application(Application&&) noexcept = default;
    // public: Application& operator=(Application&&) noexcept = default;
    public: virtual ~Application() = default;


    // Методы
    public: virtual int run();

};


#endif // APPLICATION_HPP
