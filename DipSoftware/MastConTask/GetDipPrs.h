#ifndef  _GetDipPrs_h_
#define  _GetDipPrs_h_

#define		DIP_PRE_DIF				84
//#define		DIP_NO_COM_ERROR		83
//#define		DIP1_DATA_ERROR			85
//#define		DIP2_DATA_ERROR			75
//#define		DIP1_LIMIT_ERROR		82
//#define		DIP2_LIMIT_ERROR		72
#define		DIP_PRS_MAX_VAL			10000

typedef	struct	_stcPrsLine_
{
	int16	Prs1;
	int16	Cur1;
	int16	Prs2;
	int16	Cur2;
}stcPrsLine;

//
////------------------------------------------------------------------------
////  名  称 ：void WriteCS_DIS( uint8 temp )
////  功  能 ：设置 CS_DIS
//// 入口参数：无
//// 出口参数：无
////------------------------------------------------------------------------
//extern	void WriteEN_485(uint8 temp);
//
////----------------------------------------------------------------------------
//// 名    称：   uint16  GetDip1Prs(void)
//// 功    能：   取油尺1压强
//// 入口参数：   无
//// 出口参数：   无
////----------------------------------------------------------------------------
//extern	int16  GetDip1Prs(void);
//
////----------------------------------------------------------------------------
//// 名    称：   uint16  GetDip2Prs(void)
//// 功    能：   取油尺1压强
//// 入口参数：   无
//// 出口参数：   无
////----------------------------------------------------------------------------
//extern	int16  GetDip2Prs(void);
//
////----------------------------------------------------------------------------
//// 名    称：   uint16  GetDipTmp(void)
//// 功    能：   取油尺1压强
//// 入口参数：   无
//// 出口参数：   无
////----------------------------------------------------------------------------
//extern	int8	GetDipTmp(void);
//
////-------------------------------------------------------------------------------------------------
////函数名称:             void  DipTask(void)  
////函数功能:             对油尺故障进行判断
////入口参数:             无
////出口参数:             返回油尺故障代码
////--------------------------------------------------------------------------------------------------
//extern	void  COM1Task(void) ;
//
////-------------------------------------------------------------------------------------------------
////函数名称:             uint8  JudgeDip1Error(void) 
////函数功能:             对测量装置1故障进行判断
////入口参数:             无
////出口参数:             返回测量装置故障代码
////--------------------------------------------------------------------------------------------------
//extern	uint8  JudgeDip1Error(void) ;
//
////-------------------------------------------------------------------------------------------------
////函数名称:             uint8  JudgeDip2Error(void) 
////函数功能:             对测量装置1故障进行判断
////入口参数:             无
////出口参数:             返回测量装置故障代码
////--------------------------------------------------------------------------------------------------
//extern	uint8  JudgeDip2Error(void) ;
//
////-------------------------------------------------------------------------------------------------
////函数名称:             void  TestDip(void) 
////函数功能:             TAX2箱通信信息测试
////入口参数:             无
////出口参数:             无
////说明:                 
////--------------------------------------------------------------------------------------------------
//extern	uint8  TestDip(uint8 *ErrFlgTmp);
//
////----------------------------------------------------------------------------
//// 名    称：   uint8  Dip2DataErrFlg(void)
//// 功    能：   接收TAX2后部分。
//// 入口参数：   无
//// 出口参数：   无
////----------------------------------------------------------------------------
//extern	uint8  GetDip2ErrCod(void);
//
////----------------------------------------------------------------------------
//// 名    称：   uint8  Dip2DataErrFlg(void)
//// 功    能：   接收TAX2后部分。
//// 入口参数：   无
//// 出口参数：   无
////----------------------------------------------------------------------------
//extern	uint8  GetDip1ErrCod(void);
//
////------------------------------------------------------------------------
//// 名    称：   void    BroadDipCod(void)	
//// 功    能：   将取数据指令发送到测量装置
//// 入口参数：	无
//// 出口参数：	无
////------------------------------------------------------------------------
//extern	void    BroadDipCod(void);
//
////------------------------------------------------------------------------
//// 名    称：   void    SetPrs2Line(stcPrsLine * sPrsLine)	
//// 功    能：   将取数据指令发送到测量装置
//// 入口参数：	无
//// 出口参数：	无
////------------------------------------------------------------------------
//extern	void    SentPrs1Line(stcPrsLine * sPrsLine);
//
////------------------------------------------------------------------------
//// 名    称：   void    SetPrs2Line(stcPrsLine * sPrsLine)	
//// 功    能：   将取数据指令发送到测量装置
//// 入口参数：	无
//// 出口参数：	无
////------------------------------------------------------------------------
//extern	void    SentPrs2Line(stcPrsLine * sPrsLine);
//
////------------------------------------------------------------------------
//// 名    称：   void    SetPrs2Line(stcPrsLine * sPrsLine)	
//// 功    能：   将取数据指令发送到测量装置
//// 入口参数：	无
//// 出口参数：	无
////------------------------------------------------------------------------
//extern	void    SentOutSetPrs(void);

#endif
