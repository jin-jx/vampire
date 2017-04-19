//------------------------------------------------------------------------------
//
//   This file is part of the VAMPIRE open source package under the
//   Free BSD licence (see licence file for details).
//
//   (c) Richard F L Evans 2017. All rights reserved.
//
//   Email: richard.evans@york.ac.uk
//
//------------------------------------------------------------------------------
//

// C++ standard library headers

// program header
#include "vdc.hpp"

namespace vdc{

   // program option flags
   bool verbose = true; // flag to specify verbosity of output to user
   bool xyz = true; // flag to specify crystal.xyz file output
   bool povray = true; // flag to specify povray file output
   format_t format;

   uint64_t num_atoms = 0;

   unsigned int start_file_id = 0;
   unsigned int final_file_id = 99999999;

   // system size and centre
   double system_size[3] = {0.0, 0.0, 0.0};
   double system_centre[3] = {0.0, 0.0, 0.0};

   std::vector<material_t> materials(0);

   std::vector<int> category(0);
   std::vector<int> type(0);

   std::vector<double> coordinates(0);
   std::vector<double> spins(0);

   // array to store subsidiary data file names
   std::vector <std::string> coord_filenames(0);
   std::vector <std::string> spin_filenames(0);

} // end of namespace vdc