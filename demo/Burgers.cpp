#include <iostream>

using namespace std;


/*****************************************************************************/
/*           1D Burger's equation solved by pseudo spectral method           */
/*****************************************************************************/



void initialize();
void constructConv();


int main(int argc, char *argv[])
{
  // Time control
  int ntmax;
  double tFinal;
  double dt;

  // Space control
  int N; // number of collocation points
  
  // Initial the solution
  initialize();

  // Start the time loop
  for (int i = 0; i < ntmax; ++i) {

    // Construct \hat(w)_k^{n}
    conv();

    // Advance to \hat{u}_k^{n+1}
    
    // Check the save
    if () {
      // save the solution in physical space
    }


    // Check time
    if (condition) {
      // exit
    }
  }

  

  
  return 0;
}

void initialize()
{
  ///////////////////////////////////////////////////////////////////////////////
  // subroutine to initialize the solution both in physical and spectral space //
  // compute u^0(x_i) and \hat{u}^0_k
  ///////////////////////////////////////////////////////////////////////////////
  





  
}

void constructConv()
{
  /////////////////////////////////////////////////////////////////////////////
  //              subroutine to construct the convective terms               //
  //              the 3/2 rule is used to dealiasing
  /////////////////////////////////////////////////////////////////////////////

}
