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
