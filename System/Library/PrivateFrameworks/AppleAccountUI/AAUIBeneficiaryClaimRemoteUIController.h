//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/RemoteUIControllerDelegate-Protocol.h>

@class AAUIRemoteUIController, ACAccount, AKAppleIDAuthenticationController, AKAppleIDServerResourceLoadDelegate, NSString, RUIObjectModel;

@interface AAUIBeneficiaryClaimRemoteUIController : NSObject <RemoteUIControllerDelegate>
{
    ACAccount *_grandSlamAccount;	// 8 = 0x8
    ACAccount *_appleAccount;	// 16 = 0x10
    AKAppleIDServerResourceLoadDelegate *_serverUILoadDelegate;	// 24 = 0x18
    NSString *_secondaryToken;	// 32 = 0x20
    AKAppleIDAuthenticationController *_authController;	// 40 = 0x28
    AAUIRemoteUIController *_benefeciaryClaimRemoteUIController;	// 48 = 0x30
    RUIObjectModel *_currentObjectModel;	// 56 = 0x38
    NSString *_claimCode;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000041e93
- (void)_getServerUILoadDelegateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041b1a
- (id)_authController;	// IMP=0x0000000000041adf
- (id)_grandSlamAccount;	// IMP=0x00000000000419b6
- (void)_cancelButtonForRemoteObjectModelWasTapped:(id)arg1;	// IMP=0x0000000000041990
- (void)_addHeadersToRequest:(id)arg1;	// IMP=0x00000000000417ec
- (void)_handleObjectModelChangeForController:(id)arg1 objectModel:(id)arg2 isModal:(_Bool)arg3;	// IMP=0x00000000000413bf
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;	// IMP=0x0000000000041338
- (void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2;	// IMP=0x00000000000412be
- (id)remoteUIController:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;	// IMP=0x0000000000041286
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;	// IMP=0x00000000000411d6
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x000000000004108b
- (void)presentRemoteUIFromNavigationController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040c3c
- (id)initWithAppleAccount:(id)arg1 claimCode:(id)arg2;	// IMP=0x0000000000040ba3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
