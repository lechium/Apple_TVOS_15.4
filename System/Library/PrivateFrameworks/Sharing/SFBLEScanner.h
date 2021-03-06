//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/CBCentralManagerDelegate-Protocol.h>

@class CBCentralManager, CURetrier, NSArray, NSData, NSMutableDictionary, NSSet, NSString, SFBLERecorder;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFBLEScanner : NSObject <CBCentralManagerDelegate>
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _activated;	// 9 = 0x9
    _Bool _activeScan;	// 10 = 0xa
    struct BTSessionImpl *_btSession;	// 16 = 0x10
    _Bool _btStarted;	// 24 = 0x18
    CBCentralManager *_centralManager;	// 32 = 0x20
    NSMutableDictionary *_devices;	// 40 = 0x28
    _Bool _invalidateCalled;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_lostTimer;	// 56 = 0x38
    _Bool _needDups;	// 64 = 0x40
    long long _payloadType;	// 72 = 0x48
    _Bool _poweredOffSleep;	// 80 = 0x50
    int _rescanSecondsActual;	// 84 = 0x54
    NSObject<OS_dispatch_source> *_rescanTimer;	// 88 = 0x58
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_rssiEventLogFile;	// 96 = 0x60
    _Bool _scanStarted;	// 104 = 0x68
    CURetrier *_startRetrier;	// 112 = 0x70
    _Bool _timeoutFired;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 128 = 0x80
    NSSet *_trackedPeersApplied;	// 136 = 0x88
    struct LogCategory *_ucat;	// 144 = 0x90
    _Bool _updating;	// 152 = 0x98
    _Bool _scanParamActive;	// 153 = 0x99
    _Bool _scanParamCache;	// 154 = 0x9a
    _Bool _scanParamDups;	// 155 = 0x9b
    NSData *_scanParamFilterData;	// 160 = 0xa0
    NSData *_scanParamFilterMask;	// 168 = 0xa8
    long long _scanParamInterval;	// 176 = 0xb0
    long long _scanParamWindow;	// 184 = 0xb8
    long long _scanParamMode;	// 192 = 0xc0
    NSArray *_scanParamPeers;	// 200 = 0xc8
    long long _scanParamRSSI;	// 208 = 0xd0
    _Bool _rssiLog;	// 216 = 0xd8
    _Bool _rssiLogStdOut;	// 217 = 0xd9
    _Bool _scanCache;	// 218 = 0xda
    unsigned int _changeFlags;	// 220 = 0xdc
    CDUnknownBlockType _bluetoothStateChangedHandler;	// 224 = 0xe0
    NSArray *_deviceFilter;	// 232 = 0xe8
    CDUnknownBlockType _deviceFoundHandler;	// 240 = 0xf0
    CDUnknownBlockType _deviceLostHandler;	// 248 = 0xf8
    CDUnknownBlockType _deviceChangedHandler;	// 256 = 0x100
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 264 = 0x108
    CDUnknownBlockType _invalidationHandler;	// 272 = 0x110
    NSData *_payloadFilterData;	// 280 = 0x118
    NSData *_payloadFilterMask;	// 288 = 0x120
    double _rescanInterval;	// 296 = 0x128
    SFBLERecorder *_recorder;	// 304 = 0x130
    long long _rssiThreshold;	// 312 = 0x138
    long long _scanInterval;	// 320 = 0x140
    long long _scanRate;	// 328 = 0x148
    long long _scanState;	// 336 = 0x150
    CDUnknownBlockType _scanStateChangedHandler;	// 344 = 0x158
    long long _scanWindow;	// 352 = 0x160
    double _timeout;	// 360 = 0x168
    CDUnknownBlockType _timeoutHandler;	// 368 = 0x170
    NSSet *_trackedPeers;	// 376 = 0x178
}

