//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface NSBlockOperation
{
    NSMutableArray *_executionBlocks;	// 248 = 0xf8
    CDUnknownBlockType _block;	// 256 = 0x100
}

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e2ae2
@property(readonly, copy) NSArray *executionBlocks;
- (void)main;	// IMP=0x00000000000e2d2f
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e2b8b
- (void)dealloc;	// IMP=0x00000000000e2b11
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e2a35
- (id)init;	// IMP=0x00000000000e29e3

@end
