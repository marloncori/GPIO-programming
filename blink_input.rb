require "pigpio"
include Pigpio::Constant

pi=Pigpio.new
unless pi.connect
  exit -1
end

led = pi.gpio(18)
sensor = pi.gpio(22)

led.mode = PI_OUTPUT
led.pud = PI_PUD_OFF

sensor.mode = PI_INPUT
sensor.pud = PI_PUD_OFF

trap("SIGINT") { throw :ctrl_c }

 catch :ctrl_c do
  begin
    if sensor.read == 1
         led.write 0
         puts "No object detected."
    else
         led.write 1
         puts "Object has been detected!!!"
    end
  rescue Exception
     puts "User has ended the program."
     pi.stop
   end
 end
