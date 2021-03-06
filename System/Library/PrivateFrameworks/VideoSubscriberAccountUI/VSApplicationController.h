//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/VSAppDocumentControllerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSApplicationDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSStateMachineDelegate-Protocol.h>

@class JSValue, NSError, NSOperationQueue, NSString, NSURL, VSAppDocumentController, VSApplication, VSApplicationControllerResponseHandler, VSAuditToken, VSIdentityProvider, VSPreferences, VSStateMachine;
@protocol VSApplicationControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSApplicationController : NSObject <VSAppDocumentControllerDelegate, VSApplicationDelegate, VSStateMachineDelegate>
{
    _Bool _applicationMustSelfValidate;	// 8 = 0x8
    _Bool _allowUI;	// 9 = 0x9
    id <VSApplicationControllerDelegate> _delegate;	// 16 = 0x10
    VSIdentityProvider *_identityProvider;	// 24 = 0x18
    NSString *_accountProviderAuthenticationToken;	// 32 = 0x20
    VSAuditToken *_auditToken;	// 40 = 0x28
    VSStateMachine *_stateMachine;	// 48 = 0x30
    NSError *_delegateError;	// 56 = 0x38
    NSError *_onLaunchError;	// 64 = 0x40
    NSURL *_fetchedURL;	// 72 = 0x48
    NSOperationQueue *_privateQueue;	// 80 = 0x50
    VSApplication *_application;	// 88 = 0x58
    VSApplicationControllerResponseHandler *_responseHandler;	// 96 = 0x60
    VSAppDocumentController *_appDocumentController;	// 104 = 0x68
    JSValue *_applicationReadyCallback;	// 112 = 0x70
    VSPreferences *_preferences;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000003656a
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) _Bool allowUI; // @synthesize allowUI=_allowUI;
@property(nonatomic) _Bool applicationMustSelfValidate; // @synthesize applicationMustSelfValidate=_applicationMustSelfValidate;
@property(retain, nonatomic) JSValue *applicationReadyCallback; // @synthesize applicationReadyCallback=_applicationReadyCallback;
@property(retain, nonatomic) VSAppDocumentController *appDocumentController; // @synthesize appDocumentController=_appDocumentController;
@property(retain, nonatomic) VSApplicationControllerResponseHandler *responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain) VSApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) NSURL *fetchedURL; // @synthesize fetchedURL=_fetchedURL;
@property(retain) NSError *onLaunchError; // @synthesize onLaunchError=_onLaunchError;
@property(retain) NSError *delegateError; // @synthesize delegateError=_delegateError;
@property(retain, nonatomic) VSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(retain, nonatomic) NSString *accountProviderAuthenticationToken; // @synthesize accountProviderAuthenticationToken=_accountProviderAuthenticationToken;
@property(retain, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
@property(nonatomic) __weak id <VSApplicationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_makeJavaScriptRequest;	// IMP=0x0000000000036320
- (id)_errorForJavascriptErrorValueValue:(id)arg1 withRequest:(id)arg2;	// IMP=0x0000000000035e98
- (id)_javascriptRequestForRequest:(id)arg1 withVerificationData:(id)arg2;	// IMP=0x0000000000035bfa
- (void)_makeJavascriptRequestForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035904
- (id)_applicationControllerAlertForJavascriptAlert:(id)arg1;	// IMP=0x00000000000353a7
- (id)_applicationLaunchParams;	// IMP=0x0000000000035054
- (id)_bootURL;	// IMP=0x0000000000034faf
- (void)_notifyDelegateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000034efd
- (void)_notifyStartDidFailWithError:(id)arg1;	// IMP=0x0000000000034e0a
- (void)_notifyDidStart;	// IMP=0x0000000000034d60
- (void)_notifyRequest:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000034c44
- (void)_notifyDidReceiveViewModelError:(id)arg1;	// IMP=0x0000000000034b51
- (void)_notifyDidReceiveViewModel:(id)arg1;	// IMP=0x0000000000034a5e
- (void)_notifyRequest:(id)arg1 didCompleteWithResponse:(id)arg2;	// IMP=0x0000000000034942
- (void)_completeRequest:(id)arg1 withResult:(id)arg2;	// IMP=0x00000000000345bd
- (void)_completeRequest:(id)arg1 withJavascriptResponse:(id)arg2 javascriptErrorValue:(id)arg3;	// IMP=0x00000000000342c6
- (void)_applicationReadyWithSuccess:(_Bool)arg1 javascriptErrorValue:(id)arg2;	// IMP=0x0000000000033f85
- (void)_submitJavascriptRequest:(id)arg1 forApplicationControllerRequest:(id)arg2;	// IMP=0x00000000000337e2
- (void)_cancelValidation;	// IMP=0x0000000000033702
- (void)_beginAuthentication;	// IMP=0x0000000000033591
- (void)_presentAlert:(id)arg1;	// IMP=0x00000000000333f5
- (void)_presentDocument:(id)arg1;	// IMP=0x0000000000032e5f
- (void)appDocumentController:(id)arg1 didFailToUpdateViewModelWithError:(id)arg2;	// IMP=0x0000000000032de8
- (void)appDocumentController:(id)arg1 didUpdateViewModel:(id)arg2;	// IMP=0x0000000000032d29
- (id)activeAppDocumentForApplication:(id)arg1;	// IMP=0x0000000000032cd9
- (id)launchParamsForApplication:(id)arg1;	// IMP=0x0000000000032cc7
- (void)application:(id)arg1 startDidFailWithError:(id)arg2;	// IMP=0x0000000000032c40
- (void)applicationDidStart:(id)arg1;	// IMP=0x0000000000032bfc
- (void)application:(id)arg1 evaluateAppJavascriptInContext:(id)arg2;	// IMP=0x0000000000031fd4
- (void)applicationStartSelfValidationWithAuthenticationToken:(id)arg1;	// IMP=0x0000000000031c0e
- (void)submitRequest:(id)arg1;	// IMP=0x0000000000031a58
- (void)showAuthenticationUserInterfaceWithAuthenticationToken:(id)arg1;	// IMP=0x000000000003146e
- (void)sendErrorMessage:(id)arg1;	// IMP=0x00000000000313fc
- (void)stop;	// IMP=0x0000000000031322
- (void)start;	// IMP=0x00000000000312de
- (void)transitionToInvalidState;	// IMP=0x00000000000311e5
- (void)transitionToNotifyingOfLaunchFailureState;	// IMP=0x0000000000030f58
- (void)transitionToReadyState;	// IMP=0x0000000000030efb
- (void)transitionToWaitingForBothLaunchCallbacksState;	// IMP=0x00000000000307cf
- (void)transitionToWaitingForBootUrlState;	// IMP=0x00000000000302f0
- (void)dealloc;	// IMP=0x000000000003023f
- (id)initWithIdentityProvider:(id)arg1;	// IMP=0x000000000002fde3
- (id)init;	// IMP=0x000000000002fd74
- (oneway void)release;	// IMP=0x000000000001b311

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

