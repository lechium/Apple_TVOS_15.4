//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSURLBag.h>

@class ISLoadURLBagOperation, ISURLBag, NSMutableArray;

@interface ISSSURLBag : SSURLBag
{
    ISURLBag *_bag;	// 8 = 0x8
    NSMutableArray *_completionBlocks;	// 16 = 0x10
    _Bool _forceInvalidationForNextLoad;	// 24 = 0x18
    ISLoadURLBagOperation *_operation;	// 32 = 0x20
}

+ (id)URLBagForContext:(id)arg1;	// IMP=0x0000000000045dff
- (void).cxx_destruct;	// IMP=0x00000000000472a6
- (void)_finishOperationWithURLBag:(id)arg1 error:(id)arg2;	// IMP=0x0000000000046f97
- (void)_enqueueOperationWithContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000046bf8
- (id)storeFrontIdentifier;	// IMP=0x0000000000046ad8
- (void)loadWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000046880
- (id)existingBagDictionary;	// IMP=0x0000000000046760
- (id)valueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000046483
- (void)loadValueForKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000461e0
- (void)invalidate;	// IMP=0x0000000000046101
- (void)getTrustForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000045e2e

@end
