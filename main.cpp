// 0629.cpp : �������̨Ӧ�ó������ڵ㡣
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

//����Kinect������  
//class Kinect
//{
//	public:
//		    static const int        cColorWidth = 1920;
//		    static const int        cColorHeight = 1080;
//		    Kinect();
//		    ~Kinect();
//		    HRESULT                 InitKinect();//��ʼ��Kinect  
//		    void                    Update();//��������  
//		   // void                    ProcessColor(RGBQUAD* pBuffer, int nWidth, int nHeight);//����õ�������  
//	private:
//		 IKinectSensor*          m_pKinectSensor;// Current Kinect  
//		 IColorFrameReader*      m_pColorFrameReader;// Color reader  
//    	    RGBQUAD*                m_pColorRGBX;
//			
//				};

//������  
int main()
{
	   Kinect2 kinect;
	    kinect.InitKinect();
	    while (1)
		    {
		       kinect.Update2();
		        if (waitKey(1) >= 0)//����������˳�  
			       {
			            break;
			        }
		    }
	
		   return 0;
	}

