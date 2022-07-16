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

- (void).cxx_destruct;	// IMP=0x00000000006b7466
@property(retain, nonatomic) NSMutableDictionary *queues; // @synthesize queues;
- (id)getAccessoryForContext:(id)arg1 fromQueue:(id)arg2;	// IMP=0x00000000006b71c6
- (int)countForQueue:(id)arg1;	// IMP=0x00000000006b711e
- (id)whichQueueForAccessory:(id)arg1;	// IMP=0x00000000006b6ef3
- (_Bool)_inQueue:(id)arg1 queue:(id)arg2;	// IMP=0x00000000006b6d06
- (id)popAccessoryFromQueue:(id)arg1;	// IMP=0x00000000006b6bd7
- (void)removeAccessory:(id)arg1;	// IMP=0x00000000006b6984
- (id)getContextForAccessory:(id)arg1;	// IMP=0x00000000006b671c
- (void)addAccessory:(id)arg1 toQueue:(id)arg2 context:(id)arg3;	// IMP=0x00000000006b660c
- (_Bool)createQueue:(id)arg1;	// IMP=0x00000000006b6529
- (id)init;	// IMP=0x00000000006b64be
- (void)enumerateQueue:(id)arg1 enumerateAccessory:(CDUnknownBlockType)arg2;	// IMP=0x00000000006b7479

@end
