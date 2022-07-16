//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

@class NAFuture;

__attribute__((visibility("hidden")))
@interface HMBFutureOperation : HMFOperation
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NAFuture *_future;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x000000000005943d
- (void).cxx_destruct;	// IMP=0x000000000005936f
@property(readonly) NAFuture *future; // @synthesize future=_future;
@property(readonly, copy) CDUnknownBlockType block; // @synthesize block=_block;
- (void)main;	// IMP=0x000000000005925d
- (void)cancelWithError:(id)arg1;	// IMP=0x00000000000591c9
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005912e

@end

