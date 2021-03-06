//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/IKAppContextDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/IKApplication-Protocol.h>
#import <VideoSubscriberAccountUI/VSStateMachineDelegate-Protocol.h>

@class IKAppContext, NSError, NSHTTPCookieStorage, NSString, NSURL, VSAppDeviceConfig, VSAuditToken, VSStateMachine;
@protocol VSApplicationDelegate;

__attribute__((visibility("hidden")))
@interface VSApplication : NSObject <IKAppContextDelegate, VSStateMachineDelegate, IKApplication>
{
    _Bool _shouldAllowRemoteInspection;	// 8 = 0x8
    NSURL *_bootURL;	// 16 = 0x10
    IKAppContext *_appContext;	// 24 = 0x18
    id <VSApplicationDelegate> _delegate;	// 32 = 0x20
    VSAuditToken *_auditToken;	// 40 = 0x28
    VSStateMachine *_stateMachine;	// 48 = 0x30
    VSAppDeviceConfig *_appDeviceConfig;	// 56 = 0x38
    NSHTTPCookieStorage *_cookieStorage;	// 64 = 0x40
    NSError *_failureToStart;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000004c3dc
@property(retain, nonatomic) NSError *failureToStart; // @synthesize failureToStart=_failureToStart;
@property(retain, nonatomic) NSHTTPCookieStorage *cookieStorage; // @synthesize cookieStorage=_cookieStorage;
@property(retain, nonatomic) VSAppDeviceConfig *appDeviceConfig; // @synthesize appDeviceConfig=_appDeviceConfig;
@property(retain, nonatomic) VSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) _Bool shouldAllowRemoteInspection; // @synthesize shouldAllowRemoteInspection=_shouldAllowRemoteInspection;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) __weak id <VSApplicationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(readonly, copy, nonatomic) NSURL *bootURL; // @synthesize bootURL=_bootURL;
- (id)viewElementRegistry;	// IMP=0x000000000004bf0b
- (id)activeDocument;	// IMP=0x000000000004beac
- (id)appLaunchParams;	// IMP=0x000000000004be4d
- (id)userDefaultsStorage;	// IMP=0x000000000004be45
- (id)vendorStorage;	// IMP=0x000000000004be3d
- (id)localStorage;	// IMP=0x000000000004be35
- (id)vendorIdentifier;	// IMP=0x000000000004be2d
- (id)appIdentifier;	// IMP=0x000000000004bdd6
- (id)appJSURL;	// IMP=0x000000000004bdc4
- (_Bool)shouldIgnoreJSValidation;	// IMP=0x000000000004bdbc
- (_Bool)appIsTrusted;	// IMP=0x000000000004bdb4
- (void)willPerformXhrRequest:(id)arg1;	// IMP=0x000000000004bd9a
- (id)sourceApplicationAuditTokenDataForContext:(id)arg1;	// IMP=0x000000000004bd4a
- (id)sourceApplicationBundleIdentifierForContext:(id)arg1;	// IMP=0x000000000004bcfa
- (id)xhrSessionConfigurationForContext:(id)arg1;	// IMP=0x000000000004bc4f
- (id)objectForPlayer:(id)arg1;	// IMP=0x000000000004bc47
- (id)objectForPlaylist:(id)arg1;	// IMP=0x000000000004bc3f
- (id)objectForMediaItem:(id)arg1;	// IMP=0x000000000004bc37
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x000000000004bbc2
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;	// IMP=0x000000000004bad9
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000004ba23
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;	// IMP=0x000000000004b9df
- (_Bool)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id *)arg4;	// IMP=0x000000000004b9d7
- (id)deviceConfigForContext:(id)arg1;	// IMP=0x000000000004b9c5
- (void)appDocumentForDocument:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004b728
- (void)sendErrorWithMessage:(id)arg1;	// IMP=0x000000000004b6b4
- (void)evaluate:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004b62e
- (void)stop;	// IMP=0x000000000004b5ea
- (void)start;	// IMP=0x000000000004b5a6
- (void)transitionToInvalidState;	// IMP=0x000000000004b546
- (void)transitionToStoppingState;	// IMP=0x000000000004b509
- (void)transitionToReadyState;	// IMP=0x000000000004b46c
- (void)transitionToNotifyingOfFailureToStartState;	// IMP=0x000000000004b35f
- (void)transitionToStartingState;	// IMP=0x000000000004b282
- (void)dealloc;	// IMP=0x000000000004b1d1
- (id)initWithBootURL:(id)arg1;	// IMP=0x000000000004af2f
- (id)init;	// IMP=0x000000000004aec0
- (oneway void)release;	// IMP=0x000000000001b2a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

