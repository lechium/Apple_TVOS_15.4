//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface HMFBlockOperation
{
    NSArray *_executionBlocks;	// 64 = 0x40
}

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000459c4
- (void).cxx_destruct;	// IMP=0x0000000000045ec5
- (void)main;	// IMP=0x0000000000045c30
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000045b1a
@property(readonly, copy) NSArray *executionBlocks; // @synthesize executionBlocks=_executionBlocks;
- (id)initWithTimeout:(double)arg1;	// IMP=0x0000000000045a7c

@end

