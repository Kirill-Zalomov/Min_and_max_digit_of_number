#ifndef APPLICATION_CONFIG
#define APPLICATION_CONFIG


#include <string>


class ApplicationConfig {

    // Поля
    private: std::string application_name_;
    private: std::string application_version_;


    // Методы
    public: virtual std::string set_application_name() const noexcept;
    public: virtual std::string set_application_version() const noexcept;

    public: virtual std::string get_application_name() const noexcept;
    public: virtual std::string get_application_version() const noexcept;

};


#endif // APPLICATION_CONFIG
