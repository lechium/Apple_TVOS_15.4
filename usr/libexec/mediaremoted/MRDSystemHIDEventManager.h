//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface MRDSystemHIDEventManager
{
    struct __IOHIDEventSystemClient *_hidSystemClient;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000012121
- (void)dispatchHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000001208a
- (void)dealloc;	// IMP=0x0010000000012049
- (id)init;	// IMP=0x0010000000011f97

@end

