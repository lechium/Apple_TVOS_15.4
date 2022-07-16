//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPDistributedNotificationCenter, NSLock;

@interface IAPAudioCallbackInfo : NSObject
{
    CDUnknownFunctionPointerType _deviceStateChangedCallback;	// 8 = 0x8
    void *_deviceStateChangedContext;	// 16 = 0x10
    CDUnknownFunctionPointerType _volumeChangedCallback;	// 24 = 0x18
    void *_volumeChangedContext;	// 32 = 0x20
    CDUnknownFunctionPointerType _pauseOnHeadphoneDisconnectChangedCallback;	// 40 = 0x28
    void *_pauseOnHeadphoneDisconnectChangedContext;	// 48 = 0x30
    CDUnknownFunctionPointerType _volumeControlSupportChangedCallback;	// 56 = 0x38
    void *_volumeControlSupportChangedContext;	// 64 = 0x40
    CPDistributedNotificationCenter *_dnCenter;	// 72 = 0x48
    CPDistributedNotificationCenter *_dnCenteriAP2;	// 80 = 0x50
    NSLock *_lock;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x00000000000060de
- (void)_volumeControlSupportChanged:(id)arg1;	// IMP=0x0000000000006186
- (void)_pauseOnHeadphoneDisconnectChanged:(id)arg1;	// IMP=0x0000000000006177
- (void)_volumeChanged:(id)arg1;	// IMP=0x0000000000006168
- (void)_deviceStateChanged:(id)arg1;	// IMP=0x0000000000006159
- (void)startNotificationCenterOnRunLoop:(struct __CFRunLoop *)arg1;	// IMP=0x0000000000006153
- (void)clearVolumeControlSupportChangedCallback;	// IMP=0x000000000000614d
- (void)setupVolumeControlSupportChangedCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;	// IMP=0x0000000000006147
- (void)clearPauseOnHeadphoneDisconnectChangedCallback;	// IMP=0x0000000000006141
- (void)setupPauseOnHeadphoneDisconnectChangedCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;	// IMP=0x000000000000613b
- (void)clearVolumeChangedCallback;	// IMP=0x0000000000006135
- (void)setupVolumeChangedCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;	// IMP=0x000000000000612f
- (void)clearDeviceStateChangedCallback;	// IMP=0x0000000000006129
- (void)setupDeviceStateChangedCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;	// IMP=0x0000000000006123
- (void)dealloc;	// IMP=0x000000000000600e
- (id)init;	// IMP=0x0000000000005f39
- (void)_handleiAPDaemonDied:(id)arg1;	// IMP=0x0000000000005f33

@end

