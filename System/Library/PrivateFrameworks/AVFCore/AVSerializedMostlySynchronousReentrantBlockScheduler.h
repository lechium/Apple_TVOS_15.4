//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVBlockScheduler-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVSerializedMostlySynchronousReentrantBlockScheduler : NSObject <AVBlockScheduler>
{
    struct OpaqueFigSimpleMutex *_ivarAccessLock;	// 8 = 0x8
    NSArray *_blocks;	// 16 = 0x10
    struct OpaqueFigReentrantMutex *_blockSerializationLock;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x00000000000ef8d7
- (void)scheduleBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000efa07
- (void)dealloc;	// IMP=0x00000000000ef9ba
- (id)init;	// IMP=0x00000000000ef93e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

