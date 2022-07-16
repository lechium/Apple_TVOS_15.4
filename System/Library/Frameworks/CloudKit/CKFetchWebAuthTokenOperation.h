//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKFetchWebAuthTokenOperationCallbacks-Protocol.h>

@class CKFetchWebAuthTokenOperationInfo, NSString;
@protocol CKFetchWebAuthTokenOperationCallbacks;

@interface CKFetchWebAuthTokenOperation <CKFetchWebAuthTokenOperationCallbacks>
{
    CDUnknownBlockType _fetchWebAuthTokenCompletionBlock;	// 8 = 0x8
    NSString *_APIToken;	// 16 = 0x10
    NSString *_webAuthToken;	// 24 = 0x18
}

+ (SEL)daemonCallbackCompletionSelector;	// IMP=0x00000000000df75a
+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x00000000000df6c8
- (void).cxx_destruct;	// IMP=0x00000000000df7ab
@property(copy, nonatomic) NSString *webAuthToken; // @synthesize webAuthToken=_webAuthToken;
@property(copy, nonatomic) NSString *APIToken; // @synthesize APIToken=_APIToken;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000000df27a
- (void)handleOperationDidCompleteWithWebAuthToken:(id)arg1 metrics:(id)arg2 error:(id)arg3;	// IMP=0x00000000000df0d8
- (void)fillFromOperationInfo:(id)arg1;	// IMP=0x00000000000df03d
- (void)fillOutOperationInfo:(id)arg1;	// IMP=0x00000000000defa8
- (void)performCKOperation;	// IMP=0x00000000000debd9
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x00000000000deb75
- (id)activityCreate;	// IMP=0x00000000000deb4c
- (_Bool)CKOperationShouldRun:(id *)arg1;	// IMP=0x00000000000deaa1
@property(copy, nonatomic) CDUnknownBlockType fetchWebAuthTokenCompletionBlock; // @synthesize fetchWebAuthTokenCompletionBlock=_fetchWebAuthTokenCompletionBlock;
- (id)initWithAPIToken:(id)arg1;	// IMP=0x00000000000de6a3
- (id)init;	// IMP=0x00000000000de674

// Remaining properties
@property(readonly, nonatomic) id <CKFetchWebAuthTokenOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKFetchWebAuthTokenOperationInfo *operationInfo; // @dynamic operationInfo;

@end

