#include "informations.hpp"
#include <internal_use_only/config.hpp>
#include <sstream>
#include <string_view>

std::string ProgramInformations()
{
  std::stringstream info;
  info << "Program: " << demo_project::cmake::project_name << "\n"
       << "Version: " << demo_project::cmake::project_version << "." << demo_project::cmake::git_hash << "\n";
  return info.str();
  // return demo_project::cmake::project_name;
}