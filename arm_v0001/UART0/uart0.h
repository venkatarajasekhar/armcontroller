/****************************************Copyright (c)**************************************************
**                               ������������Ƭ����չ���޹�˾
**                                     ��    ��    ��
**                                        ��Ʒһ�� 
**
**                                 http://www.zlgmcu.com
**
**--------------�ļ���Ϣ--------------------------------------------------------------------------------
**��   ��   ��: uart0.h
**��   ��   ��: ������
**����޸�����: 2003��7��4��
**��        ��: ��COS-II��LPC210x��UART0�ײ�����ͷ�ļ�
**              
**--------------��ʷ�汾��Ϣ----------------------------------------------------------------------------
** ������: ������
** ��  ��: v1.0
** �ա���: 2003��7��4��
** �衡��: ԭʼ�汾
**
**--------------��ǰ�汾�޶�------------------------------------------------------------------------------
** �޸���: ������
** �ա���: 2003��7��9��
** �衡��: ����ע��
**
**------------------------------------------------------------------------------------------------------
********************************************************************************************************/

#define UART0_FIFO_LENGTH         16
 
#ifndef IN_UART0

extern uint8 UART0Init(uint32 bps);
/*********************************************************************************************************
** ��������: UART0Init
** ��������: ��ʼ��UART0 
** �䡡��: bps��������
**
** �䡡��:TRUE  :�ɹ�
**        FALSE:ʧ��
** ȫ�ֱ���: Uart0Sem
** ����ģ��: QueueCreate,OSSemCreate
********************************************************************************************************/

extern void UART0Putch(uint8 Data);
/*********************************************************************************************************
** ��������: UART0Putch
** ��������: ����һ���ֽ����� 
** �䡡��: Data�����͵�����
** �䡡��:��
** ȫ�ֱ���: ��
** ����ģ��: QueueWrite,QueueRead
********************************************************************************************************/
        
extern void UART0Write(uint8 *Data, uint16 NByte);
/*********************************************************************************************************
** ��������: UART0Write
** ��������: ���Ͷ���ֽ����� 
** �䡡��: Data:�������ݴ洢λ��
**        NByte:�������ݸ���
** �䡡��:��
** ȫ�ֱ���: ��
** ����ģ��: UART0Putch
********************************************************************************************************/

extern uint8 UART0Getch(void);
extern void UART0RXLineClear(void);
extern uint8 UART0GetchForWait(uint8 *err);      
/*********************************************************************************************************
** ��������: UART0Getch
** ��������: ����һ���ֽ�����
** �䡡��: ��
** �䡡��: ���յ�������
** ȫ�ֱ���: ��
** ����ģ��: OSSemPend
********************************************************************************************************/

extern void UART0_Exception(void);
/*********************************************************************************************************
** ��������: UART0_Exception
** ��������: UART0�жϷ������
** �䡡��: ��
**
** �䡡��: ��
**         
** ȫ�ֱ���: ��
** ����ģ��: OSSemPost,QueueRead
********************************************************************************************************/

#endif

#define UART0_SEND_QUEUE_LENGTH   60    /* ��UART0�������ݶ��з���Ŀռ��С */
/*********************************************************************************************************
**                            End Of File
********************************************************************************************************/