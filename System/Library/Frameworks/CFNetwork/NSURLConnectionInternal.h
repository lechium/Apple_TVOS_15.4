//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLAuthenticationChallengeSender-Protocol.h>
#import <CFNetwork/NSURLConnectionRequired-Protocol.h>

@class NSDictionary, NSOperationQueue, NSString, NSURL, NSURLConnection, NSURLRequest;

@interface NSURLConnectionInternal : NSObject <NSURLConnectionRequired, NSURLAuthenticationChallengeSender>
{
    NSURLConnection *_connection;	// 8 = 0x8
    NSOperationQueue *_delegateQueue;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSURLRequest *_originalRequest;	// 32 = 0x20
    NSURLRequest *_currentRequest;	// 40 = 0x28
    id _delegate;	// 48 = 0x30
    NSDictionary *_connectionProperties;	// 56 = 0x38
    _Bool _connectionActive;	// 64 = 0x40
}

- (id)_timingData;	// IMP=0x000000000025548c
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;	// IMP=0x0000000000255486
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;	// IMP=0x0000000000255480
- (void)cancelAuthenticationChallenge:(id)arg1;	// IMP=0x000000000025547a
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;	// IMP=0x0000000000255474
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;	// IMP=0x000000000025546e
- (void)invokeForDelegate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000255468
- (void)_invalidate;	// IMP=0x0000000000255462
- (void)_setDelegateQueue:(id)arg1;	// IMP=0x0000000000255434
- (void)dealloc;	// IMP=0x00000000002553d5
- (id)initWithInfo:(const struct InternalInit *)arg1;	// IMP=0x0000000000255334

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

