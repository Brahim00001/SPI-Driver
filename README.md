This SPI driver was developed for an STM32-based embedded system to enable high-speed, full-duplex communication with peripherals such as sensors, memory devices, and digital-to-analog converters (DACs).

Features:

Master SPI Transmission: Sends data efficiently using HAL_SPI_Transmit.

Full-Duplex Communication: Uses HAL_SPI_TransmitReceive for simultaneous data exchange.

Configurable Timeout Mechanism: Ensures reliable transactions with a timeout of 5000ms.

Automatic SPI Disable: Prevents unintended NSS signal assertion.

Technologies Used:
✅ Embedded C
✅ STM32 HAL (Hardware Abstraction Layer)
✅ SPI Protocol

Code Snippet:
(Provide a relevant function snippet, e.g., eSpi_eMasterTransmit_Cmd)

Application:

Used in LoRa-based smart irrigation system for sensor data exchange.

Can be integrated into high-speed communication with ADCs, DACs, and memory devices.
