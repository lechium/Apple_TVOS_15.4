//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_semaphore;

@interface CMDeviceOrientationManagerInternal : NSObject
{
    struct os_unfair_lock_s fSampleLock;	// 8 = 0x8
    struct Dispatcher *fDeviceOrientationDispatcher;	// 16 = 0x10
    CDUnknownBlockType fDeviceOrientationHandler;	// 24 = 0x18
    NSOperationQueue *fDeviceOrientationQueue;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *fDeviceOrientationSemaphore;	// 40 = 0x28
    _Bool fDidSignalSemaphore;	// 48 = 0x30
    int fOrientationCallbackMode;	// 52 = 0x34
    _Bool fEnableOrientationNotification;	// 56 = 0x38
    Sample_edc72402 fLatestDeviceOrientationSample;	// 64 = 0x40
    Sample_edc72402 fLastSignificantOrientationSample;	// 80 = 0x50
}

- (void)dealloc;	// IMP=0x000000000016e198
- (id)init;	// IMP=0x000000000016e120

@end

