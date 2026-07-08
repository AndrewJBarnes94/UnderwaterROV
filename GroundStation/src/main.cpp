#define ASIO_STANDALONE

#include <asio.hpp>
#include <iostream>

int main()
{
    asio::io_context io;

    asio::ip::tcp::acceptor acceptor(
        io,
        asio::ip::tcp::endpoint(
            asio::ip::tcp::v4(),
            5000));

    std::cout << "Waiting...\n";

    asio::ip::tcp::socket socket(io);

    acceptor.accept(socket);

    std::cout << "Connected!\n";

    std::string message = "Hello Rover";

    asio::write(
        socket,
        asio::buffer(message));
}