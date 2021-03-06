//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HAPBTLEReachabilityScanTuple : HMFObject
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
}

+ (id)reachabilityScanTupleWithCompletion:(CDUnknownBlockType)arg1 workQueue:(id)arg2 identifier:(id)arg3;	// IMP=0x0000000000092911
- (void).cxx_destruct;	// IMP=0x00000000000928cf
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;

@end

