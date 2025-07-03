#ifndef APPLICATION_CONFIG
#define APPLICATION_CONFIG


#include <string>


class ApplicationConfig {

    // Поля
    private: std::string application_name_;
    private: std::string application_version_;


    // Конструкторы и операторы
    ApplicationConfig(const ApplicationConfig &application_config) = delete;
    ApplicationConfig& operator=(const ApplicationConfig &application_config) = delete;

    public: ApplicationConfig(ApplicationConfig &&application_config) noexcept = default;
    public: ApplicationConfig& operator=(ApplicationConfig &&application_config) noexcept = default;

    // Методы
    public: virtual std::string set_application_name() noexcept;
    public: virtual std::string set_application_version() noexcept;
    public: virtual std::string get_application_name() const noexcept;
    public: virtual std::string get_application_version() const noexcept;

};


#endif // APPLICATION_CONFIG
