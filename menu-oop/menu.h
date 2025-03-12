/**
 * @file menu.h
 * @author Bob Lowe and Class
 * @brief Definition of a generic menu object.
 * @version 0.1
 * @date 2025-03-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <vector>
#include <string>
#include "command.h"

#ifndef MENU_H
#define MENU_H

class Menu : Command 
{
public:
    /**
     * @brief Construct a new Menu object
     * 
     */
    Menu();

    /**
     * @brief Add an item to the menu.
     * 
     * @param label The label for the item.
     * @param cmd The command which is executed in response to the menu.
     */
    virtual void addItem(const std::string &label, Command *cmd);

    /**
     * @brief Perform the menu.
     * 
     */
    virtual void execute() override;

protected:
    /**
     * @brief Display the menu.
     * 
     */
    virtual void display()=0;

    /**
     * @brief Select a menu item
     * 
     * @return int Return the index of a menu choice.
     */
    virtual int choose()=0;

    /**
     * @brief Determine if a choice is valid.
     * 
     * @param choice 
     * @return true If the choice is valid
     * @return false Otherwise
     */
    virtual bool validate(int choice)=0;

    /**
     * @brief Storage of menu items.
     * 
     */
    struct MenuItem 
    {
        std::string label;
        Command *cmd;
    };

    /**
     * @brief A vector of menu items.
     * 
     */
    std::vector<MenuItem> items;
};

#endif