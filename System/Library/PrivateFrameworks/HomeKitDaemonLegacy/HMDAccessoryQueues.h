//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary;

@interface HMDAccessoryQueues : HMFObject
{
    NSMutableDictionary *queues;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000640044
@property(retain, nonatomic) NSMutableDictionary *queues; // @synthesize queues;
- (id)getAccessoryForContext:(id)arg1 fromQueue:(id)arg2;	// IMP=0x000000000063fda4
- (int)countForQueue:(id)arg1;	// IMP=0x000000000063fcfc
- (id)whichQueueForAccessory:(id)arg1;	// IMP=0x000000000063fad1
- (_Bool)_inQueue:(id)arg1 queue:(id)arg2;	// IMP=0x000000000063f8e4
- (id)popAccessoryFromQueue:(id)arg1;	// IMP=0x000000000063f7b5
- (void)removeAccessory:(id)arg1;	// IMP=0x000000000063f562
- (id)getContextForAccessory:(id)arg1;	// IMP=0x000000000063f2fa
- (void)addAccessory:(id)arg1 toQueue:(id)arg2 context:(id)arg3;	// IMP=0x000000000063f1ea
- (_Bool)createQueue:(id)arg1;	// IMP=0x000000000063f107
- (id)init;	// IMP=0x000000000063f09c
- (void)enumerateQueue:(id)arg1 enumerateAccessory:(CDUnknownBlockType)arg2;	// IMP=0x0000000000640057

@end
