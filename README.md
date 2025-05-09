# 🚗 신호등 인식 기반 자율주행 자동차 (2024 COMP 세미나 프로젝트)

> 2024년 전자공학과 소학회 COMP D&A 1,2학년 학생들을 대상으로 진행한 자율주행 자동차 세미나 실습 프로젝트입니다.  
> 최종 목표는 YOLOv5 기반 신호등 인식 + 아두이노 모터 제어를 활용한 자율주행 자동차 구현입니다.

---




## 📌 세미나 주차별 상세 구성

| Week | 주제 | 내용 |
|------|------|------|
| OT | 세미나 개요 | 강의 목표, 전체 커리큘럼 소개 |
| 1주차 | Python & 환경설정 | Python 설치, IDLE 사용법, 간단한 출력문, 변수 선언, 조건문 등 Python 기본 문법 소개 |
| 2주차 | 머신러닝 기초 | * Teachable Machine 실습<br> * Scikit-learn을 이용한 Iris 데이터셋 시각화 및 분석<br> * Pandas, matplotlib를 사용한 데이터셋 분할(train/test), 시각화, 표준화 레이블 인코딩 등 기본 전처리 실습 |
| 3주차 | 딥러닝 실습 | YOLOv5 모델 다운로드 및 설치, 웹캠을 활용한 실시간 객체 탐지 테스트 진행 |
| 4주차 | 하드웨어 제어 | 아두이노 자동차 조립 및 제어 실습 |
| 5주차 | 신호등 인식 주행 | 신호등 인식 모델 연동 및 색상·방향 인식 기반 주행 구현 |


---

## 🔍 주요 폴더 구조
- 📁 seminar_materials/ # 발표 자료 (PPTX)

- 📁 notebooks/ # 실습 코드 (ipynb) 

- 📁 arduino_motor_control/ # 아두이노 제어 코드 

- 📁 yolov5 / # 커스텀 데이터셋 학습 설정 

- 📄 README.md # 이 문서


---

## ✅ 기능 요약

- Python 기반 딥러닝 실습 (Colab)
- Roboflow 커스텀 데이터셋 다운로드 및 학습
- YOLOv5 모델 학습 및 추론
- 아두이노 모터 제어 코드 구현
- 신호 또는 방향 인식 → 모터 동작 자동화

---

## 📷 시연 영상 및 이미지

| 🔴 정지 신호 인식 | 🟢 우회전 신호 인식 |
|------------------|--------------------|
| ![정지](media/traffic_red.gif) | ![우회전](media/traffic_right.gif) |

---

## 🛠️ 사용 기술 스택

- Python, Google Colab, Scikit-learn, OpenCV
- YOLOv5, Roboflow
- Arduino, Serial 통신
