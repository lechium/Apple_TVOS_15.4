//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/NSURLAuthenticationChallengeSender-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKNSURLAuthenticationChallengeSender : NSObject <NSURLAuthenticationChallengeSender>
{
}

- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;	// IMP=0x0000000000210443
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;	// IMP=0x0000000000210373
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;	// IMP=0x00000000002102a9
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;	// IMP=0x00000000002101dc
- (void)cancelAuthenticationChallenge:(id)arg1;	// IMP=0x00000000002100b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

