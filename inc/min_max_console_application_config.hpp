#ifndef MIN_MAX_CONSOLE_APPLICATION_CONFIG
#define MIN_MAX_CONSOLE_APPLICATION_CONFIG


#include <string>


#include "abstraction/application_config.hpp"


class MinMaxConsoleApplicationConfig : public ApplicationConfig {

    // Поля
    size_t min_input_length_;
    size_t max_input_length_;


    // Конструкторы и операторы
    public: MinMaxConsoleApplicationConfig();


    // Методы
    public: void set_min_input_length(const size_t &min_input_length) noexcept;
    public: void set_max_input_length(const size_t &max_input_length) noexcept;
    public: void set_application_name(const std::string &name) noexcept override;
    public: void set_application_version(const std::string &version) noexcept override;
    public: size_t get_min_input_length() const noexcept;
    public: size_t get_max_input_length() const noexcept;
    public: std::string get_application_name() const noexcept override;
    public: std::string get_application_version() const noexcept override;

};

#endif // MIN_MAX_CONSOLE_APPLICATION_CONFIG
