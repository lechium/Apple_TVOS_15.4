//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/RUILoaderDelegate-Protocol.h>
#import <AppleAccountUI/RUIObjectModelDelegate-Protocol.h>

@class ACAccount, ACAccountStore, NSMutableArray, NSSet, NSString, RUILoader, UINavigationController, UIViewController;
@protocol AAUIGenericTermsRemoteUIDelegate;

@interface AAUIGenericTermsRemoteUI : NSObject <RUILoaderDelegate, RUIObjectModelDelegate>
{
    UINavigationController *_parentNavController;	// 8 = 0x8
    UINavigationController *_genericTermsUIViewController;	// 16 = 0x10
    RUILoader *_loader;	// 24 = 0x18
    NSMutableArray *_objectModels;	// 32 = 0x20
    ACAccount *_account;	// 40 = 0x28
    ACAccountStore *_accountStore;	// 48 = 0x30
    NSSet *_termsEntries;	// 56 = 0x38
    _Bool _isModal;	// 64 = 0x40
    _Bool _isPreferringPassword;	// 65 = 0x41
    _Bool _isPresentingGenericTermsUIModally;	// 66 = 0x42
    _Bool _didRenewCredentials;	// 67 = 0x43
    id <AAUIGenericTermsRemoteUIDelegate> _delegate;	// 72 = 0x48
    UIViewController *_originatingViewController;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000002c697
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) __weak UIViewController *originatingViewController; // @synthesize originatingViewController=_originatingViewController;
@property(nonatomic) __weak id <AAUIGenericTermsRemoteUIDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_authContextForRenewCredentials;	// IMP=0x000000000002c3ff
- (void)_renewCredentialsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c290
- (void)_addHeadersToRequest:(id)arg1;	// IMP=0x000000000002c19b
- (void)_displayConnectionErrorAndDismiss;	// IMP=0x000000000002bfb6
- (void)_popObjectModelAnimated:(_Bool)arg1;	// IMP=0x000000000002be4d
- (void)_cleanupRUILoader;	// IMP=0x000000000002be08
- (void)_cleanUpAndDismissWithSuccess:(_Bool)arg1 agreeURL:(id)arg2;	// IMP=0x000000000002b9a1
- (void)_sendAcceptedTermsInfo:(id)arg1;	// IMP=0x000000000002b8e2
- (void)_agreeToTermsWithURLString:(id)arg1 preferPassword:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b630
- (id)viewControllerForAlertPresentation;	// IMP=0x000000000002b465
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;	// IMP=0x000000000002b45a
- (id)parentViewControllerForObjectModel:(id)arg1;	// IMP=0x000000000002b44c
- (void)objectModelPressedBack:(id)arg1;	// IMP=0x000000000002b33f
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;	// IMP=0x000000000002b0ec
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;	// IMP=0x000000000002ac5e
- (id)sessionConfigurationForLoader:(id)arg1;	// IMP=0x000000000002abf7
- (void)loader:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000002a96a
- (_Bool)_isUnauthorizedError:(id)arg1;	// IMP=0x000000000002a752
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;	// IMP=0x000000000002a3c2
- (void)_loadRequestPreferringPassword:(_Bool)arg1;	// IMP=0x000000000002a2af
- (void)presentFromViewController:(id)arg1 modal:(_Bool)arg2;	// IMP=0x000000000002a139
- (id)initWithAccount:(id)arg1 inStore:(id)arg2 termsEntries:(id)arg3;	// IMP=0x000000000002a0cb
- (id)initWithAccount:(id)arg1 inStore:(id)arg2;	// IMP=0x000000000002a004

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

