/**
 * @file initio.h
 * @author your name (you@domain.com)
 * @brief A simple set of functions for prompted integer io.
 * @version 0.1
 * @date 2025-03-31
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef INIT_H
#define INIT_H
#include <string>

/**
 * @brief Get an integer from the user after display prompt.
 * 
 * @param prompt 
 * @return int 
 */
int promptInt(const std::string &prompt);

/**
 * @brief Force the user to give us an integer in this range.
 * 
 * @param prompt 
 * @param min 
 * @param max 
 * @return int 
 */
int promptInt(const std::string &prompt, int min, int max);

#endif