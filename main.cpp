// 0629.cpp : 定义控制台应用程序的入口点。
//



#include "stdafx.h"  
#include "kinect.h"
#include<iostream>
#include "opencv2/opencv.hpp"
#include <windows.h>

//#include"open.h"
#include"depth.h"
using namespace cv;

//template<class Interface>
//inline void SafeRelease(Interface *& pInterfaceToRelease)
//{    if (pInterfaceToRelease != NULL)
//	    {
//        pInterfaceToRelease->Release();
//		pInterfaceToRelease = NULL;
//	    }
//	}

//定义Kinect方法类  
//class Kinect
//{
//	public:
//		    static const int        cColorWidth = 1920;
//		    static const int        cColorHeight = 1080;
//		    Kinect();
//		    ~Kinect();
//		    HRESULT                 InitKinect();//初始化Kinect  
//		    void                    Update();//更新数据  
//		   // void                    ProcessColor(RGBQUAD* pBuffer, int nWidth, int nHeight);//处理得到的数据  
//	private:
//		 IKinectSensor*          m_pKinectSensor;// Current Kinect  
//		 IColorFrameReader*      m_pColorFrameReader;// Color reader  
//    	    RGBQUAD*                m_pColorRGBX;
//			
//				};

//主函数  
int main()
{
	   Kinect2 kinect;
	    kinect.InitKinect();
	    while (1)
		    {
		       kinect.Update2();
		        if (waitKey(1) >= 0)//按下任意键退出  
			       {
			            break;
			        }
		    }
	
		   return 0;
	}

