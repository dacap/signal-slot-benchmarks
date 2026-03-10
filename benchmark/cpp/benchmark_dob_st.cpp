#include "../hpp/benchmark_dob_st.hpp"

NOINLINE(void Dob_st::initialize())
{
    // NOOP
}
NOINLINE(void Dob_st::validate_assert(std::size_t N))
{
    return Benchmark<Signal, Dob_st>::validation_assert(N);
}
NOINLINE(double Dob_st::construction(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Dob_st>::construction(N, limit);
}
NOINLINE(double Dob_st::destruction(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Dob_st>::destruction(N, limit);
}
NOINLINE(double Dob_st::connection(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Dob_st>::connection(N, limit);
}
NOINLINE(double Dob_st::disconnect(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Dob_st>::disconnect(N, limit);
}
NOINLINE(double Dob_st::reconnect(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Dob_st>::reconnect(N, limit);
}
NOINLINE(double Dob_st::emission(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Dob_st>::emission(N, limit);
}
NOINLINE(double Dob_st::combined(std::size_t N, std::size_t limit))
{
    return Benchmark<Signal, Dob_st>::combined(N, limit);
}
NOINLINE(double Dob_st::threaded(std::size_t N, std::size_t limit))
{
    // NOT IMPLEMENTED FOR THIS LIB
    return 0.0;
}
