# Report
# M1_app_quiz
- quiz based on show kbc.
- This application helps to improve your knowledge. 
## Folder Structure

| Folder            | Description                                  |
| ----------------- | -------------------------------------------- |
| 1_Requirements    | Describe about the requirements and research |
| 2_Design          | Descibe about the design of Project          |
| 3_Implementation  | All coding related files                     |
| 4_TestPlanAndOutput        | Test cases of project                                  |
| 5_Report        | Complete report of project                   |
| 6_ImagesAndVideos | Images and Videos related to project         |
| 7_Other|other files related to project|

# Requirements for KBC quiz mini project
## Identifying features
- Participants can enter the quiz by enter their name.
- Show the overall process to the participants before entering quiz.
- Participate in MCQ type quiz.
- Make a timer to the every question.
- Provide report of questions and answers.
- Increase difficulte level of questions in progressing of quiz.
- Participants can use 50/50, swap question, quit options.
- show how much price money won after the quiz.
## Start of art/research
[KBC wiki](https://en.wikipedia.org/wiki/Kaun_Banega_Crorepati)

![WhatsApp Image 2021-11-20 at 9 39 27 PM](https://user-images.githubusercontent.com/94187482/142733231-770e0b2a-de7c-47bc-ab59-626162468b2c.jpeg)
## Swot analysis
### - *Strength*
- Very reputed quiz platform.
- Well architectual quiz.
- Helps to improve knowledge of customers.
### - *Weakness*
- Less scope to improve features.
- Some people can't participates in quiz.
### - *Opportunities*
- Potential to to diversity into related market segments.
- Can reach to more locations.
### - *Threats*
- Compitetion with other quiz platforms.
## 4W and 1H
### - Who
- Yanadi Prudhvi try to implement a problem statement.
### - What
- Implementation of online application for KBC quiz.
### - Where
- It is a online application.
### - How
- This application is implemented using C programing language.
## Detailed requirements
### - *High level requirements*
|HLR_ID|Description|Status(Implemented/Future)|
|------|-----------|--------------------------|
|HLR_1|Entering the quiz|Implimented|
|HLR_2|Participates in quiz|Implimented|
|HLR_3|After the quiz, show result|Implimented|
|HLR_4|Timer for every question|Future|
|HLR_5|Life lines and quit option|Future|
### - *Low level requirements*
|LLR_ID|Description|Status(Implemented/Future)|
|------|-----------|--------------------------|
|LLR_1_HLR_1| Participant give name in char type|Implimented|
|LLR_2_HLR_1|Show Welcome message|Implimented|
|LLR_3_HLR_1|Show rules of quiz|Implimented|
|LLR_1_HLR_2|Enter choice for question in int type|Implimented|
|LLR_2_HLR_2|If choice other than 1,2,3,4, show 'give proper response',and read input again|Implimented|
|LLR_3_HLR_2|If choice correct go to next question.|Implimented|
|LLR_4_HLR_2|If choice wrong exit from quiz|Implimented|
|LLR_1_HLR_3|Show how much won by participant.|Implimented|
