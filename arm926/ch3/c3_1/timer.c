/********************************************************************
Copyright 2010-2017 K.C. Wang, <kwang@eecs.wsu.edu>
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
********************************************************************/
#include "etimer.h"

typedef volatile struct timer{
  u32 *base;            // timer's base address; as u32 pointer
  int tick, hh, mm, ss; // per timer data area
  char clock[16]; 
}TIMER;
volatile TIMER timer[4];  // 4 timers; 2 timers per unit; at 0x00 and 0x20



void timer_init()
{


}

void timer_handler(int n) {
    

} 

void timer_start(int n) // timer_start(0), 1, etc.
{
  

}

int timer_clearInterrupt(int n) // timer_start(0), 1, etc.
{
 

}

void timer_stop(int n) // timer_start(0), 1, etc.
{


}
