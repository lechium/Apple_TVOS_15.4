//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSError, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface SSVStoreDownloadQueueResponse : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableOrderedSet *_downloads;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    NSDictionary *_itemErrors;	// 32 = 0x20
    NSData *_keybag;	// 40 = 0x28
    NSArray *_rangesToLoad;	// 48 = 0x30
    _Bool _shouldCancelPurchaseBatch;	// 56 = 0x38
    _Bool _triggeredQueueCheck;	// 57 = 0x39
    NSNumber *_userIdentifier;	// 64 = 0x40
    NSString *_storeCorrelationID;	// 72 = 0x48
    NSString *_clientIdentifier;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000016cc4e
@property NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property NSString *storeCorrelationID; // @synthesize storeCorrelationID=_storeCorrelationID;
- (id)_errorWithFailureType:(id)arg1 customerMessage:(id)arg2;	// IMP=0x000000000016cb5e
@property(readonly) NSNumber *userIdentifier;
@property _Bool triggeredQueueCheck;
@property _Bool shouldCancelPurchaseBatch;
@property(retain) NSError *error;
@property(readonly) NSArray *rangesToLoad;
@property(readonly) NSData *keybag;
- (id)errorForItemIdentifier:(id)arg1;	// IMP=0x000000000016c855
@property(readonly) NSOrderedSet *downloads;
- (id)initWithError:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x000000000016c6b3
- (id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2 preferredAssetFlavor:(id)arg3;	// IMP=0x000000000016bb6c
- (id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x000000000016bb57
- (id)init;	// IMP=0x000000000016bb45
- (id)_initStoreDownloadQueueResponse;	// IMP=0x000000000016baed

@end

