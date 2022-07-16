//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKitUI/RemoteUIControllerDelegate-Protocol.h>

@class AAUICDPStingrayRemoteUIController, AKAppleIDAuthenticationInAppContext, AKAppleIDServerUIContextController, NSHTTPURLResponse, NSString, RUIObjectModel, UINavigationController, UIViewController;

@interface AKInAppAuthenticationRemoteUIDelegate : NSObject <RemoteUIControllerDelegate>
{
    AKAppleIDAuthenticationInAppContext *_context;	// 8 = 0x8
    UIViewController *_topViewControllerOnLoadStart;	// 16 = 0x10
    NSHTTPURLResponse *_deferredResponse;	// 24 = 0x18
    _Bool _navBarButtonOverridden;	// 32 = 0x20
    _Bool _overrideFirstActionSignal;	// 33 = 0x21
    AKAppleIDServerUIContextController *_serverUIContextController;	// 40 = 0x28
    RUIObjectModel *_currentRemoteOM;	// 48 = 0x30
    UINavigationController *_modalRemoteUINavController;	// 56 = 0x38
    AAUICDPStingrayRemoteUIController *_stingrayController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000016ba8
@property(retain, nonatomic) AAUICDPStingrayRemoteUIController *stingrayController; // @synthesize stingrayController=_stingrayController;
@property(nonatomic) _Bool overrideFirstActionSignal; // @synthesize overrideFirstActionSignal=_overrideFirstActionSignal;
@property(readonly, nonatomic) UINavigationController *modalRemoteUINavController; // @synthesize modalRemoteUINavController=_modalRemoteUINavController;
@property(readonly, nonatomic) RUIObjectModel *currentRemoteOM; // @synthesize currentRemoteOM=_currentRemoteOM;
@property(retain, nonatomic) AKAppleIDServerUIContextController *serverUIContextController; // @synthesize serverUIContextController=_serverUIContextController;
- (void)_processAndHandleConflictErrorFromResponse:(id)arg1;	// IMP=0x00000000000169fa
- (void)_showAlert:(id)arg1;	// IMP=0x00000000000165e7
- (_Bool)_isDeferrableFinalResponseHarvested;	// IMP=0x00000000000164a5
- (void)remoteUIController:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000162c1
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;	// IMP=0x0000000000016027
- (void)_handleBackButtonTap:(id)arg1;	// IMP=0x0000000000015fad
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;	// IMP=0x0000000000015873
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;	// IMP=0x00000000000156e7
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;	// IMP=0x00000000000155f9
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2 forRequest:(id)arg3;	// IMP=0x000000000001510e
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 forRequest:(id)arg3;	// IMP=0x0000000000014eb5
- (void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000014c1d
- (void)clearObjectModel;	// IMP=0x0000000000014c03
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000014b9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
