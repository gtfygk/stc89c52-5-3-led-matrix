# STC89C52RC 5×3 LED 点阵倒计时项目（大一 Frozen 项目）

**项目状态：Frozen（已冻结）（2026.3）**

大一时从零完成的练习项目：用 STC89C52RC 驱动 5×3 共阳 LED 点阵，实现数字倒计时（9→0）。  
目前卡在**单片机 ISP 下载无法识别**阶段，因此先冻结，留待未来的我去完成。  

---

## 项目简介
- **MCU**：STC89C52RC（8051 内核）
- **LED 点阵**：5 列 × 3 行（共阳极，手工焊接）
- **扫描方式**：行列动态扫描 + 倒计时显示
- **开发板**：万能板（perfboard）手工焊接
- **软件**：**SDCC + VS Code**（模块化 src/inc 结构，非 Keil C51）

## 文件结构
**stc89c52-5-3-led-matrix/
**├── .gitignore
**├── README.md
**├── Photos/                          # 实物焊接照片（正面、背面等）
**├── STC89C52RC_Project/
**│   ├── Firmware/                    # 固件源码与编译文件（SDCC 生成）
**│   │   ├── countdown.ihx            # 可直接烧录的固件文件
**│   │   ├── inc/                     # 头文件
**│   │   │   ├── delay.h
**│   │   │   └── led_matrix.h
**│   │   └── src/                     # 源代码
**│   │       ├── delay.c
**│   │       ├── led_matrix.c
**│   │       └── main.c
**│   └── kicad_file/
**│       └── stc89c52rc_led_5×3_matrix_perfboard/   # KiCAD 项目文件夹
**│           ├── BOM.csv              # 物料清单
**│           ├── stc89c52rc_led_5×3_matrix_perfboard.kicad_sch
**│           ├── stc89c52rc_led_5×3_matrix_perfboard.kicad_pcb
**│           ├── stc89c52rc_led_5×3_matrix_perfboard.kicad_pro
**│           └── gerber/              # Gerber 生产文件
**│               ├── stc89c52rc_led_5×3_matrix_perfboard-F_Cu.gtl
**│               ├── stc89c52rc_led_5×3_matrix_perfboard-B_Cu.gbl
**│               ├── stc89c52rc_led_5×3_matrix_perfboard-F_Mask.gts
**│               ├── stc89c52rc_led_5×3_matrix_perfboard-B_Mask.gbs
**│               ├── stc89c52rc_led_5×3_matrix_perfboard-F_Silkscreen.gto
**│               ├── stc89c52rc_led_5×3_matrix_perfboard-B_Silkscreen.gbo
**│               ├── stc89c52rc_led_5×3_matrix_perfboard-Edge_Cuts.gm1
**│               ├── stc89c52rc_led_5×3_matrix_perfboard-NPTH.drl
**│               ├── stc89c52rc_led_5×3_matrix_perfboard-PTH.drl
**│               └── stc89c52rc_led_5×3_matrix_perfboard-job.gbrjob

## 当前卡住的问题
STC-ISP 始终无法识别单片机。  

## 未来想法
当我有了一些经验和自信之后，我就会重新捡起我这个frozen项目，我也许也会做出一些改进。
