�п�΢HAL�������ش��޸�
��������
1.��������NMEA���,ʹ�����Ǳ��ƫ������־����ϵͳ: GPS(1-32), ����(201-216)
2.�ܿ�ϵͳ���������Ƿ���붨λ��int32��־λ.
3.��gps_zkw_v3.c��encode_sv_status������, �����붨λ�����ǵķ�λ��(azimuth)����720�ȵ�ƫ��.
3.��GpsStatus��setStatus������, ������ǵķ�λ�Ǵ���720, ��ô�����ǲ��붨λ,������λ�Ǹ�ԭ.

���뷽ʽ
0.!!!��װǰ�������豸�ϵ��ļ�����!!!
1.��������: source build/envsetup.sh
2.����gps_zkw_v3.c: mmm hardware/libgps
4.��װgps.default.so���豸/system/lib/hw/
3.����GpsStatus.java: mmm frameworks/base 
5.��װframework.jar���豸/system/framework


