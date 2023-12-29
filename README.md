# Signiture-MK1
Synthetic Hand "Signiture MK1"

이 코드는 컴퓨터 비전을 사용하여 사용자의 손 모양을 감지하고,
이를 아두이노로 전송하여 로봇팔을 조작하는 시스템을 위한 코드입니다.
Python 코드는 MediaPipe 라이브러리를 사용하여 실시간으로 웹캠 영상에서 손의 움직임을 감지하고, 
이를 분석하여 가위, 바위, 보 중 어느 것인지 판단합니다. 
감지된 손 모양에 따라 아두이노로 명령을 전송하여 로봇팔을 특정한 모양으로 움직이게 합니다.


# Python 3.9.6

### Python library
```bash
!pip install opencv-python
!pip install mediapipe
!pip install numpy
```

## 시연영상
With Arduino 

https://github.com/jamessung644/Signiture-MK1/assets/39661528/2ac7d80f-6d38-4282-86b8-d826c154cf70

# App inventor UI
  ![KakaoTalk_Photo_2023-12-29-12-54-04 002png](https://github.com/jamessung644/Signiture-MK1/assets/39661528/2fb8cdd0-254c-4823-978f-b519d503bc22)
  ![KakaoTalk_Photo_2023-12-29-12-54-04 001png](https://github.com/jamessung644/Signiture-MK1/assets/39661528/66273a66-8472-4810-bde9-c5fd5de0a004)
  ![KakaoTalk_Photo_2023-12-29-12-54-07 003png](https://github.com/jamessung644/Signiture-MK1/assets/39661528/ec016198-3e85-45b2-a699-d53e4d565c2d)
  ![KakaoTalk_Photo_2023-12-29-12-54-08 004png](https://github.com/jamessung644/Signiture-MK1/assets/39661528/5c0995d4-4258-4105-94c1-2ef4c01475e7)
