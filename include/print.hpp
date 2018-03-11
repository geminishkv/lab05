#include <string>
cat > include/print.hpp <<EOF
#include <string>
sf
#include <fstream>
#include <iostream>

void print(const std::string& text, std::ostream& out = std::cout);
void print(const std::string& text, std::ofstream out);
