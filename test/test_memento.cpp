#include <gtest/gtest.h>
#include "virtual_machine.hpp"

TEST(VirtualMachineTest, InitialState) {
  VirtualMachine vm;
  EXPECT_EQ(vm.GetCpuCount(), 1);
  EXPECT_EQ(vm.GetRamSize(), 500);
}

TEST(VirtualMachineTest, ChangeCpuCount) {
  VirtualMachine vm;
  vm.ChangeCpuCount(8);
  EXPECT_EQ(vm.GetCpuCount(), 8);
}

TEST(VirtualMachineTest, ChangeRamSize) {
  VirtualMachine vm;
  vm.ChangeRamSize(2048);
  EXPECT_EQ(vm.GetRamSize(), 2048);
}

TEST(VirtualMachineTest, RestoreSnapshot) {
  VirtualMachine vm;
  auto snap = vm.TakeSnapshot();
  vm.ChangeCpuCount(16);
  vm.ChangeRamSize(4096);
  vm.ResetToSnapshot(snap);
  EXPECT_EQ(vm.GetCpuCount(), 1);
  EXPECT_EQ(vm.GetRamSize(), 500);
}
