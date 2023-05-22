# Add subdirectories
add_subdirectory(shapes)

# Add main executable
add_executable(main main.cpp)

# Link the shape libraries
target_link_libraries(main shape_library)
