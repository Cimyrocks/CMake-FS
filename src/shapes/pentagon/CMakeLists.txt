# Add the source files for the pentagon
add_library(pentagon_library pentagon.cpp pentagon.hpp)

# Link the pentagon library to the shape library
target_link_libraries(shape_library pentagon_library)
