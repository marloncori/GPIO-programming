local GPIO = require('periphery').GPIO

-- Open GPIO /dev/gpiochip0 line 76 with input direction
local gpio_in = GPIO("/dev/gpiochip0", 76, "in")
-- Open GPIO /dev/gpiochip0 line 17 with output direction
local gpio_out = GPIO("/dev/gpiochip0", 71, "out")

local value = gpio_in:read()
gpio_out:write(not value)

gpio_in:close()
gpio_out:close()
