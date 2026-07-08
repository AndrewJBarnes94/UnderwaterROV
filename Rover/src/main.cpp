#define ASIO_STANDALONE

#include <asio.hpp>
#include <iostream>

int main()
{
    asio::io_context io;

    asio::ip::tcp::socket socket(io);

    socket.connect(
        asio::ip::tcp::endpoint(
            asio::ip::make_address("127.0.0.1"),
            5000));

    std::cout << "Connected!\n";

    char buffer[128];

    size_t bytes = socket.read_some(
        asio::buffer(buffer));

    std::cout.write(buffer, bytes);
}