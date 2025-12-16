#include <iostream>
#include <string>

class Book {
    std::string m_title;
    std::string m_writer;
    int m_price;

public:
    Book(std::string title, std::string writer, int price);
    void set_data(std::string title, std::string writer, int price);

    std::string get_title() const;
    std::string get_writer() const;
    int get_price() const;

    // コピーコンストラクター
    Book(const Book& other);
};

Book::Book(std::string title, std::string writer, int price)
    : m_title(title), m_writer(writer), m_price(price) {
    set_data(title, writer, price);
}

void Book::set_data(std::string title, std::string writer, int price) {
    m_title = title;
    m_writer = writer;
    m_price = price;
}

std::string Book::get_title() const {
    return m_title;
}

std::string Book::get_writer() const {
    return m_writer;
}

int Book::get_price() const {
    return m_price;
}

// コピーコンストラクターの定義
Book::Book(const Book& other) {
    set_data(other.get_title(), other.get_writer(), other.get_price());
}

void practice() {
    Book book1("C++ Programing", "Bjarne Stroustrup", 5000);

    // オリジナルの内容を表示
    std::cout << "-- Original --" << std::endl;

    std::cout << "Title: " << book1.get_title() << std::endl;
    std::cout << "Writer: " << book1.get_writer() << std::endl;
    std::cout << "Price: " << book1.get_price() << std::endl;

    // コピーの内容を表示
    Book copy(book1);
    std::cout << "-- Copy --" << std::endl;

    std::cout << "Title: " << copy.get_title() << std::endl;
    std::cout << "Writer: " << copy.get_writer() << std::endl;
    std::cout << "Price: " << copy.get_price() << std::endl;
}