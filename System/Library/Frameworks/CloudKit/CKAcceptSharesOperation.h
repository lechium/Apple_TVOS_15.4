//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKAcceptSharesOperationCallbacks-Protocol.h>

@class CKAcceptSharesOperationInfo, NSArray, NSMutableDictionary;
@protocol CKAcceptSharesOperationCallbacks;

@interface CKAcceptSharesOperation <CKAcceptSharesOperationCallbacks>
{
    CDUnknownBlockType _perShareCompletionBlock;	// 8 = 0x8
    CDUnknownBlockType _acceptSharesCompletionBlock;	// 16 = 0x10
    NSArray *_shareMetadatas;	// 24 = 0x18
    NSMutableDictionary *_errorsByShareURL;	// 32 = 0x20
    NSMutableDictionary *_shareMetadatasByShareURL;	// 40 = 0x28
}

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x00000000000fab3a
- (void).cxx_destruct;	// IMP=0x00000000000fac27
@property(retain, nonatomic) NSMutableDictionary *shareMetadatasByShareURL; // @synthesize shareMetadatasByShareURL=_shareMetadatasByShareURL;
@property(retain, nonatomic) NSMutableDictionary *errorsByShareURL; // @synthesize errorsByShareURL=_errorsByShareURL;
@property(copy, nonatomic) NSArray *shareMetadatas; // @synthesize shareMetadatas=_shareMetadatas;
- (id)activityCreate;	// IMP=0x00000000000fab11
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000000fa597
- (void)handleShareAcceptanceForURL:(id)arg1 share:(id)arg2 error:(id)arg3;	// IMP=0x00000000000f9d64
- (void)performCKOperation;	// IMP=0x00000000000f9995
- (_Bool)CKOperationShouldRun:(id *)arg1;	// IMP=0x00000000000f965b
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x00000000000f95c8
- (void)fillFromOperationInfo:(id)arg1;	// IMP=0x00000000000f9515
- (void)fillOutOperationInfo:(id)arg1;	// IMP=0x00000000000f946a
@property(copy, nonatomic) CDUnknownBlockType acceptSharesCompletionBlock; // @synthesize acceptSharesCompletionBlock=_acceptSharesCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perShareCompletionBlock; // @synthesize perShareCompletionBlock=_perShareCompletionBlock;
- (id)initWithShareMetadatas:(id)arg1;	// IMP=0x00000000000f8ad8
- (id)init;	// IMP=0x00000000000f8a7b

// Remaining properties
@property(readonly, nonatomic) id <CKAcceptSharesOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKAcceptSharesOperationInfo *operationInfo; // @dynamic operationInfo;

@end
