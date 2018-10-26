/*****************************************************************************/
/*           1D Burger's equation solved by pseudo spectral method           */
/*****************************************************************************/




int main(int argc, char *argv[])
{
  
 
  /* Define grid */
  

  /* Define wavenumber */

  /* Initialize solution */

  /* Transform the solution to Fourier space */

  
  /* Start time loop */
  for (int it = 0; it < MAXIMUM; ++it) {
    
    /* Compute the u_x in spectral space */

    /* Transform u_x from spectral to physical space */

    /* Construct u * u_x in physical space */

    /* Advance the time step */

    /* Check whether we should store the solution in file */
  }
  
  
  return 0;
}
