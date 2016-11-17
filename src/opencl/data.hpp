//------------------------------------------------------------------------------
//
//   This file is part of the VAMPIRE open source package under the
//   Free BSD licence (see licence file for details).
//
//------------------------------------------------------------------------------
//

#ifndef VOPENCL_DATA_HPP_
#define VOPENCL_DATA_HPP_

// C++ standard library headers

// Vampire headers
#include "opencl_include.hpp"
#include "vopencl.hpp"

// vopencl module headers
#include "internal.hpp"

namespace vopencl{

   //------------------------------------------------------------------------------
   // Externally visible variables
   //------------------------------------------------------------------------------

   //------------------------------------------------------------------------
   // Shared variables inside vopencl module
   //------------------------------------------------------------------------


#ifdef OPENCL
   namespace internal
   {
      namespace rng
      {
         extern cl::Buffer urands;
      }

      namespace atoms
      {
         extern cl::Buffer x_spin_array;
         extern cl::Buffer y_spin_array;
         extern cl::Buffer z_spin_array;

         extern cl::Buffer x_coord_array;
         extern cl::Buffer y_coord_array;
         extern cl::Buffer z_coord_array;

         extern cl::Buffer type_array;

         extern cl::Buffer cell_array;

         extern cl::Buffer limits;
         extern cl::Buffer neighbours;

         extern cl::Buffer spin_norm_array;
      }

      namespace cells
      {
         extern cl::Buffer x_coord_array;
         extern cl::Buffer y_coord_array;
         extern cl::Buffer z_coord_array;

         extern cl::Buffer x_mag_array;
         extern cl::Buffer y_mag_array;
         extern cl::Buffer z_mag_array;

         extern cl::Buffer x_field_array;
         extern cl::Buffer y_field_array;
         extern cl::Buffer z_field_array;

         extern cl::Buffer volume_array;

         extern cl::Buffer num_atoms;
      }

      namespace mp
      {
         extern cl::Buffer materials;
      }

      extern cl::Buffer x_total_spin_field_array;
      extern cl::Buffer y_total_spin_field_array;
      extern cl::Buffer z_total_spin_field_array;

      extern cl::Buffer x_total_external_field_array;
      extern cl::Buffer y_total_external_field_array;
      extern cl::Buffer z_total_external_field_array;

      extern cl::Buffer x_dipolar_field_array;
      extern cl::Buffer y_dipolar_field_array;
      extern cl::Buffer z_dipolar_field_array;

   } // end of internal namespace
#endif // OPENCL

} // end of vopencl namespace

#endif // VOPENCL_DATA_HPP_