add_executable(Rover
	src/main.cpp
)

target_link_libraries(Rover
    PRIVATE
        asio
        Common
)