- (void).cxx_destruct;	// IMP=0x0000000000084146
@property(copy, nonatomic) NSSet *trackedPeers; // @synthesize trackedPeers=_trackedPeers;
@property(copy, nonatomic) CDUnknownBlockType timeoutHandler; // @synthesize timeoutHandler=_timeoutHandler;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) long long scanWindow; // @synthesize scanWindow=_scanWindow;
@property(copy, nonatomic) CDUnknownBlockType scanStateChangedHandler; // @synthesize scanStateChangedHandler=_scanStateChangedHandler;
@property(readonly, nonatomic) long long scanState; // @synthesize scanState=_scanState;
@property(nonatomic) long long scanRate; // @synthesize scanRate=_scanRate;
@property(nonatomic) long long scanInterval; // @synthesize scanInterval=_scanInterval;
@property(nonatomic) _Bool scanCache; // @synthesize scanCache=_scanCache;
@property(nonatomic) long long rssiThreshold; // @synthesize rssiThreshold=_rssiThreshold;
@property(retain, nonatomic) SFBLERecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) _Bool rssiLogStdOut; // @synthesize rssiLogStdOut=_rssiLogStdOut;
@property(nonatomic) _Bool rssiLog; // @synthesize rssiLog=_rssiLog;
@property(nonatomic) double rescanInterval; // @synthesize rescanInterval=_rescanInterval;
@property(readonly, copy, nonatomic) NSData *payloadFilterMask; // @synthesize payloadFilterMask=_payloadFilterMask;
@property(readonly, copy, nonatomic) NSData *payloadFilterData; // @synthesize payloadFilterData=_payloadFilterData;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(copy, nonatomic) NSArray *deviceFilter; // @synthesize deviceFilter=_deviceFilter;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
- (void)_recordDevice:(id)arg1 data:(id)arg2 rssi:(id)arg3 info:(id)arg4;	// IMP=0x0000000000083eac
- (void)_btSessionEnsureStopped;	// IMP=0x0000000000083e38
- (int)_btSessionEnsureStarted;	// IMP=0x00000000000839d2
- (_Bool)_btSessionUsable;	// IMP=0x00000000000839ca
- (void)_watchSetupParseName:(id)arg1 fields:(id)arg2;	// IMP=0x000000000008370e
- (void)foundPeripheralDevice:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3;	// IMP=0x00000000000833fa
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x00000000000832fc
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x00000000000831cf
- (void)_updateRescanTimer;	// IMP=0x0000000000082f3c
- (_Bool)_updateCounterpart:(id)arg1;	// IMP=0x0000000000082ca2
- (void)_timeoutTimerFired;	// IMP=0x0000000000082bcc
- (void)_startTimeoutIfNeeded;	// IMP=0x0000000000082a38
- (void)_rssiLogClose;	// IMP=0x00000000000829a6
- (void)_rssiLogOpen;	// IMP=0x0000000000082734
- (void)_restartIfNeeded:(_Bool)arg1;	// IMP=0x0000000000081e8c
- (void)_restartIfNeeded;	// IMP=0x0000000000081e78
- (void)_rescanLostFired;	// IMP=0x0000000000081bea
- (void)_rescanTimerFired;	// IMP=0x000000000008190b
- (void)_removeAllDevicesWithReason:(id)arg1;	// IMP=0x00000000000816b9
- (void)_poweredOn;	// IMP=0x00000000000815de
- (void)_poweredOff;	// IMP=0x0000000000081554
- (_Bool)_needDups;	// IMP=0x0000000000081102
- (_Bool)_needActiveScan;	// IMP=0x00000000000810fa
- (void)_invokeBlockActivateSafe:(CDUnknownBlockType)arg1;	// IMP=0x0000000000080fe2
- (void)_foundDevice:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 fields:(id)arg4;	// IMP=0x000000000008014a
- (void)performUpdate:(CDUnknownBlockType)arg1;	// IMP=0x000000000008004e
- (void)_invalidate;	// IMP=0x000000000007fd4a
- (void)invalidate;	// IMP=0x000000000007fce6
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007f919
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007f833
- (void)setPayloadFilterData:(id)arg1 mask:(id)arg2;	// IMP=0x000000000007f329
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000007eb16
- (id)initWithType:(long long)arg1;	// IMP=0x000000000007e9f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

