#include <dart/dynamics/Skeleton.hpp>
#include <iostream>

int main(int argc, char* argv[])
{
  auto skel = dynamics::Skeleton::create();
  std::cout << "Skeleton [" << skel->getName() << "] has ["
            << skel->getNumBodyNodes() << "] bodies.\n";
  return 0;
}
