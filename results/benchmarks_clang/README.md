
# Clang 18 (Linux)

### Performance

| Library | [constr] | [destr] | disconn | reconn | conn | emit | all | threaded | score |
|---------|----------|---------|---------|--------|------|------|-----|----------|-------|
| jeffomatic jl_signal | 172540 | 102791 | 125987 | 238206 | 233111 | 235714 | 75092 | 0 | 908110 |
| vdksoft signals st | 33831 | 39972 | 331624 | 25850 | 41964 | 188384 | 19500 | 0 | 607322 |
| Wink-Signals | 282609 | 217320 | 97806 | 132542 | 77501 | 206240 | 52900 | 0 | 566988 |
| Nuclex Events | 287879 | 210961 | 99192 | 68590 | 72447 | 206349 | 42052 | 0 | 488631 |
| Montellese cpp-signal | 270105 | 92229 | 61365 | 66180 | 62653 | 234014 | 34157 | 0 | 458369 |
| nano-signal-slot st | 282609 | 127784 | 77169 | 67792 | 54097 | 200307 | 39328 | 0 | 438693 |
| dacap observable st | 186745 | 108174 | 64718 | 73246 | 53406 | 192299 | 28926 | 0 | 412594 |
| Ansoulom cpp-observe | 318473 | 155699 | 62336 | 45158 | 41047 | 230812 | 25030 | 0 | 404384 |
| pbhogan Signals | 187601 | 185962 | 51954 | 61341 | 62761 | 200000 | 25212 | 0 | 401268 |
| nano-signal-slot sts | 282609 | 129632 | 76994 | 67905 | 54333 | 160391 | 36386 | 0 | 396010 |
| * nano-signal-slot ts | 282609 | 45188 | 57012 | 51735 | 44311 | 197133 | 27288 | 134 | 377613 |
| Yassi | 282609 | 183473 | 59692 | 43833 | 34345 | 206240 | 24547 | 0 | 368656 |
| tripleslash rocket st | 17597 | 20483 | 51305 | 43103 | 45232 | 188437 | 21978 | 0 | 350054 |
| palacaze sigslot | 201282 | 123131 | 28658 | 40143 | 38459 | 200307 | 16971 | 0 | 324538 |
| mwthinker Signal | 188409 | 127160 | 45818 | 28003 | 28878 | 200796 | 17614 | 0 | 321109 |
| amc522 Signal11 | 120448 | 136213 | 34535 | 24646 | 24200 | 220926 | 14307 | 0 | 318614 |
| SimpleSignal | 214620 | 204791 | 36486 | 26113 | 26908 | 206240 | 14867 | 0 | 310614 |
| * Montellese cpp-signal | 148810 | 20234 | 31597 | 30091 | 30748 | 202394 | 14767 | 70 | 309667 |
| joanrieu signal11 | 152113 | 181577 | 57098 | 54048 | 53827 | 81532 | 20313 | 0 | 266817 |
| supergrover sigslot | 157750 | 95454 | 12053 | 17700 | 17852 | 194444 | 7112 | 0 | 249162 |
| * KtnSignalSlot | 75275 | 16523 | 27759 | 15484 | 14680 | 163845 | 10602 | 188 | 232557 |
| * palacaze sigslot | 46656 | 14940 | 24499 | 31826 | 29385 | 133295 | 13106 | 92 | 232202 |
| fr00b0 nod | 158120 | 93088 | 39227 | 69814 | 53671 | 47094 | 17204 | 0 | 227009 |
| * cpp11nullptr lsignal | 104603 | 20221 | 23753 | 7425 | 7520 | 179585 | 5533 | 64 | 223880 |
| iscool::signals | 170179 | 101677 | 61381 | 21643 | 34532 | 90363 | 418 | 0 | 208336 |
| * CppFakeIt FastSignals | 44371 | 41122 | 34747 | 26056 | 22519 | 77084 | 12844 | 7 | 173256 |
| * fr00b0 nod | 129870 | 91637 | 28991 | 44035 | 38957 | 42857 | 12994 | 47 | 167880 |
| libsigcplusplus | 186325 | 175214 | 13937 | 9722 | 9860 | 127111 | 5701 | 0 | 166330 |
| EvilTwin Observer | 26765 | 30444 | 24613 | 13046 | 12693 | 87805 | 7979 | 0 | 146135 |
| * nano-signal-slot tss | 40818 | 10092 | 17910 | 37222 | 34153 | 45640 | 9485 | 73 | 144484 |
| * dacap observable | 90548 | 3471 | 24504 | 36760 | 37528 | 28644 | 9456 | 7 | 136898 |
| * Kosta signals-cpp | 236237 | 20394 | 54373 | 9611 | 11710 | 50031 | 6758 | 38 | 132520 |
| Boost Signals2 st | 2331 | 2419 | 19943 | 12433 | 12417 | 75916 | 7150 | 0 | 127858 |
| * tripleslash rocket | 7126 | 4644 | 19399 | 13769 | 13762 | 40858 | 6847 | 18 | 94653 |
| * Boost Signals2 | 2439 | 2483 | 14109 | 10824 | 12625 | 45166 | 5201 | 22 | 87948 |
| copperspice cs_signal | 21568 | 10561 | 12101 | 11480 | 10942 | 24341 | 4643 | 0 | 63507 |
| neolib event | 112059 | 2667 | 9787 | 5477 | 4674 | 7661 | 2413 | 0 | 30013 |
| * neolib event | 111515 | 2638 | 8991 | 5271 | 4482 | 7428 | 2287 | 20 | 28479 |

