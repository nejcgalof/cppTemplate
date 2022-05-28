#include <iostream>

#include <internal_use_only/config.hpp>

int main()
{
  std::cout << "Program: " << demo_project::cmake::project_name << "\n";
  std::cout << "Version: " << demo_project::cmake::project_version << "." << demo_project::cmake::git_hash << "\n";
  return 0;
}