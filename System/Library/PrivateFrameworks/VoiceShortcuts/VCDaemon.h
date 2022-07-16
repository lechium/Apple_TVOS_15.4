//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCCKShortcutSyncCoordinator, VCDaemonDatabaseProvider, VCDaemonSyncDataEndpoint, VCDaemonXPCEventHandler, VCSpotlightSyncService, VCWatchSyncCoordinator, VCXPCServer, WFRemoteExecutionCoordinator, WFSiriWorkflowVocabularyUpdater, WFSystemSurfaceWorkflowStatusUpdater, WFTriggerRegistrar;

@interface VCDaemon : NSObject
{
    VCXPCServer *_xpcServer;	// 8 = 0x8
    VCDaemonDatabaseProvider *_databaseProvider;	// 16 = 0x10
    VCDaemonXPCEventHandler *_xpcEventHandler;	// 24 = 0x18
    VCDaemonSyncDataEndpoint *_syncDataEndpoint;	// 32 = 0x20
    WFTriggerRegistrar *_triggerRegistrar;	// 40 = 0x28
    VCWatchSyncCoordinator *_watchSyncCoordinator;	// 48 = 0x30
    VCSpotlightSyncService *_spotlightLibrarySyncService;	// 56 = 0x38
    WFSystemSurfaceWorkflowStatusUpdater *_systemSurfaceWorkflowStatusUpdater;	// 64 = 0x40
    WFSiriWorkflowVocabularyUpdater *_vocabularyUpdater;	// 72 = 0x48
    WFRemoteExecutionCoordinator *_remoteExecutionCoordinator;	// 80 = 0x50
    VCCKShortcutSyncCoordinator *_shortcutSyncCoordinator;	// 88 = 0x58
}

+ (id)sharedDaemon;	// IMP=0x000000000005ec30
- (void).cxx_destruct;	// IMP=0x000000000005e9dd
@property(retain, nonatomic) VCCKShortcutSyncCoordinator *shortcutSyncCoordinator; // @synthesize shortcutSyncCoordinator=_shortcutSyncCoordinator;
@property(retain, nonatomic) WFRemoteExecutionCoordinator *remoteExecutionCoordinator; // @synthesize remoteExecutionCoordinator=_remoteExecutionCoordinator;
@property(retain, nonatomic) WFSiriWorkflowVocabularyUpdater *vocabularyUpdater; // @synthesize vocabularyUpdater=_vocabularyUpdater;
@property(retain, nonatomic) WFSystemSurfaceWorkflowStatusUpdater *systemSurfaceWorkflowStatusUpdater; // @synthesize systemSurfaceWorkflowStatusUpdater=_systemSurfaceWorkflowStatusUpdater;
@property(readonly, nonatomic) VCSpotlightSyncService *spotlightLibrarySyncService; // @synthesize spotlightLibrarySyncService=_spotlightLibrarySyncService;
@property(readonly, nonatomic) VCWatchSyncCoordinator *watchSyncCoordinator; // @synthesize watchSyncCoordinator=_watchSyncCoordinator;
@property(readonly, nonatomic) WFTriggerRegistrar *triggerRegistrar; // @synthesize triggerRegistrar=_triggerRegistrar;
@property(readonly, nonatomic) VCDaemonSyncDataEndpoint *syncDataEndpoint; // @synthesize syncDataEndpoint=_syncDataEndpoint;
@property(readonly, nonatomic) VCDaemonXPCEventHandler *xpcEventHandler; // @synthesize xpcEventHandler=_xpcEventHandler;
@property(readonly, nonatomic) VCDaemonDatabaseProvider *databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(readonly, nonatomic) VCXPCServer *xpcServer; // @synthesize xpcServer=_xpcServer;
- (void)addSignalHandlers;	// IMP=0x000000000005e8ac
- (void)applicationWasUnregistered:(id)arg1;	// IMP=0x000000000005e5b8
- (void)startEventObservation;	// IMP=0x000000000005e526
- (void)start;	// IMP=0x000000000005e214
- (id)init;	// IMP=0x000000000005dfe0

@end
