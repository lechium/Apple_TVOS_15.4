//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDClientProtocol-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDWorkerProtocol-Protocol.h>

@class NSString;
@protocol DEDXPCProtocol;

@interface DEDXPCOutbound : NSObject <DEDWorkerProtocol, DEDClientProtocol>
{
    id <DEDXPCProtocol> _remoteObject;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006c096
@property(retain) id <DEDXPCProtocol> remoteObject; // @synthesize remoteObject=_remoteObject;
- (void)didGetState:(long long)arg1 info:(id)arg2 sessionID:(id)arg3;	// IMP=0x000000000006bfe5
- (void)didCancelSession:(id)arg1;	// IMP=0x000000000006bf73
- (void)getSessionStateWithSession:(id)arg1;	// IMP=0x000000000006bf01
- (void)cancelNotificationForSession:(id)arg1;	// IMP=0x000000000006be8f
- (void)scheduleNotificationForSession:(id)arg1;	// IMP=0x000000000006be1d
- (void)cancelSession:(id)arg1;	// IMP=0x000000000006bdab
- (void)didCommitSession:(id)arg1;	// IMP=0x000000000006bd39
- (void)commitSession:(id)arg1;	// IMP=0x000000000006bcc7
- (void)uploadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 session:(id)arg3;	// IMP=0x000000000006bc4a
- (void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2;	// IMP=0x000000000006bbc4
- (void)adoptFiles:(id)arg1 forSession:(id)arg2;	// IMP=0x000000000006bb3e
- (void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;	// IMP=0x000000000006ba9b
- (void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3;	// IMP=0x000000000006b9d8
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;	// IMP=0x000000000006b911
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;	// IMP=0x000000000006b877
- (void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2;	// IMP=0x000000000006b640
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 withIdentifiers:(id)arg3 inSession:(id)arg4;	// IMP=0x000000000006b4a1
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3;	// IMP=0x000000000006b37a
- (void)syncSessionStatusWithSession:(id)arg1;	// IMP=0x000000000006b308
- (void)getSessionStatusWithSession:(id)arg1;	// IMP=0x000000000006b296
- (void)listAvailableExtensionsForSession:(id)arg1;	// IMP=0x000000000006b224
- (void)pongSession:(id)arg1;	// IMP=0x000000000006b1b2
- (void)pingSession:(id)arg1;	// IMP=0x000000000006b140
- (id)initWithRemoteObject:(id)arg1;	// IMP=0x000000000006b0d8
- (long long)transportType;	// IMP=0x000000000006b0cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

