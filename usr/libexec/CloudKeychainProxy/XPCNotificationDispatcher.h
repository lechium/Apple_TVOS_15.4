//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray;
@protocol OS_dispatch_queue;

@interface XPCNotificationDispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSPointerArray *_listeners;	// 16 = 0x10
}

+ (id)dispatcher;	// IMP=0x0040000000001b95
- (void).cxx_destruct;	// IMP=0x00200000000019d4
@property(retain) NSPointerArray *listeners; // @synthesize listeners=_listeners;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)removeListener:(id)arg1;	// IMP=0x00100000000018dc
- (void)addListener:(id)arg1;	// IMP=0x001000000000182a
- (void)notification:(const char *)arg1;	// IMP=0x001000000000174f
- (id)init;	// IMP=0x00100000000015e3

@end

