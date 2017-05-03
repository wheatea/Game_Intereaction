#define NN 0 //休止符


#define L1d 247
#define L1o 262
#define L1u 277
#define L2d 277
#define L2o 294
#define L2u 311
#define L3d 311
#define L3o 330
#define L3u 349
#define L4d  330
#define L4  349
#define L4u 370
#define L5d 370
#define L5  392
#define L5u 415
#define L6d 415
#define L6  440
#define L6u 466
#define L7d 466
#define L7  494
#define L7u 523

#define M1d 494
#define M1  523
#define M1u 554
#define M2d 554
#define M2  587
#define M2u 622
#define M3d 622
#define M3  659
#define M3u 698
#define M4d 659
#define M4  698
#define M4u 740
#define M5d 740
#define M5  784
#define M5u 831
#define M6d 831
#define M6  880
#define M6u 932
#define M7d 932
#define M7  988
#define M7u 1047

#define H1d  988
#define H1  1047
#define H1u 1109
#define H2d 1109
#define H2  1175
#define H2u 1245
#define H3d 1245
#define H3  1319
#define H3u 1397
#define H4d 1319
#define H4  1397
#define H4u 1480
#define H5d 1480
#define H5  1568
#define H5u 1661
#define H6d 1661
#define H6  1760
#define H6u 1865
#define H7d 1865
#define H7  1976
#define H7u  2093


#define buzzer_pin 8 //定义蜂鸣器引脚

/*------------定义歌曲音调的数组------------*/

