/**
 * \file spi.c
 * \brief SPI driver.
 * \author Brahim Ben Sedrine
 * \version 0.1
 * \date 28 January 2025
 *
 * Source file containing SPI functions driver that can be used.
 *
 */



#include "spi.h"




/**
 *\def  D_uiSpi_iAd5601SpiTimeout
 *\brief SPI transaction timeout in ms
 */
#define D_uiSpi_iSpiTimeout		(5000)



/**
 * \fn T_eError_eErrorType eSpi_eMasterTransmit_Cmd(SPI_HandleTypeDef *in_pstSpiHandle, uint8_t *in_pucData, uint32_t in_uiLength)
 * \brief see spi.h for more details on this function.
 */
T_eError_eErrorType eSpi_eMasterTransmit_Cmd(SPI_HandleTypeDef *in_pstSpiHandle, uint8_t *in_pucData, uint32_t in_uiLength) {

	T_eError_eErrorType l_eReturnValue = Failure_Unexpected;
	HAL_StatusTypeDef l_eHalStatus;

	l_eHalStatus = HAL_SPI_Transmit(in_pstSpiHandle, in_pucData, in_uiLength, D_uiSpi_iSpiTimeout);

	if(l_eHalStatus == HAL_OK) {
		l_eReturnValue = Success;
	}

	/* Disable SPI, otherwise NSS signal will remain asserted as indicated in RM */
	__HAL_SPI_DISABLE(in_pstSpiHandle);

	return l_eReturnValue;
}





/**
 * \fn T_eError_eErrorType eSpi_eMasterTransmitReceive_Cmd(SPI_HandleTypeDef *in_pstSpiHandle, uint8_t *in_pucTxData, uint8_t *out_pucRxData, uint32_t in_uiLength)
 * \brief see spi.h for more details on this function.
 */
T_eError_eErrorType eSpi_eMasterTransmitReceive_Cmd(SPI_HandleTypeDef *in_pstSpiHandle, uint8_t *in_pucTxData, uint8_t *out_pucRxData, uint32_t in_uiLength) {

	T_eError_eErrorType l_eReturnValue = Failure_Unexpected;
	HAL_StatusTypeDef l_eHalStatus;

	l_eHalStatus = HAL_SPI_TransmitReceive(in_pstSpiHandle, in_pucTxData, out_pucRxData, in_uiLength, D_uiSpi_iSpiTimeout);

	if(l_eHalStatus == HAL_OK) {
		l_eReturnValue = Success;
	}

	/* Disable SPI, otherwise NSS signal will remain asserted as indicated in RM */
	__HAL_SPI_DISABLE(in_pstSpiHandle);

	return l_eReturnValue;
}
