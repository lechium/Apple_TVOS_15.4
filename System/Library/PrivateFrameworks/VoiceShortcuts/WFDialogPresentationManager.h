//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/NSXPCListenerDelegate-Protocol.h>
#import <VoiceShortcuts/WFDialogAlertPresenterDelegate-Protocol.h>
#import <VoiceShortcuts/WFDialogXPCHostProtocol-Protocol.h>
#import <VoiceShortcuts/WFScreenOnObserverDelegate-Protocol.h>
#import <VoiceShortcuts/WFUIPresenterInterface-Protocol.h>

@class NSMutableArray, NSString, NSXPCListener, WFDialogAttributions, WFDialogNotificationManager, WFPresentedDialog, WFScreenOnObserver, WFWorkflowRunningContext;
@protocol OS_dispatch_queue, WFDialogAlertPresenter, WFDialogPresentationManagerDelegate, WFDialogXPCProtocol;

@interface WFDialogPresentationManager : NSObject <NSXPCListenerDelegate, WFDialogXPCHostProtocol, WFScreenOnObserverDelegate, WFDialogAlertPresenterDelegate, WFUIPresenterInterface>
{
    _Bool _completePersistentModeAwaitingRemoteAlertReactivationSuccess;	// 8 = 0x8
    id <WFDialogPresentationManagerDelegate> _delegate;	// 16 = 0x10
    id <WFDialogAlertPresenter> _remoteAlertPresenter;	// 24 = 0x18
    NSXPCListener *_listener;	// 32 = 0x20
    id <WFDialogXPCProtocol> _connectedDialog;	// 40 = 0x28
    WFPresentedDialog *_presentedDialog;	// 48 = 0x30
    NSMutableArray *_contentDismissalCompletionHandlers;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    WFWorkflowRunningContext *_persistentRunningContext;	// 72 = 0x48
    WFDialogAttributions *_persistentRunningAttributions;	// 80 = 0x50
    NSMutableArray *_persistentPresentationQueue;	// 88 = 0x58
    NSMutableArray *_otherPresentationQueue;	// 96 = 0x60
    WFDialogNotificationManager *_notificationManager;	// 104 = 0x68
    WFScreenOnObserver *_screenOnObserver;	// 112 = 0x70
    CDUnknownBlockType _completePersistentModeBlockAwaitingRemoteAlertReactivation;	// 120 = 0x78
    NSString *_dismissalReason;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000034e4e
@property(retain, nonatomic) NSString *dismissalReason; // @synthesize dismissalReason=_dismissalReason;
@property(copy, nonatomic) CDUnknownBlockType completePersistentModeBlockAwaitingRemoteAlertReactivation; // @synthesize completePersistentModeBlockAwaitingRemoteAlertReactivation=_completePersistentModeBlockAwaitingRemoteAlertReactivation;
@property(nonatomic) _Bool completePersistentModeAwaitingRemoteAlertReactivationSuccess; // @synthesize completePersistentModeAwaitingRemoteAlertReactivationSuccess=_completePersistentModeAwaitingRemoteAlertReactivationSuccess;
@property(readonly, nonatomic) WFScreenOnObserver *screenOnObserver; // @synthesize screenOnObserver=_screenOnObserver;
@property(readonly, nonatomic) WFDialogNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) NSMutableArray *otherPresentationQueue; // @synthesize otherPresentationQueue=_otherPresentationQueue;
@property(readonly, nonatomic) NSMutableArray *persistentPresentationQueue; // @synthesize persistentPresentationQueue=_persistentPresentationQueue;
@property(retain, nonatomic) WFDialogAttributions *persistentRunningAttributions; // @synthesize persistentRunningAttributions=_persistentRunningAttributions;
@property(retain, nonatomic) WFWorkflowRunningContext *persistentRunningContext; // @synthesize persistentRunningContext=_persistentRunningContext;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableArray *contentDismissalCompletionHandlers; // @synthesize contentDismissalCompletionHandlers=_contentDismissalCompletionHandlers;
@property(retain, nonatomic) WFPresentedDialog *presentedDialog; // @synthesize presentedDialog=_presentedDialog;
@property(retain, nonatomic) id <WFDialogXPCProtocol> connectedDialog; // @synthesize connectedDialog=_connectedDialog;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) id <WFDialogAlertPresenter> remoteAlertPresenter; // @synthesize remoteAlertPresenter=_remoteAlertPresenter;
@property(nonatomic) __weak id <WFDialogPresentationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)trackDialogEventWithKey:(id)arg1 request:(id)arg2 presentationMode:(unsigned long long)arg3 automationType:(id)arg4;	// IMP=0x0000000000034bda
- (void)logFinishDialogPresentationWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 automationType:(id)arg3;	// IMP=0x0000000000034bb8
- (void)logFinishDialogPresentationWithPresentedDialog:(id)arg1;	// IMP=0x0000000000034ae6
- (void)logStartDialogPresentationWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2;	// IMP=0x0000000000034ac4
- (void)trackSuspendShortcutWithPresentedDialog:(id)arg1;	// IMP=0x00000000000349db
- (void)screenOnStateDidChange:(id)arg1;	// IMP=0x000000000003492a
- (void)dismissPersistentChromeInDialog:(id)arg1 success:(_Bool)arg2 customAttributions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000034887
- (void)completePersistentModeWithSuccess:(_Bool)arg1 runningContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000347d0
- (void)beginPersistentModeWithRunningContext:(id)arg1 attributions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000346c6
- (void)dialogAlertPresenterDidInvalidateAlert:(id)arg1;	// IMP=0x0000000000034655
- (void)dialogAlertPresenterDidDeactivateAlert:(id)arg1;	// IMP=0x00000000000345e4
- (void)dialogAlertPresenterDidDisconnectFromAlert:(id)arg1;	// IMP=0x0000000000034573
- (void)dialogAlertPresenter:(id)arg1 didConnectToAlert:(id)arg2;	// IMP=0x00000000000344c2
- (void)requestDismissalWithReason:(id)arg1;	// IMP=0x0000000000034411
- (void)beginConnection;	// IMP=0x00000000000343a0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000034251
- (void)postNotificationWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0000000000034169
- (void)activateRemoteAlertTiedToBundleIdentifier:(id)arg1;	// IMP=0x00000000000340b8
- (void)activateRemoteAlert;	// IMP=0x00000000000340a4
- (void)queue_clearPersistentModeStateIfNecessary;	// IMP=0x0000000000033f09
- (void)queue_deactivateRemoteAlertAndInvalidateConnection;	// IMP=0x0000000000033dfa
- (void)queue_presentNextDialog;	// IMP=0x000000000003367a
- (void)dismissPresentedContentForRunningContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000335c9
- (void)showDialogRequest:(id)arg1 runningContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000334b3
- (_Bool)hasPersistentState;	// IMP=0x00000000000333b5
- (_Bool)queue_hasMoreDialogsToPresent;	// IMP=0x0000000000033308
- (void)queue_connectedDialogDidDisconnect;	// IMP=0x0000000000033154
- (void)removeStaleNotifications;	// IMP=0x0000000000033117
- (void)dealloc;	// IMP=0x00000000000330d5
- (id)initWithListener:(id)arg1 notificationManager:(id)arg2 dialogAlertPresenter:(id)arg3 screenOnObserver:(id)arg4;	// IMP=0x0000000000032eee
- (id)initWithUserNotificationManager:(id)arg1;	// IMP=0x0000000000032e06

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

