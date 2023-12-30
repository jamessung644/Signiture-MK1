# Arduino Robot Hand Projct

## Synthetic Hand "Signiture MK1"


이 코드는 컴퓨터 비전을 사용하여 사용자의 손 모양을 감지하고,  
이를 아두이노로 전송하여 로봇팔을 조작하는 시스템을 위한 코드입니다.  
Python 코드는 MediaPipe 라이브러리를 사용하여 실시간으로 웹캠 영상에서 손의 움직임을 감지하고,  
이를 분석하여 가위, 바위, 보 중 어느 것인지 판단합니다.  
감지된 손 모양에 따라 아두이노로 명령을 전송하여 로봇팔을 특정한 모양으로 움직이게 합니다.  

[Takeaway](https://github.com/jamessung644/Signiture-MK1/blob/main/UNIHAND%201Page본.pdf)  
[PPT](https://github.com/jamessung644/Signiture-MK1/blob/main/UNIHAND%20PPT%20자료%20김래원%2C%20백승엽%2C%20이현형%2C%20성수한.pdf)  
[Demo Video](https://youtu.be/KIa77oBFC2w)  
[Website](https://m.site.naver.com/1hFPm)

## Development Environment
* MacBook AIR M2 8gb ram
* Python 3.9.6
 * Frameworks & Libraries: OpenCV, Mediapipe, numpy
* iphone 11 (instead webcam)

### Python library
```bash
!pip install opencv-python
!pip install mediapipe
!pip install numpy
```

# App inventor UI
| | |
|---|---|
| ![UI 1](https://github.com/jamessung644/Signiture-MK1/blob/main/img/UI1.png) | ![UI 2](https://github.com/jamessung644/Signiture-MK1/blob/main/img/UI2.png) |
| ![UI 3](https://github.com/jamessung644/Signiture-MK1/blob/main/img/UI3.png) | ![UI 4](https://github.com/jamessung644/Signiture-MK1/blob/main/img/UI4.png) |




## Profile
| 성수한 | 백승엽 | 이현형 | 김래원 |
|---|---|---|---|
| <img src="https://github.com/jamessung644/Signiture-MK1/assets/39661528/fd00379c-ddeb-459a-8376-bb3e4a03fc33" width="210" height="270"/> | <img src="백승엽의 이미지 URL" width="210" height="270"/> | <img src="이현형의 이미지 URL" width="210" height="270"/> | <img src="김래원의 이미지 URL" width="210" height="270"/> |
| 강원대학교 A.I융합학과 학부생<br> <br>Open CV 활용한 이미지 분석<br> 알고리즘 개발, 3D 프린팅 등 <br><br> **GitHub**: [jamessung644](https://github.com/jamessung644) <br> **웹사이트**: [portfol2o.vercel.app](https://portfol2o.vercel.app) <br> **Instagram**: [hhash_suhan](https://www.instagram.com/hhash_suhan/) | 강원대학교 컴퓨터공학과 학부생 <br>앱 개발,회로 설계, 아두이노 개발 | 강원대학교 인더스트리얼디자인전공 학부성 <br> 3D 모델링, 앱 디자인,<br> 발표 자료 <br><br> **Instagram**: [2hyun_bro.go.kr](https://www.instagram.com/2hyun_bro.go.kr/) | 강원대학교 메카트로닉스전공 학부성 <br> 앱 개발, 회로 설계,<br> 아두이노 개발 <br><br> **Instagram**: [gimraeweon31](https://www.instagram.com/gimraeweon31/)






