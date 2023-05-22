# Add the source files for the square
add_library(square_library square.cpp square.hpp)

# Link the square library to the shape library
target_link_libraries(shape_library square_library)
