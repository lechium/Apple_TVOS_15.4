//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSURLAuthenticationChallengeSender-Protocol.h>

@class NSString, SSDownloadAuthenticationSession;
@protocol OS_dispatch_queue;

@interface SSDownloadAuthenticationChallengeSender : NSObject <NSURLAuthenticationChallengeSender>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    SSDownloadAuthenticationSession *_session;	// 16 = 0x10
}

- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;	// IMP=0x00000000000c951a
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;	// IMP=0x00000000000c94e8
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;	// IMP=0x00000000000c94b6
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;	// IMP=0x00000000000c9484
- (void)cancelAuthenticationChallenge:(id)arg1;	// IMP=0x00000000000c9452
@property(readonly) SSDownloadAuthenticationSession *authenticationSession;
- (void)dealloc;	// IMP=0x00000000000c9324
- (id)initWithAuthenticationSession:(id)arg1;	// IMP=0x00000000000c92c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

