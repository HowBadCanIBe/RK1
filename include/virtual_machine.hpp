#ifndef VIRTUAL_MACHINE_HPP
#define VIRTUAL_MACHINE_HPP

#include <cstdint>

class Snapshot {
 private:
  friend class VirtualMachine;

  struct State {
    std::uint16_t cpuCount{1};
    std::uint64_t ramSize{500};
  };

  explicit Snapshot(const State& state) : state_(state) {}

  State state_;
};

class VirtualMachine {
 public:
  std::uint16_t GetCpuCount() const;
  std::uint64_t GetRamSize() const;

  std::uint16_t ChangeCpuCount(std::uint16_t cpuCount);
  std::uint64_t ChangeRamSize(std::uint64_t ramSize);

  void ResetToSnapshot(const Snapshot& snapshot);
  Snapshot TakeSnapshot() const;

 private:
  Snapshot::State state_;
};

#endif // VIRTUAL_MACHINE_HPP
