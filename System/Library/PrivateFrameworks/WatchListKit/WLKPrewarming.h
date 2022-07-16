//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKPrewarming : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000000000571d3
- (void).cxx_destruct;	// IMP=0x00000000000581b3
- (id)_connection;	// IMP=0x0000000000057f38
- (void)prewarmDeviceAndNetwork;	// IMP=0x0000000000057b9e
- (void)_onQueue_prewarmDevice;	// IMP=0x0000000000057b51
- (void)prewarmDevice;	// IMP=0x0000000000057934
- (void)prewarm;	// IMP=0x00000000000572ff
- (id)_init;	// IMP=0x00000000000572a7
- (id)init;	// IMP=0x0000000000057238

@end

