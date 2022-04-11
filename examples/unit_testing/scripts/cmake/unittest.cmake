function(add_mock_from mock_dir)
message("Add mock from ${mock_dir}")
target_include_directories(testbinary PRIVATE
    ${mock_dir}/include
    ${mock_dir}/mock
)
endfunction()
