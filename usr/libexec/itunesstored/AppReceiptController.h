//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue;
@protocol OS_dispatch_queue;

@interface AppReceiptController : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    ISOperationQueue *_operationQueue;	// 16 = 0x10
}

+ (id)sharedController;	// IMP=0x00400000001709ee
+ (void)refreshAppReceipt:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000170434
+ (void)refreshAllReceipts:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000170265
+ (void)observeXPCServer:(id)arg1;	// IMP=0x00100000001701d5
+ (void)getApplicationReceiptPathWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016ff39
+ (_Bool)connectionHasEntitlement:(id)arg1;	// IMP=0x001000000016fd41
- (void).cxx_destruct;	// IMP=0x0020000000170cb0
- (id)_operationQueue;	// IMP=0x0010000000170c1d
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000170afe
- (void)_addOperation:(id)arg1;	// IMP=0x0010000000170a81
- (void)start;	// IMP=0x0010000000170a7b
- (void)dealloc;	// IMP=0x001000000016fcb6
- (id)init;	// IMP=0x001000000016fc5e

@end

