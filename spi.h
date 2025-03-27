#ifndef SPI_H_
#define SPI_H_


/**
 * \file spi.h
 * \brief SPI driver header.
 * \author Brahim Ben Sedrine
 * \version 0.2
 * \date 28 January 2020
 *
 * Header file containing the useful Functions to communicate with the SPI module.
 *
 */


#include "main.h"
#include "error.h"





/**
 * \fn T_eError_eErrorType eSpi_eMasterTransmit_Cmd(SPI_HandleTypeDef *in_pstSpiHandle, uint8_t *in_pucData, uint32_t in_uiLength)
 * \brief Transmit buffer over SPI from Master.
 *
 * \param in_pstSpiHandle SPI Handler.
 * \param in_pucData Data buffer to send through SPI.
 * \param in_uiLength Number of Bytes to send from the Data buffer through SPI.
 * \return Success if the SPI transaction is finished correctly, Failure_Unexpected else.
 */
T_eError_eErrorType eSpi_eMasterTransmit_Cmd(SPI_HandleTypeDef *in_pstSpiHandle, uint8_t *in_pucData, uint32_t in_uiLength);



/**
 * \fn T_eError_eErrorType eSpi_eMasterTransmit_Cmd(SPI_HandleTypeDef *in_pstSpiHandle, uint8_t *in_pucData, uint32_t in_uiLength)
 * \brief Transmit buffer over SPI from Master.
 *
 * \param in_pstSpiHandle SPI Handler.
 * \param in_pucTxData Data buffer to send through SPI.
 * \param in_pucRxData Pointer to the first byte received from SPI.
 * \param in_uiLength Nbr bytes to send and receive.
 * \return Success if the SPI transaction is finished correctly, Failure_Unexpected else.
 */
T_eError_eErrorType eSpi_eMasterTransmitReceive_Cmd(SPI_HandleTypeDef *in_pstSpiHandle, uint8_t *in_pucTxData, uint8_t *out_pucRxData, uint32_t in_uiLength);



#endif /* SPI_H_ */
