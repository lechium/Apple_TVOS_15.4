//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableArray;
@protocol MediaSocialAuthenticationDelegate, OS_dispatch_queue;

@interface MediaSocialAuthenticationCoordinator : NSObject
{
    id <MediaSocialAuthenticationDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    ISOperationQueue *_operationQueue;	// 24 = 0x18
    NSMutableArray *_pendingResponses;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000d9b97
@property(nonatomic) __weak id <MediaSocialAuthenticationDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_newAuthenticateOperationWithAccountIdentifier:(id)arg1;	// IMP=0x00100000000d9926
- (void)_finishResponse:(id)arg1;	// IMP=0x00100000000d9871
- (id)_enqueueOperationIfNecessaryWithAccountIdentifier:(id)arg1;	// IMP=0x00100000000d9300
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
- (void)authenticateForUploadWithIdentifier:(long long)arg1 accountIdentifier:(id)arg2;	// IMP=0x00100000000d9294
- (void)authenticateForPostWithIdentifier:(long long)arg1 accountIdentifier:(id)arg2;	// IMP=0x00100000000d9245
- (id)initWithDispatchQueue:(id)arg1;	// IMP=0x00100000000d9191

@end

