#ifndef MIN_MAX_CONSOLE_APPLICATION_CONFIG_BUILDER_HPP
#define MIN_MAX_CONSOLE_APPLICATION_CONFIG_BUILDER_HPP


#include <string>
#include <memory>
#include "min_max_console_application_config.hpp"


class MinMaxConsoleApplicationConfigBuilder {

    // Поля
    private: size_t min_input_length_ = 1;
    private: size_t max_input_length_ = 8;
    private: std::string application_name_ = "application";
    private: std::string application_version_ = "0.0.1";


    // Методы
    public: MinMaxConsoleApplicationConfigBuilder& set_min_input_length(const size_t &min_input_length) noexcept;
    public: MinMaxConsoleApplicationConfigBuilder& set_max_input_length(const size_t &max_input_length) noexcept;
    public: MinMaxConsoleApplicationConfigBuilder& set_application_name(const std::string& name) noexcept;
    public: MinMaxConsoleApplicationConfigBuilder& set_application_version(const std::string& version) noexcept;
    std::unique_ptr<MinMaxConsoleApplicationConfig> build() const;

};


#endif // MIN_MAX_CONSOLE_APPLICATION_CONFIG_BUILDER_HPP
