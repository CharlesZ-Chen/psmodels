// Copyright 1998 by Patrik Simons
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston,
// MA 02111-1307, USA.
//
// Patrik.Simons@hut.fi
#ifndef STABLE_H
#define STABLE_H

#include "smodels.h"
#include "read.h"
#include "api.h"
#include "timer.h"

using namespace std;

class Stable
{
public:
  Stable ();
  virtual ~Stable ();
  
  int read (istream &f);
  int tries ();
  int randomize ();
  void print_internal ();
  void calculate ();
  void print_time ();

  bool wellfounded;
  bool lookahead;
  bool backjumping;
  bool randomized;
  /*** TSS 2.1.2001 ***/
  bool cont;
  /*** TSS 2.1.2001 ***/
  
  long max_conflicts;
  long max_tries;
  long seed;

  Smodels smodels;
  Api api;
  Read reader;
  Timer timer;

  /*** TSS 27.10.2000 ***/
  unsigned int max_seconds;
  /*** TSS 27.10.2000 ***/

};

#endif
