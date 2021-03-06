#ifndef INVENTORY_VIEW_HPP
#define INVENTORY_VIEW_HPP

#include "View.hpp"
#include "inventory/Inventory.hpp"

#define INVENTORY_VIEW_X 16
#define INVENTORY_VIEW_Y  0

class InventoryView : public View
{
	void drawInventory(Inventory *inventory);
	void drawItemStack(uint8_t x, uint8_t y, ItemStack *itemStack, bool selected);
	uint8_t cursor = 0;

public:
	virtual void handleInput();
	virtual void draw();
};

#endif