### Metrics

| Library | Build Size | Signal Size | Header Only | Data Structure | Thread Safe |
| ------- |:----------:|:-----------:|:-----------:| -------------- |:-----------:|
| [Ansoulom cpp-observe](https://github.com/Ansoulom/cpp-observe) | &mdash; | 24 b | X | std::vector | - |
| [amc522 Signal11](https://github.com/amc522/Signal11) | &mdash; | 16 b | X | std::vector | - |
| [* Boost Signals2](http://www.boost.org/doc/libs/1_58_0/doc/html/signals2.html) | &mdash; | 24 b | - | ? | X |
| [Boost Signals2 st](http://www.boost.org/doc/libs/1_58_0/doc/html/signals2.html) | &mdash; | 24 b | - | ? | - |
| [* cpp11nullptr lsignal](https://github.com/cpp11nullptr/lsignal) | &mdash; | 104 b | X | **std::list | X |
| [* Montellese cpp-signal](https://github.com/Montellese/cpp-signal) | &mdash; | 56 b | X | std::forward_list | X |
| [Montellese cpp-signal](https://github.com/Montellese/cpp-signal) | &mdash; | 16 b | X | std::forward_list | - |
| [copperspice cs_signal](https://github.com/copperspice/cs_signal) | &mdash; | 88 b | - | **RCU List | DIY |
| [* dacap observable](https://github.com/dacap/observable) | &mdash; | 120 b | - | **std::vector | X |
| [dacap observable st](https://github.com/dacap/observable) | &mdash; | 32 b | - | std::vector | - |
| [EvilTwin Observer](http://eviltwingames.com/blog/the-observer-pattern-revisited/) | &mdash; | 40 b | X | std::vector | - |
| [iscool::signals](https://github.com/IsCoolEntertainment/iscool-core/) | &mdash; | 80 b | - | std::vector | - |
| [jeffomatic jl_signal](https://github.com/jeffomatic/jl_signal) | &mdash; | 40 b | - | doubly linked list | - |
| [joanrieu signal11](https://github.com/joanrieu/signal11) | &mdash; | 48 b | X | std::list | - |
| [* Kosta signals-cpp](https://github.com/Kosta-Github/signals-cpp) | &mdash; | 56 b | X | std::vector | X |
| [* KtnSignalSlot](https://gitlab.com/KtnFramework/Libraries/KtnSignalSlot.git) | &mdash; | 184 b | X | std::vector | X |
| [libsigcplusplus](https://github.com/libsigcplusplus/libsigcplusplus) | &mdash; | 16 b | - | std::list | - |
| [* CppFakeIt FastSignals](https://github.com/CppFakeIt/FastSignals) | &mdash; | 16 b | - | std::vector | X |
| [SimpleSignal](https://github.com/larspensjo/SimpleSignal) | &mdash; | 24 b | X | std::vector | - |
| [mwthinker Signal](https://github.com/mwthinker/Signal) | &mdash; | 40 b | - | std::list | - |
| [Nuclex Events](http://blog.nuclex-games.com/2019/10/nuclex-signal-slot-benchmarks/) | &mdash; | 56 b | X | dynamic array | - |
| [* neolib event](https://github.com/i42output/neolib) | &mdash; | 96 b | - | **std::unordered_map | X |
| [neolib event](https://github.com/i42output/neolib) | &mdash; | 96 b | - | **std::unordered_map | - |
| [* fr00b0 nod](https://github.com/fr00b0/nod) | &mdash; | 104 b | X | std::vector | X |
| [fr00b0 nod](https://github.com/fr00b0/nod) | &mdash; | 72 b | X | std::vector | - |
| [nano-signal-slot st](https://github.com/NoAvailableAlias/nano-signal-slot) | &mdash; | 24 b | X | std::vector | - |
| [nano-signal-slot sts](https://github.com/NoAvailableAlias/nano-signal-slot) | &mdash; | 24 b | X | std::vector | - |
| [* nano-signal-slot ts](https://github.com/NoAvailableAlias/nano-signal-slot) | &mdash; | 32 b | X | std::vector | X |
| [* nano-signal-slot tss](https://github.com/NoAvailableAlias/nano-signal-slot) | &mdash; | 48 b | X | std::vector | X |
| [pbhogan Signals](https://github.com/pbhogan/Signals) | &mdash; | 48 b | X | std::set | - |
| [* palacaze sigslot](https://github.com/palacaze/sigslot) | &mdash; | 64 b | X | std::vector | X |
| [palacaze sigslot](https://github.com/palacaze/sigslot) | &mdash; | 48 b | X | std::vector | - |
| [supergrover sigslot](https://github.com/supergrover/sigslot) | &mdash; | 56 b | - | std::list | - |
| [* tripleslash rocket](https://github.com/tripleslash/rocket) | &mdash; | 24 b | X | intrusive list | X |
| [tripleslash rocket st](https://github.com/tripleslash/rocket) | &mdash; | 16 b | X | intrusive list | - |
| [Wink-Signals](https://github.com/miguelmartin75/Wink-Signals) | &mdash; | 24 b | X | std::vector | - |
| [Yassi](http://www.codeproject.com/Articles/867044/Yassi-Yet-Another-Signal-Slot-Implementation) | &mdash; | 24 b | X | std::vector | - |
| [vdksoft signals st](https://github.com/vdksoft/signals) | &mdash; | 8 b | - | doubly linked list | - |

| * | ** | [] |
|:-:|:--:|:--:|
| _Supports thread-safety_ | _Uses additional containers_ | Excluded from scoring |

Benchmark Algorithms
--------------------

_The individual benchmark algorithms are completely generic through the use of templates._

| Algorithm | Description |
| --------- | ----------- |
| [validation_assert](../../benchmark.hpp#L19) | Make sure each signal implementation is functioning correctly. |
| [construction](../../benchmark.hpp#L48) | Sample the default construction of N * N number of Signal instances. |
| [destruction](../../benchmark.hpp#L66) | Sample the destruction of N * N number of Signal instances. |
| [connection](../../benchmark.hpp#L85) | Sample Signal connections to N number of Foo instances. |
| [disconnect](../../benchmark.hpp#L108) | Sample disconnecting N number of Foo instances from a single Signal. |
| [reconnect](../../benchmark.hpp#L135) | Sample reconnecting N number of Foo instances to a global Signal. |
| [emit](../../benchmark.hpp#L159) | Sample the duration of an N slot emission. |
| [all](../../benchmark.hpp#L184) | Sample all previous benchmarks together in one combined benchmark. |
| [threaded](../../benchmark.hpp#L208) | Same as the previous benchmark but is now threaded. |
<br/>