int notes[] = {
NN,                                 H1,               H5,     
H6,         NN,   H6,     H5,               H6,           NN, H6,
H1/2,             H4, NN, H4,                             NN, H4,
H3,     H4,               H5,               H1,               H7d,NN,
H7d,    H6,       H5,     H6,
H4,         NN,   H4,     H3,               H4,           NN, H4,
H1/2,             H4, NN, H4,                             NN, H4,
H3,     H4,               H5,               H1,               H5, NN,
H5,     H4,       H3,     H4,                         H5,
H6,         NN,   H6,     H5,               H6,           NN, H6,
H1/2,             H4, NN, H4,                             NN, H4,
H3,     H4,               H5,               H1,               H7d,NN,
H7d,    H6,       H5,     H6,
H4,         NN,   H4,     H3,               H4,           NN, H4,
H1/2,             H4, NN, H4,                                 H6,
H7d,    H6,               H5,               H1,               H5, NN,
H5,     H4,       H3,     H4,

                                                                        //page2,146
NN,                       H1,       H4,         NN,   H4,
H3,               H4,     H1,               NN,               M6,
H1,                                 H5,               H3,
H3,               H4,     H1,
NN,                       H1,       H4,         NN,   H4,
H3,               H4,     H5,                         H1,
H5,                       H6, NN,   H6, 

NN,                       H1,       H4,         NN,   H4,
H3,               H4,     H1,               NN,               M6,
H1,                                 H5,               H3,
H3,               H4,     H1, 
NN,                       M6,       H4,         NN,   H4,
H5,               H4,     H3,               H1,           NN, H1,
H3,                       H4, NN,   H4, 
                                                NN,   H4,     H5,
H6,         NN,   H6,     H5,                         H4,     H5,
                                                      H3,     H4,
H5,         NN,   H5,     H4,                         H3,     H4,
                                                      H2,     H3,
H4,                       H3,       H4, 
                          H1,       H5,     H4,       H3,     H1,
H5,                       H6, NN,   H6, 
                                                      H4,     H5,
H6,         NN,   H6,     H5,                         H4,     H5,
                                                      H3,     H4,
H5,         NN,   H5,     H7d,                        H6,     H4,
                                    H2,               H6,
H5,               H4, NN, H4,                   NN,   H4, NN, H4,
H3,                       H1, NN,   H1,     H5,       H4,     H3, NN,
H3,                       H4, NN,   H4,
                                                                      //page 3,97
                                    H1,               H5,     
H6,         NN,   H6,     H5,               H6,           NN, H6,
H1/2,             H4, NN, H4,                             NN, H4,
H3,     H4,               H5,               H1,               H7d,NN,
H7d,    H6,       H5,     H6,
H4,         NN,   H4,     H3,               H4,           NN, H4,
H1/2,             H4, NN, H4,                             NN, H4,
H3,     H4,               H5,               H1,               H5, NN,
H5,     H4,       H3,     H4,                         H5,
H6,         NN,   H6,     H5,               H6,           NN, H6,
H1/2,             H4, NN, H4,                             NN, H4,
H3,     H4,               H5,               H1,               H7d,NN,
H7d,    H6,       H5,     H6,
H4,         NN,   H4,     H3,               H4,           NN, H4,
H1/2,             H4, NN, H4,                                 H6,
H7d,    H6,               H5,               H1,               H5, NN,
H5,     H4,       H3,     H4,
                                                                        //page 4,97
                                    H1,               H5,   
H6,         NN,   H6,     H5,               H6,           NN, H6,
H1/2,             H4, NN, H4,                             NN, H4,
H3,     H4,               H5,               H1,               H7d,NN,
H7d,    H6,       H5,     H6,
H4,         NN,   H4,     H3,               H4,           NN, H4,
H1/2,             H4, NN, H4,                             NN, H4,
H3,     H4,               H5,               H1,               H5, NN,
H5,     H4,       H3,     H4,                         H5,
H6,         NN,   H6,     H5,               H6,           NN, H6,
H1/2,             H4, NN, H4,                             NN, H4,
H3,     H4,               H5,               H1,               H7d,NN,
H7d,    H6,       H5,     H6,
H4,         NN,   H4,     H3,               H4,             NN, H4,
H1/2,             H4, NN, H4,                                 H6,
H7d,    H6,               H5,               H1,               H5, NN,
H5,     H4,       H3,     H4,
                                                                      //page 5,145
                                            H4,       H5,     H6,
H7d,                  NN, H7d,NN,   H7d,        H1/2,         H2/2,NN,  
H2/2,       H1/2,         H7d,      H6,               H1,
H1/2,                     H1, NN,   H1,               H5,         NN,
H5,         H4,           H3,       H4,         NN,   H4, H5, H6,
H2,                       H6,       NN, H6,           H5,         H4,
H5,               H1,         NN,   H1,               H1/2,
H7d,                      H6, H5,   H6,                           NN,
H6,               H1,     H6,       H5,               H4, H5, H6,
H2,                   NN, H2, NN,   H2,         H3,           H4, NN,
H4,         H3,           H4,       H5,               H1,
H5,                       H1/2,NN,  H1/2,             H3/2,
H5/2,       H4/2,         H3/2,     H4/2,             H2/2,H3/2,H4/2,H5/2,
H6/2,H2/2,H6,H5,  H6, H5, H4, H3,   H4, H3, H1, M6,   M5, M6, M5, M4,
H1/2,H2/2,H1/2,H6,H7d,H6, H4, H3,   H4, H3, H2, H1,   H2, H1, M6, H4,
L4, L5, L6, L7d,  L6, M1, M2, M3,   M4, M5, M6, M7d,  M6, H1, H2, H3,
H4,                                 H1,               H5,
                                                                      //page 6,97
H6,         NN,   H6,     H5,               H6,           NN, H6,
H1/2,             H4, NN, H4,                             NN, H4,
H3,     H4,               H5,               H1,               H7d,NN,
H7d,    H6,       H5,     H6,
H4,         NN,   H4,     H3,               H4,           NN, H4,
H1/2,             H4, NN, H4,                             NN, H4,
H3,     H4,               H5,               H1,               H5, NN,
H5,     H4,       H3,     H4,                         H5,
H6,         NN,   H6,     H5,               H6,           NN, H6,
H1/2,             H4, NN, H4,                             NN, H4,
H3,     H4,               H5,               H1,               H7d,NN,
H7d,    H6,       H5,     H6,
H4,         NN,   H4,     H3,               H4,           NN, H4,
H1/2,             H4, NN, H4,                                 H6,
H7d,    H6,               H5,               H1,               H5, NN,
H5,               H4,               H3,               H4,

NN,
};

/*------------定义歌曲节奏的数组------------*/

