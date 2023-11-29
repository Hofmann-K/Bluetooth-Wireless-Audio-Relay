
#include "remote.h"

#define LOG_MODULE_NAME remote
LOG_MODULE_REGISTER(LOG_MODULE_NAME);

// buffer, essentially acts as a pause or wait depening on use
static K_SEM_DEFINE(bt_init_ok, 1, 1);

// [/]-> Callbacks :: (err=bt_ready(*NAME))
// v--In defintions											v-- becomes defined as
// typedef void (*bt_ready_cb_t)(int err); --> becomes --> void bt_ready(int err)
void bt_ready(int err)
{
	if(err)
	{
		LOG_ERR("bt_enable returned %d", err);
	}
	// Once done 'gives' to k_sem_take in bluetooth_init(void)
	k_sem_give(&bt_init_ok);
}

int bluetooth_init(void)
{

	int err;
	LOG_INF("Initialzing Bluetooth");

	err = bt_enable(bt_ready);	// Go to Definition (Highlight -> Right-Click), see bt_ready == bt_ready_cb_t
								// Definition of bt_ready_cb_t is a callback function ->[/]
	if(err)
	{
		LOG_ERR("bt_enable returned %d", err);
		return err;
	}

	// we want to ensure the bt_ready(int err) function to finish, therefore we make this function wait
	k_sem_take(&bt_init_ok, K_FOREVER);

	return err;
}