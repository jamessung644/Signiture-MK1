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
<div style="display: flex;">
  <!-- 성수한 프로필 -->
  <div style="flex: 50%; padding-right: 10px;">
    <table>
      <tr>
        <th>성수한</th>
      </tr>
      <tr>
        <td>
          <img src="https://github.com/jamessung644/Signiture-MK1/assets/39661528/fd00379c-ddeb-459a-8376-bb3e4a03fc33" width="280" height="360"/>
        </td>
      </tr>
      <tr>
        <td>강원대학교 A.I융합학과 학부생 <br>Open CV 활용한 이미지 분석 알고리즘 개발, 3D 프린팅 등 <br><br> <strong>GitHub</strong>: <a href="https://github.com/jamessung644">jamessung644</a> <br> <strong>웹사이트</strong>: <a href="https://portfol2o.vercel.app">portfol2o.vercel.app</a> <br> <strong>Instagram</strong>: <a href="https://www.instagram.com/hhash_suhan/">hhash_suhan</a></td>
      </tr>
    </table>
  </div>

  <!-- 백승엽 프로필 -->
  <div style="flex: 50%;">
    <table>
      <tr>
        <th>백승엽</th>
      </tr>
      <tr>
        <td>
          <img src="백승엽의 이미지 URL" width="280" height="360"/>
        </td>
      </tr>
      <tr>
        <td>강원대학교 컴퓨터공학과 학부생 <br>앱 개발, 회로 설계, 아두이노 개발</td>
      </tr>
    </table>
  </div>
</div>




