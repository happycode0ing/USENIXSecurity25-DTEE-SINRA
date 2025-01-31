/* generated vector header file - do not edit */
#ifndef VECTOR_DATA_H
#define VECTOR_DATA_H
#ifdef __cplusplus
        extern "C" {
        #endif
/* Number of interrupts allocated */
#ifndef VECTOR_DATA_IRQ_COUNT
#define VECTOR_DATA_IRQ_COUNT    (12)
#endif
/* ISR prototypes */
void sci_uart_rxi_isr(void);
void sci_uart_txi_isr(void);
void sci_uart_tei_isr(void);
void sci_uart_eri_isr(void);
void canfd_error_isr(void);
void canfd_channel_tx_isr(void);
void canfd_common_fifo_rx_isr(void);
void canfd_rx_fifo_isr(void);

/* Vector table allocations */
#define VECTOR_NUMBER_SCI4_RXI ((IRQn_Type) 0) /* SCI4 RXI (Receive data full) */
#define SCI4_RXI_IRQn          ((IRQn_Type) 0) /* SCI4 RXI (Receive data full) */
#define VECTOR_NUMBER_SCI4_TXI ((IRQn_Type) 1) /* SCI4 TXI (Transmit data empty) */
#define SCI4_TXI_IRQn          ((IRQn_Type) 1) /* SCI4 TXI (Transmit data empty) */
#define VECTOR_NUMBER_SCI4_TEI ((IRQn_Type) 2) /* SCI4 TEI (Transmit end) */
#define SCI4_TEI_IRQn          ((IRQn_Type) 2) /* SCI4 TEI (Transmit end) */
#define VECTOR_NUMBER_SCI4_ERI ((IRQn_Type) 3) /* SCI4 ERI (Receive error) */
#define SCI4_ERI_IRQn          ((IRQn_Type) 3) /* SCI4 ERI (Receive error) */
#define VECTOR_NUMBER_CAN0_CHERR ((IRQn_Type) 4) /* CAN0 CHERR (Channel  error) */
#define CAN0_CHERR_IRQn          ((IRQn_Type) 4) /* CAN0 CHERR (Channel  error) */
#define VECTOR_NUMBER_CAN0_TX ((IRQn_Type) 5) /* CAN0 TX (Transmit interrupt) */
#define CAN0_TX_IRQn          ((IRQn_Type) 5) /* CAN0 TX (Transmit interrupt) */
#define VECTOR_NUMBER_CAN0_COMFRX ((IRQn_Type) 6) /* CAN0 COMFRX (Common FIFO recieve interrupt) */
#define CAN0_COMFRX_IRQn          ((IRQn_Type) 6) /* CAN0 COMFRX (Common FIFO recieve interrupt) */
#define VECTOR_NUMBER_CAN_GLERR ((IRQn_Type) 7) /* CAN GLERR (Global error) */
#define CAN_GLERR_IRQn          ((IRQn_Type) 7) /* CAN GLERR (Global error) */
#define VECTOR_NUMBER_CAN_RXF ((IRQn_Type) 8) /* CAN RXF (Global recieve FIFO interrupt) */
#define CAN_RXF_IRQn          ((IRQn_Type) 8) /* CAN RXF (Global recieve FIFO interrupt) */
#define VECTOR_NUMBER_CAN1_CHERR ((IRQn_Type) 9) /* CAN1 CHERR (Channel  error) */
#define CAN1_CHERR_IRQn          ((IRQn_Type) 9) /* CAN1 CHERR (Channel  error) */
#define VECTOR_NUMBER_CAN1_TX ((IRQn_Type) 10) /* CAN1 TX (Transmit interrupt) */
#define CAN1_TX_IRQn          ((IRQn_Type) 10) /* CAN1 TX (Transmit interrupt) */
#define VECTOR_NUMBER_CAN1_COMFRX ((IRQn_Type) 11) /* CAN1 COMFRX (Common FIFO recieve interrupt) */
#define CAN1_COMFRX_IRQn          ((IRQn_Type) 11) /* CAN1 COMFRX (Common FIFO recieve interrupt) */
#ifdef __cplusplus
        }
        #endif
#endif /* VECTOR_DATA_H */
