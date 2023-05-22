# Add subdirectories for each shape
add_subdirectory(pentagon)
add_subdirectory(square)
add_subdirectory(triangle)

# Create a library for the shapes
add_library(shape_library shape.hpp)
target_sources(shape_library PRIVATE shape.hpp)
