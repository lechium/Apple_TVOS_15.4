//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/NSXPCConnectionDelegate-Protocol.h>
#import <PhotoAnalysis/PHAServiceOperationHandling-Protocol.h>
#import <PhotoAnalysis/PHAServiceOperationListener-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisServiceProtocol-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSXPCConnection, PHAExecutive, PHAManager;

@interface PHAServiceClientHandler : NSObject <NSXPCConnectionDelegate, PHAServiceOperationHandling, PHAServiceOperationListener, PLPhotoAnalysisServiceProtocol>
{
    NSString *_clientBundleID;	// 8 = 0x8
    NSMutableArray *_clientHandlers;	// 16 = 0x10
    NSMutableDictionary *_operationsByIdentifier;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    NSXPCConnection *_xpcConnection;	// 40 = 0x28
    PHAManager *_photoAnalysisManager;	// 48 = 0x30
    PHAExecutive *_executive;	// 56 = 0x38
    id _serviceUnavailableHandler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000018dfa
@property(retain) id serviceUnavailableHandler; // @synthesize serviceUnavailableHandler=_serviceUnavailableHandler;
@property(retain) PHAExecutive *executive; // @synthesize executive=_executive;
@property(retain) PHAManager *photoAnalysisManager; // @synthesize photoAnalysisManager=_photoAnalysisManager;
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)cancelOperationsWithIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000188a6
- (id)libraryURLFromContextInformation:(id)arg1;	// IMP=0x000000000001883c
- (id)contextInformationFromInvocation:(id)arg1;	// IMP=0x00000000000186ce
- (id)managerForInvocation:(id)arg1 contextInformation:(id)arg2;	// IMP=0x00000000000184aa
- (id)forwardingTargetForInvocation:(id)arg1 contextInformation:(id)arg2 cancelBackgroundActivities:(_Bool *)arg3;	// IMP=0x0000000000017f08
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x0000000000017d62
- (void)submitBlockToExecutiveStateQueue:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017cf0
- (void)shutdown;	// IMP=0x0000000000017cb3
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000017a6d
- (void)handleOperation:(id)arg1;	// IMP=0x00000000000179f7
- (_Bool)isPhotos;	// IMP=0x00000000000179ac
- (_Bool)isplphotosctl;	// IMP=0x0000000000017961
@property(readonly) NSString *clientBundleID;
@property(readonly, copy) NSString *description;
- (void)operationDidFinish:(id)arg1;	// IMP=0x000000000001770b
- (void)addOperation:(id)arg1;	// IMP=0x000000000001766c
- (void)operationWillStart:(id)arg1;	// IMP=0x0000000000017666
- (void)xpcHandlerInvalidate;	// IMP=0x0000000000017480
- (void)removeClientFromExecutiveIfNeeded;	// IMP=0x00000000000173d2
- (id)initWithXPCConnection:(id)arg1 executive:(id)arg2;	// IMP=0x000000000001714e
- (id)init;	// IMP=0x0000000000017140

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

