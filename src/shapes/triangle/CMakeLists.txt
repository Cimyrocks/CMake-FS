# Add the source files for the triangle
add_library(triangle_library triangle.cpp triangle.hpp)

# Link the triangle library to the shape library
target_link_libraries(shape_library triangle_library)
