//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMOnBodyStatusManager : NSObject
{
    void *fLocationdConnection;	// 8 = 0x8
    _Bool fSubscribedToOnBodyStatusDetection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *fOnBodyStatusQueue;	// 24 = 0x18
    CDUnknownBlockType fOnBodyStatusHandler;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *fPrivateQueue;	// 40 = 0x28
}

+ (id)sharedOnBodyStatusManager;	// IMP=0x00000000000ea455
+ (_Bool)isOnBodyStatusDetectionAvailable;	// IMP=0x00000000000ea43a
- (void)stopOnBodyStatusDetectionPrivate;	// IMP=0x00000000000eb164
- (void)startOnBodyStatusDetectionPrivateToQueue:(id)arg1 withParameters:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000eae0e
- (void)disconnect;	// IMP=0x00000000000eadde
- (void)connect;	// IMP=0x00000000000ea885
- (void)setPropertiesWithDictionary:(id)arg1;	// IMP=0x00000000000ea61a
- (void)stopOnBodyStatusDetection;	// IMP=0x00000000000ea5b9
- (void)startOnBodyStatusDetectionToQueue:(id)arg1 withParameters:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ea49a
- (void)dealloc;	// IMP=0x00000000000ea40b
- (id)init;	// IMP=0x00000000000ea398

@end
