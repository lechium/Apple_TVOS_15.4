//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, MISSING_TYPE, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;

@interface PurchaseController : NSObject
{
    ISOperationQueue *_authenticationOperationQueue;	// 8 = 0x8
    MISSING_TYPE *_authenticatingBatchIdentifiers;	// 16 = 0x10
    NSMutableArray *_clients;	// 24 = 0x18
    _Bool _didGarbageCollect;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    NSMutableSet *_inflightCanceledIdentifiers;	// 48 = 0x30
    ISOperationQueue *_purchaseOperationQueue;	// 56 = 0x38
    NSMutableSet *_purchasingIdentifiers;	// 64 = 0x40
}

+ (void)observeXPCServer:(id)arg1;	// IMP=0x00400000001ad235
+ (void)movePurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001ad113
+ (void)insertPurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001ad080
+ (void)finishPurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001acf71
+ (void)getPurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001acc81
+ (void)connectClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001acb81
+ (void)cancelPurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001aca72
+ (void)addPurchasesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001ac9df
+ (id)sharedController;	// IMP=0x00100000001abf3e
- (void)_showPurchasesFailedDialogWithFirstTitle:(id)arg1 count:(long long)arg2;	// IMP=0x00200000001b3c4e
- (void)_showNotEnoughDiskSpaceDialogForPurchases:(id)arg1;	// IMP=0x00100000001b36e0
- (id)_purchaseOperationQueue;	// IMP=0x00100000001b3664
- (id)_placeholderAppPathForBundleIdentifier:(id)arg1;	// IMP=0x00100000001b35bc
- (id)_newPurchasesFromEncodedArray:(id)arg1 client:(id)arg2;	// IMP=0x00100000001b34b1
- (id)_newPurchaseIdentifiersFromEncodedArray:(id)arg1;	// IMP=0x00100000001b33c1
- (id)_newEncodedPurchaseEntityPropertiesWithResponse:(id)arg1;	// IMP=0x00100000001b32fc
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b3205
- (void)_garbageCollectInflightPurchases;	// IMP=0x00100000001b2bec
- (void)_finishPurchaseRequestForClientUniqueID:(long long)arg1 withResponse:(id)arg2;	// IMP=0x00100000001b24d6
- (void)_sendAuthenticateRequestForClientUniqueID:(long long)arg1 withContext:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b243d
- (void)_finishAuthenticationRequestForBatchIdentifier:(long long)arg1 client:(id)arg2 withAccountID:(id)arg3 error:(id)arg4;	// IMP=0x00100000001b1f6f
- (void)_filterPurchases:(id)arg1 withTransaction:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b1ac6
- (void)_enqueueNextPurchase;	// IMP=0x00100000001b12a2
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b1155
- (id)_clientForUniqueIdentifier:(long long)arg1;	// IMP=0x00100000001b102d
- (id)_clientForMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001b0a90
- (void)_checkStoreDownloadQueuesForPurchase:(id)arg1 response:(id)arg2;	// IMP=0x00100000001b0803
- (_Bool)_cancelPurchasesWithBatchIdentifier:(long long)arg1 client:(id)arg2 response:(id)arg3;	// IMP=0x00100000001b0482
- (void)_cancelPurchasesForLackOfDiskSpace:(id)arg1 client:(id)arg2;	// IMP=0x00100000001b0281
- (void)_beginPurchaseBatch:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001af701
- (id)_authenticationOperationQueue;	// IMP=0x00100000001af685
- (void)_authenticateForPurchases:(id)arg1 client:(id)arg2;	// IMP=0x00100000001af3c0
- (void)_addPurchases:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001aeb93
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x00100000001aeade
- (id)_newResponsesToPurchasesForClient:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001ae800
- (void)_moveEncodedPurchaseIDs:(id)arg1 afterPurchaseID:(long long)arg2 forClient:(id)arg3;	// IMP=0x00100000001ae741
- (void)_markInFlightCanceledPurchaseIdentifier:(id)arg1;	// IMP=0x00100000001ae5ca
- (void)_insertEncodedPurchases:(id)arg1 afterPurchaseID:(long long)arg2 forClient:(id)arg3;	// IMP=0x00100000001adc84
- (void)_finishEncodedPurchaseIdentifiers:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001ad98d
- (void)_connectClient:(id)arg1 withOutputConnection:(id)arg2;	// IMP=0x00100000001ad697
- (void)_cancelEncodedPurchases:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001ad356
- (void)_addEncodedPurchases:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001ad30d
- (void)start;	// IMP=0x00100000001ac97d
- (void)cancelPurchasesForDownloadsWithIdentifiers:(id)arg1;	// IMP=0x00100000001ac09f
- (void)beginPurchaseBatch:(id)arg1;	// IMP=0x00100000001ac02d
- (void)addPurchases:(id)arg1;	// IMP=0x00100000001abfbb
- (void)dealloc;	// IMP=0x00100000001abe46
- (id)init;	// IMP=0x00100000001abdb8

@end

