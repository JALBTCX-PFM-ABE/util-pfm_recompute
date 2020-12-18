
/*********************************************************************************************

    This is public domain software that was developed by or for the U.S. Naval Oceanographic
    Office and/or the U.S. Army Corps of Engineers.

    This is a work of the U.S. Government. In accordance with 17 USC 105, copyright protection
    is not available for any work of the U.S. Government.

    Neither the United States Government, nor any employees of the United States Government,
    nor the author, makes any warranty, express or implied, without even the implied warranty
    of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE, or assumes any liability or
    responsibility for the accuracy, completeness, or usefulness of any information,
    apparatus, product, or process disclosed, or represents that its use would not infringe
    privately-owned rights. Reference herein to any specific commercial products, process,
    or service by trade name, trademark, manufacturer, or otherwise, does not necessarily
    constitute or imply its endorsement, recommendation, or favoring by the United States
    Government. The views and opinions of authors expressed herein do not necessarily state
    or reflect those of the United States Government, and shall not be used for advertising
    or product endorsement purposes.

*********************************************************************************************/


/*********************************************************************************************

    This program is public domain software that was developed by 
    the U.S. Naval Oceanographic Office.

    This is a work of the US Government. In accordance with 17 USC 105,
    copyright protection is not available for any work of the US Government.

    This software is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

*********************************************************************************************/

#ifndef VERSION

#define     VERSION     "PFM Software - pfm_recompute V1.79 - 07/23/14"

#endif

/*

    Version 1.0
    Jan C. Depner
    02/13/00


    Version 1.1
    Jan C. Depner
    02/21/01

    Passing scale to open_pfm_file as a pointer.


    Version 1.2
    Jan C. Depner
    06/21/01

    Passing structure args to open_pfm_file.


    Version 1.3
    Jan C. Depner
    07/19/01
 
    4.0 PFM library changes and checkpoint recovery.


    Version 1.4
    Jan C. Depner
    06/05/02
 
    Perform recomputes using the 5 user flags in PFM 4.1.


    Version 1.5
    Jan C. Depner
    07/02/02
 
    Added "clear" option to clear all edited and selected flags in the file.


    Version 1.6
    Jan C. Depner
    09/24/03
 
    Changed options to -1, -2, -3, -4, -c, -f, and -l.  Allow the user to 
    clear all edits or all filter edits with or without depth limits.


    Version 1.7
    Jan C. Depner
    05/25/04
 
    Added write_bin_header call to end of main.c.


    Version 1.71
    Jan C. Depner
    12/16/04
 
    Changed Usage message for PFM 4.5 directory input.


    Version 1.72
    Jan C. Depner
    02/25/05

    Switched to open_existing_pfm_file from open_pfm_file.


    Version 1.73
    Jan C. Depner
    10/26/05

    Changed usage for PFM 4.6 handle file use.


    Version 1.74
    Jan C. Depner
    10/22/07

    Added fflush calls after prints to stderr since flush is not automatic in Windows.


    Version 1.75
    Jan C. Depner
    04/07/08

    Replaced single .h files from utility library with include of nvutility.h


    Version 1.76
    Jan C. Depner
    03/11/10

    Prints out file name prior to recomputing.


    Version 1.77
    Jan C. Depner
    05/06/11

    Fixed problem with getopt that only happens on Windows.


    Version 1.78
    Jan C. Depner
    03/08/14

    Added a line to force the linker to use -lm on Ubuntu 12.04 LTS x86_64 using
    gcc 4.6.3.  See bottom of main.c for complete explanation.


    Version 1.79
    Jan C. Depner (PFM Software)
    07/23/14

    - Switched from using the old NV_INT64 and NV_U_INT32 type definitions to the C99 standard stdint.h and
      inttypes.h sized data types (e.g. int64_t and uint32_t).

*/
