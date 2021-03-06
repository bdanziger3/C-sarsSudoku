/*
 * -----------------------------------------------------------------------------
 * utils.h
 *
 * Utils module that defines helper functions used throughout the sudoku program
 *
 * Blake Danziger, Tracey Mills, Tadeáš Uhlíř
 * 2020/06/02 
 * -----------------------------------------------------------------------------
 */

#ifndef __UTILS_H_
#define __UTILS_H_

//////////////////// grid_copy ////////////////////
/*      copies one grid into another
 *      assumes both grids have the the same size
 */
int grid_copy(int *from, int *to, int size);

#endif /* ifndef __UTILS_H_ */
