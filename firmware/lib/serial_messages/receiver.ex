defmodule SerialMessages.Receiver do
	
	use GenServer


	def start_link do
		GenServer.start_link(__MODULE__, [])
	end

	def init(state) do
		{:ok, pid} = Nerves.UART.start_link
		Nerves.UART.open(pid, "ttyACM0", speed: 9600)
		{:ok, state}
	end

	def handle_info({:nerves_uart, "ttyACM0", data}, state) do
		
		case String.contains? data, "1" do
			true -> IO.puts "Alarma!"
			false -> nil
		end

		{:noreply, state}
	end

end