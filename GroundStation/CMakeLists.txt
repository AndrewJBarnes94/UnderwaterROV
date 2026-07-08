add_executable(GroundStation
    src/main.cpp
)

target_link_libraries(GroundStation
    PRIVATE
        asio
        Common
)