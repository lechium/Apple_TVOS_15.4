//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MTPromiseCompletionBlocks : NSObject
{
    NSMutableArray *_completionBlocks;	// 8 = 0x8
    _Bool _shouldCallImmediately;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000048413
- (void)flushCompletionBlocksWithPromiseResult:(id)arg1;	// IMP=0x00000000000481da
- (void)callSuccessBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;	// IMP=0x000000000004812d
- (void)callErrorBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;	// IMP=0x000000000004807d
- (void)callCompletionBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;	// IMP=0x0000000000047fd9
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047f36
- (void)addErrorBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047e90
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047df9
- (id)init;	// IMP=0x0000000000047da3

@end

