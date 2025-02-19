#include "ClapTrap.hpp"
#include "FragTrap.hpp"
int main()
{
  FragTrap test("name");
  test.attack("testestset");
  FragTrap ww;
  std::cout << "damage : " << test.getAttackDamage();
}