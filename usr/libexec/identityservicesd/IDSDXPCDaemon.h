//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSXPCConnection;
@protocol IDSDXPCDaemonCollaboratorProvider, IDSXPCReunionSync, OS_dispatch_queue;

@interface IDSDXPCDaemon : NSObject
{
    IDSXPCConnection *_clientConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 24 = 0x18
    CDUnknownBlockType _invalidationHandler;	// 32 = 0x20
    id <IDSDXPCDaemonCollaboratorProvider> _collaboratorProvider;	// 40 = 0x28
    id <IDSXPCReunionSync> _reunionSyncCollaborator;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000004269d0
@property(retain, nonatomic) id <IDSXPCReunionSync> reunionSyncCollaborator; // @synthesize reunionSyncCollaborator=_reunionSyncCollaborator;
@property(retain, nonatomic) id <IDSDXPCDaemonCollaboratorProvider> collaboratorProvider; // @synthesize collaboratorProvider=_collaboratorProvider;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue; // @synthesize xpcQueue=_xpcQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
- (void)interalTestingCollaboratorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000426580
- (void)serverMessagingCollaboratorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000426430
- (void)activityMonitorCollaboratorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004262e0
- (void)registrationCollaboratorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000426220
- (void)opportunisticCollaboratorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000426160
- (void)reunionSyncCollaboratorForClientProcessName:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000425d80
- (void)pairedDeviceManagerCollaboratorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000425c00
- (void)pairingCollaboratorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004258d0
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004257b0
- (id)initWithQueue:(id)arg1 syncOntoMain:(_Bool)arg2 collaboratorProvider:(id)arg3 takingOverAndResumingConnection:(id)arg4;	// IMP=0x00100000004254d0

@end

