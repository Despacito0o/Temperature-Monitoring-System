# Temperature Monitoring System

## 项目简介
这是一个基于 Arduino 的温度监测系统，使用 DHT11 传感器实时读取环境温度，并通过串口显示在电脑上。适合电子信息工程初学者学习嵌入式开发。

## 硬件要求
- Arduino Uno 开发板
- DHT11 温度传感器
- 连接线（杜邦线）

## 软件要求
- Arduino IDE（下载地址：https://www.arduino.cc/en/software）
- DHT 传感器库（在 Arduino IDE 的“库管理器”中搜索“DHT sensor library”并安装）

## 安装步骤
1. **硬件连接**：
   - 将 DHT11 的信号引脚连接到 Arduino 的数字引脚 2。
   - VCC 接 5V，GND 接 GND。
2. **安装软件**：
   - 下载并安装 Arduino IDE。
   - 在 Arduino IDE 中打开“工具” > “管理库”，搜索“DHT sensor library”并安装。
3. **上传代码**：
   - 将仓库中的 `TemperatureMonitor.ino` 文件下载到本地。
   - 用 Arduino IDE 打开文件，连接 Arduino 板，点击“上传”按钮。

## 使用方法
1. 打开 Arduino IDE 的“串口监视器”（快捷键 Ctrl+Shift+M）。
2. 设置波特率为 9600。
3. 每隔 2 秒，串口监视器会显示当前温度（单位：摄氏度）。

## 注意事项
- 如果串口无数据显示，请检查 DHT11 的接线是否正确。
- 确保安装了正确的 DHT 库。

## 贡献
欢迎提出建议或贡献代码！请通过 GitHub 的 Issues 提交问题或 Pull Request。
