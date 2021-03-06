//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLKappaRecording : NSObject
{
    struct Writer *_writer;	// 8 = 0x8
    struct Writer *_dWriter;	// 16 = 0x10
    void *_triggerChannel;	// 24 = 0x18
    void *_acc800Channel;	// 32 = 0x20
    void *_dmChannel;	// 40 = 0x28
    void *_pressureChannel;	// 48 = 0x30
    void *_rmsChannel;	// 56 = 0x38
    void *_gpsChannel;	// 64 = 0x40
    NSString *_filePath;	// 72 = 0x48
    double _iOSTriggerTime;	// 80 = 0x50
    double _aopTriggerTime;	// 88 = 0x58
    _Bool fIsRecording;	// 96 = 0x60
    _Bool fImpactDispatched;	// 97 = 0x61
    unsigned long long fPrevTimetamp;	// 104 = 0x68
    unsigned long long fPrevSortedTimestamp;	// 112 = 0x70
    unsigned int fNacc800;	// 120 = 0x78
    unsigned int fNdm;	// 124 = 0x7c
    unsigned int fNpressure;	// 128 = 0x80
    unsigned int fNrms;	// 132 = 0x84
    unsigned int fNgps;	// 136 = 0x88
    unsigned char _state;	// 140 = 0x8c
    _Bool _isError;	// 141 = 0x8d
    double _startTime;	// 144 = 0x90
    double _stopTime;	// 152 = 0x98
}

@property(readonly, nonatomic) _Bool isError; // @synthesize isError=_isError;
@property(readonly, nonatomic) unsigned char state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_filePath;
@property(readonly, nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)onCompassCalibration:(struct CompassCalibration)arg1;	// IMP=0x0010000000733a00
- (void)onKappaTrigger:(const struct CMKappaImpact *)arg1;	// IMP=0x001000000073388d
- (void)onPressureTCO:(const struct PressureBiasFit *)arg1 inertialFit:(const struct PressureInertialFit *)arg2;	// IMP=0x0010000000733762
- (void)onSOS:(unsigned int)arg1;	// IMP=0x00100000007336a9
- (void)onGPSItem:(const struct CLKappaGpsItem *)arg1;	// IMP=0x0010000000733320
- (void)onMotionStateNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x0010000000733158
- (void)onPressureData:(const struct KappaSensorDataPressure *)arg1;	// IMP=0x0010000000733034
- (void)onRawAudioBatch:(const char *)arg1 size:(unsigned int)arg2;	// IMP=0x0010000000732d37
- (void)onAudioRMSData:(float)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0010000000732c40
- (void)onDeviceMotionData:(const struct KappaSensorDataDeviceMotion *)arg1;	// IMP=0x0010000000732aa6
- (void)onAccelerometer800Data:(const struct KappaSensorDataFastAccel *)arg1;	// IMP=0x001000000073296d
- (void)onAccelerometerData:(const struct KappaSensorDataAccel *)arg1;	// IMP=0x0010000000732850
- (void)onDirectionOfTravelData:(const struct KappaSensorDataDirectionOfTravel *)arg1;	// IMP=0x001000000073253b
- (void)onMagData:(const struct KappaSensorDataMag *)arg1;	// IMP=0x0010000000732417
- (void)onSortedTimestamp:(unsigned long long)arg1 source:(int)arg2;	// IMP=0x0010000000732373
- (unsigned int)stopAndKeep:(_Bool)arg1;	// IMP=0x0010000000731f2d
- (void)moveToCompletedDir:(id)arg1;	// IMP=0x0010000000731cc8
- (_Bool)sortToListener:(struct CLKappaRecordingSortListener *)arg1;	// IMP=0x0010000000731182
- (_Bool)beginSort;	// IMP=0x0010000000730c1c
- (void)cleanup_readers;	// IMP=0x0010000000730b38
- (void)cleanup_unencrypted_files;	// IMP=0x00100000007309ec
- (void)cleanup_writers;	// IMP=0x00100000007309bc
- (_Bool)start:(id)arg1;	// IMP=0x00100000007306ed
- (unsigned int)nByte;	// IMP=0x001000000073069b
- (void)dealloc;	// IMP=0x0010000000730618
- (id)init;	// IMP=0x00100000007305c0

@end

