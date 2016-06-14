#include <iostream>
#include "timer.hpp"
#include "sfr.hpp"
#include "block.hpp"

Timer::Timer(Alu &a) :
  Block(a),
  ckcon("CKCON", a, 0x8e, 0),
  th1("TH1", a, 0x8d, 0),
  th0("TH0", a, 0x8c, 0),
  tl1("TL1", a, 0x8b, 0),
  tl0("TL0", a, 0x8a, 0),
  tmod("TMOD", a, 0x89, 0),
  tcon("TCON", a, 0x88, 0),
  tmr2rll("TMR2RLL", a, 0xca, 0),
  tmr2rlh("TMR2RLH", a, 0xcb, 0),
  tmr2l("TMR2L", a, 0xcc, 0),
  tmr2h("TMR2H", a, 0xcd, 0),
  tmr2cn("TMR2CN", a, 0xc8, 0)
{
  RegisterSfr(ckcon, 0x00);
  RegisterSfr(th1, 0x00);
  RegisterSfr(th0, 0x00);
  RegisterSfr(tl1, 0x00);
  RegisterSfr(tl0, 0x00);
  RegisterSfr(tmod, 0x00);
  RegisterSfr(tcon, 0x00);
  RegisterSfr(tmr2rll, 0x00);
  RegisterSfr(tmr2rlh, 0x00);
  RegisterSfr(tmr2l, 0x00);
  RegisterSfr(tmr2h, 0x00);
  RegisterSfr(tmr2cn, 0x00);
}
