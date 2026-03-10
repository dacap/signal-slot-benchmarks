#pragma once

#include <dacap/obs/connection.h>
#include <dacap/obs/signal.h>

struct signal_traits_dob_st
{
  static constexpr bool has_signal_empty_test = false;
  static constexpr bool has_connection_connected_test = true;
  static constexpr bool has_disconnect_all = true;
  static constexpr bool has_swap = true;
  static constexpr bool will_deadlock_if_recursively_modified = false;
  static constexpr bool is_intrusive = false;

  template<typename Signature>
  using signal = obs::fast_signal<Signature>;

  using connection = obs::connection;

  static void initialize() {}
  static void terminate() {}

  template<typename Signal, typename F>
  static connection connect(Signal& s, F&& f)
  {
    return s.connect(std::forward<F>(f));
  }

  template<typename Signal, typename... Args>
  static void trigger(Signal& s, Args&&... args)
  {
    s(std::forward<Args>(args)...);
  }

  static bool connected(connection& c)
  {
    return c;
  }

  template<typename Signal>
  static void disconnect(Signal& s, connection& c)
  {
    c.disconnect();
  }

  template<typename Signal>
  static void disconnect_all_slots(Signal& s)
  {
    s = Signal();
  }

  template<typename Signal>
  static void swap(Signal& s1, Signal& s2)
  {
    std::swap(s1, s2);
  }
};