unsigned char beats[] = {
0x08,                                       0x04,                 0x04,
0x03,          0x01, 0x02,     0x04,                  0x03,            0x01,0x02,
0x04,                0x01,0x01,0x07,                                   0x01,0x02,
0x02,     0x04,                0x04,                  0x04,                 0x01,0x01,
0x02,     0x02,      0x02,     0x0A,
0x03,          0x01, 0x02,     0x04,                  0x03,            0x01,0x02,
0x04,                0x01,0x01,0x07,                                   0x01,0x02,
0x02,     0x04,                0x04,                  0x04,                 0x01,0x01,
0x02,     0x02,      0x02,     0x06,                              0x04,
0x03,          0x01, 0x02,     0x04,                  0x03,            0x01,0x02,
0x04,                0x01,0x01,0x07,                                   0x01,0x02,
0x02,     0x04,                0x04,                  0x04,                 0x01,0x01,
0x02,     0x02,      0x02,     0x0A,
0x03,          0x01, 0x02,     0x04,                  0x03,            0x01,0x02,
0x04,                0x01,0x01,0x08,                                        0x02,
0x02,     0x04,                0x04,                  0x04,                 0x01,0x01,
0x02,     0x02,      0x02,     0x1A,
                                                                                      //page 2
0x06,                          0x02,        0x03,          0x01,  0x04,
0x04,                0x02,     0x04,                  0x04,                 0x02,
0x08,                                       0x04,                 0x04,
0x04,                0x02,     0x0A,
0x06,                          0x02,        0x03,          0x01,  0x04,
0x04,                0x02,     0x06,                              0x04,
0x06,                          0x01,0x01,   0x18,

0x06,                          0x02,        0x03,          0x01,  0x04,
0x04,                0x02,     0x04,                  0x04,                 0x02,
0x08,                                       0x04,                 0x04,
0x04,                0x02,     0x0A,
0x06,                          0x02,        0x03,          0x01,  0x04,
0x04,                0x02,     0x04,                  0x03,            0x01,0x02,
0x06,                          0x01,0x01,   0x13,
                                                           0x01,  0x02,     0x02,
0x03,         0x01,  0x02,     0x06,                              0x02,     0x0D,
                                                                  0x02,     0x02,
0x03,         0x01,  0x02,     0x06,                              0x02,     0x0D,
                                                                  0x02,     0x02,
0x06,                          0x02,        0x0D,
                               0x02,        0x02,     0x02,       0x02,     0x02,
0x06,                          0x01,0x01,   0x14,
                                                                  0x02,     0x02,
0x03,         0x01,  0x02,     0x06,                              0x02,     0x0D,
                                                                  0x02,     0x02,
0x03,         0x01,  0x02,     0x06,                              0x02,     0x0A,
                                            0x04,                 0x04,
0x04,                0x01,0x01,0x05,                       0x01,  0x01,0x01,0x02,
0x06,                          0x01,0x01,   0x02,     0x02,       0x02,     0x01,0x01,
0x06,                          0x01,0x01,   0x10,
                                                                                   //page 3  
                                            0x04,                 0x04,
0x03,          0x01, 0x02,     0x04,                  0x03,            0x01,0x02,
0x04,                0x01,0x01,0x07,                                   0x01,0x02,
0x02,     0x04,                0x04,                  0x04,                 0x01,0x01,
0x02,     0x02,      0x02,     0x0A,
0x03,          0x01, 0x02,     0x04,                  0x03,            0x01,0x02,
0x04,                0x01,0x01,0x07,                                   0x01,0x02,
0x02,     0x04,                0x04,                  0x04,                 0x01,0x01,
0x02,     0x02,      0x02,     0x06,                              0x04,
0x03,          0x01, 0x02,     0x04,                  0x03,            0x01,0x02,
0x04,                0x01,0x01,0x07,                                   0x01,0x02,
0x02,     0x04,                0x04,                  0x04,                 0x01,0x01,
0x02,     0x02,      0x02,     0x0A,
0x03,          0x01, 0x02,     0x04,                  0x03,            0x01,0x02,
0x04,                0x01,0x01,0x08,                                        0x02,
0x02,     0x04,                0x04,                  0x04,                 0x01,0x01,
0x02,     0x02,      0x02,     0x12,
                                                                                 //page 4 
                                                      0x04,                 0x04,
0x03,          0x01, 0x02,     0x04,                  0x03,            0x01,0x02,
0x04,                0x01,0x01,0x07,                                   0x01,0x02,
0x02,     0x04,                0x04,                  0x04,                 0x01,0x01,
0x02,     0x02,      0x02,     0x0A,
0x03,          0x01, 0x02,     0x04,                  0x03,            0x01,0x02,
0x04,                0x01,0x01,0x07,                                   0x01,0x02,
0x02,     0x04,                0x04,                  0x04,                 0x01,0x01,
0x02,     0x02,      0x02,     0x06,                              0x04,
0x03,          0x01, 0x02,     0x04,                  0x03,            0x01,0x02,
0x04,                0x01,0x01,0x07,                                   0x01,0x02,
0x02,     0x04,                0x04,                  0x04,                 0x01,0x01,
0x02,     0x02,      0x02,     0x0A,
0x03,          0x01, 0x02,     0x04,                  0x03,            0x01,0x02,
0x04,                0x01,0x01,0x08,                                        0x02,
0x02,     0x04,                0x04,                  0x04,                 0x01,0x01,
0x02,     0x02,      0x02,     0x12,                                                 
                                                                                     //page 5
                                                      0x02,       0x02,     0x02,
0x05,                     0x01,0x01,0x01,   0x03,          0x03,            0x01,0x01,  
0x03,          0x03,           0x02,        0x04,                 0x04,
0x06,                          0x01,0x01,   0x04,                 0x03,          0x01,
0x03,          0x03,           0x02,        0x03,          0x01,  0x01,0x01,0x02,
0x06,                          0x01,0x01,   0x03,          0x03,            0x02,
0x04,                0x03,          0x01,   0x04,                 0x04,
0x06,                          0x01,0x01,   0x07,                                0x01,
0x04,                0x02,     0x02,        0x04,                 0x01,0x01,0x02,
0x05,                     0x01,0x01,0x01,   0x03,          0x03,            0x01,0x01,
0x03,          0x03,           0x02,        0x04,                 0x01,
0x06,                          0x01,0x01,   0x04,                 0x04,
0x03,          0x03,           0x02,        0x04,                 0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,  0x01,0x01,0x01,0x01,  0x01,0x01,0x01,0x01,  0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,  0x01,0x01,0x01,0x01,  0x01,0x01,0x01,0x01,  0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,  0x01,0x01,0x01,0x01,  0x01,0x01,0x01,0x01,  0x01,0x01,0x01,0x01,
0x08,                                       0x04,                 0x04,
                                                                                    //page 6                 
0x03,          0x01, 0x02,     0x04,                  0x03,            0x01,0x02,
0x04,                0x01,0x01,0x07,                                   0x01,0x02,
0x02,     0x04,                0x04,                  0x04,                 0x01,0x01,
0x02,     0x02,      0x02,     0x0A,
0x03,          0x01, 0x02,     0x04,                  0x03,            0x01,0x02,
0x04,                0x01,0x01,0x07,                                   0x01,0x02,
0x02,     0x04,                0x04,                  0x04,                 0x01,0x01,
0x02,     0x02,      0x02,     0x06,                              0x04,
0x03,          0x01, 0x02,     0x04,                  0x03,            0x01,0x02,
0x04,                0x01,0x01,0x07,                                   0x01,0x02,
0x02,     0x04,                0x04,                  0x04,                 0x01,0x01,
0x02,     0x02,      0x02,     0x0A,
0x03,          0x01, 0x02,     0x04,                  0x03,            0x01,0x02,
0x04,                0x01,0x01,0x08,                                        0x02,
0x02,     0x04,                0x04,                  0x04,                 0x01,0x01,
0x04,                0x04,                  0x04,                 0x14,

};

void setup() {
  pinMode(buzzer_pin, OUTPUT); //定义蜂鸣器引脚为输出状态
}

void loop() {
  for ( int i = 0; i < 700; i++) {

/*------------设置i在歌曲长度内递增，这样就能逐一执行数组中的数据------------*/

    tone(buzzer_pin, notes[i]); //播放音乐
    delay(beats[i]*120); //播放间隔

    noTone(buzzer_pin);
    delay(10);
  }
}
