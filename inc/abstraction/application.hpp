#ifndef APPLICATION_HPP
#define APPLICATION_HPP


#include <memory>


class Application {

    // Конструкторы и операторы
    public: virtual ~Application() = default;


    // Методы
    protected: virtual void init() = 0;
    public: virtual int run() = 0;

};


#endif // APPLICATION_HPP
