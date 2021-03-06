//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL, SOAuthorizationRequest;

@interface ASAuthorizationProviderExtensionAuthorizationRequest : NSObject
{
    SOAuthorizationRequest *_authorizationRequest;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000003950
@property(readonly, nonatomic) SOAuthorizationRequest *authorizationRequest; // @synthesize authorizationRequest=_authorizationRequest;
@property(readonly, nonatomic, getter=isUserInterfaceEnabled) _Bool userInterfaceEnabled;
@property(readonly, nonatomic) NSString *localizedCallerDisplayName;
@property(readonly, nonatomic) NSString *callerTeamIdentifier;
@property(readonly, nonatomic, getter=isCallerManaged) _Bool callerManaged;
@property(readonly, nonatomic) NSDictionary *authorizationOptions;
@property(readonly, copy, nonatomic) NSString *callerBundleIdentifier;
@property(readonly, nonatomic) NSDictionary *extensionData;
@property(readonly, copy, nonatomic) NSString *realm;
@property(readonly, nonatomic) NSData *httpBody;
@property(readonly, nonatomic) NSDictionary *httpHeaders;
@property(readonly, nonatomic) NSString *requestedOperation;
@property(readonly, nonatomic) NSURL *url;
- (void)presentAuthorizationViewControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000038e0
- (void)completeWithAuthorizationResult:(id)arg1;	// IMP=0x00000000000038da
- (void)completeWithError:(id)arg1;	// IMP=0x00000000000038d4
- (void)completeWithHTTPResponse:(id)arg1 httpBody:(id)arg2;	// IMP=0x00000000000038ce
- (void)completeWithHTTPAuthorizationHeaders:(id)arg1;	// IMP=0x00000000000038c8
- (void)complete;	// IMP=0x00000000000038c2
- (void)cancel;	// IMP=0x00000000000038bc
- (void)doNotHandle;	// IMP=0x00000000000038b6
- (id)initWithAuthorizationRequest:(id)arg1;	// IMP=0x0000000000003868

@end

