//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary, NSString, NSURL, NSXPCConnection;
@protocol NDSessionManagerDelegate, OS_dispatch_queue;

@interface NDSessionManager : NSObject
{
    NSMutableDictionary *_sessions;	// 8 = 0x8
    NSMutableDictionary *_reconnectingProxies;	// 16 = 0x10
    NSString *_clientBundleID;	// 24 = 0x18
    NSURL *_bundleDirectory;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_sessionArchiveQueue;	// 40 = 0x28
    id _boost;	// 48 = 0x30
    _Bool _isSpringBoardApp;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    NSXPCConnection *_xpcConn;	// 72 = 0x48
    id <NDSessionManagerDelegate> _delegate;	// 80 = 0x50
    MISSING_TYPE *_obliterationCompletion;	// 88 = 0x58
}

+ (id)restoreOptionsFromArchivePath:(id)arg1;	// IMP=0x0020000000010912
- (void).cxx_destruct;	// IMP=0x0020000000010394
@property(copy) CDUnknownBlockType obliterationCompletion; // @synthesize obliterationCompletion=_obliterationCompletion;
@property _Bool isSpringBoardApp; // @synthesize isSpringBoardApp=_isSpringBoardApp;
@property __weak id <NDSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak NSXPCConnection *xpcConn; // @synthesize xpcConn=_xpcConn;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)archiveTimerFired;	// IMP=0x00100000000102a1
- (void)obliterate;	// IMP=0x00100000000101e7
- (void)clientApplicationWasReinstalled;	// IMP=0x001000000001019c
- (id)getSessionWithIdentifier:(id)arg1;	// IMP=0x0010000000010176
- (void)sessionCompleted:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000fecb
- (void)cleanupWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fdbe
- (void)obliterateAllSessionsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fcbb
- (void)getActiveSessionIdentifiersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fc16
- (void)okayToSendPendingCallbacksForIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f9b7
- (void)releaseAssertionForSession:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f895
- (void)sendPendingCallbacksForIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f55a
- (void)createSessionWithConfiguration:(id)arg1 clientProxy:(id)arg2 cachesDirectory:(id)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000000e3ee
- (_Bool)connection:(id)arg1 canUseSharedContainerIdentifier:(id)arg2;	// IMP=0x001000000000e26c
- (id)copyAndSanitizeClientConfiguration:(id)arg1;	// IMP=0x001000000000d892
- (void)dropBoost;	// IMP=0x001000000000d847
- (void)boost;	// IMP=0x001000000000d71f
- (void)archiveState;	// IMP=0x001000000000d635
- (id)restoreState:(_Bool *)arg1;	// IMP=0x001000000000c7ff
- (id)downloadDirectoryDataPath;	// IMP=0x001000000000c790
- (id)archivePath;	// IMP=0x001000000000c721
- (void)dealloc;	// IMP=0x001000000000c6f2
- (id)initWithDelegate:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3;	// IMP=0x001000000000c4a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

