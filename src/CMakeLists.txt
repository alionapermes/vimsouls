set(EXEC vimsouls)
set(SRC main.cpp
    game.cpp
    character.cpp
)

add_executable(${EXEC} ${SRC})
target_link_libraries(${EXEC} ${CONAN_LIBS})

