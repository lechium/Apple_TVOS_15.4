//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDClientProtocol-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDWorkerProtocol-Protocol.h>

@class NSString;
@protocol DEDClientProtocol, DEDWorkerProtocol, OS_os_log;

@interface DEDLocalTransport : NSObject <DEDClientProtocol, DEDWorkerProtocol>
{
    id <DEDClientProtocol> _clientDelegate;	// 8 = 0x8
    id <DEDWorkerProtocol> _workerDelegate;	// 16 = 0x10
    NSObject<OS_os_log> *_log;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004a6d2
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property __weak id <DEDWorkerProtocol> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
@property __weak id <DEDClientProtocol> clientDelegate; // @synthesize clientDelegate=_clientDelegate;
- (void)didGetState:(long long)arg1 info:(id)arg2 sessionID:(id)arg3;	// IMP=0x000000000004a5d3
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 withIdentifiers:(id)arg3 inSession:(id)arg4;	// IMP=0x000000000004a50c
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3;	// IMP=0x000000000004a472
- (void)didCancelSession:(id)arg1;	// IMP=0x000000000004a400
- (void)didCommitSession:(id)arg1;	// IMP=0x000000000004a38e
- (void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3;	// IMP=0x000000000004a2f4
- (void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2;	// IMP=0x000000000004a26e
- (void)pongSession:(id)arg1;	// IMP=0x000000000004a1fc
- (void)cancelNotificationForSession:(id)arg1;	// IMP=0x000000000004a18a
- (void)scheduleNotificationForSession:(id)arg1;	// IMP=0x000000000004a118
- (void)cancelSession:(id)arg1;	// IMP=0x000000000004a0a6
- (void)commitSession:(id)arg1;	// IMP=0x000000000004a034
- (void)uploadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 session:(id)arg3;	// IMP=0x0000000000049fb7
- (void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2;	// IMP=0x0000000000049f31
- (void)adoptFiles:(id)arg1 forSession:(id)arg2;	// IMP=0x0000000000049eab
- (void)getSessionStatusWithSession:(id)arg1;	// IMP=0x0000000000049e39
- (void)syncSessionStatusWithSession:(id)arg1;	// IMP=0x0000000000049dc7
- (void)getSessionStateWithSession:(id)arg1;	// IMP=0x0000000000049d55
- (void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;	// IMP=0x0000000000049cbb
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;	// IMP=0x0000000000049bf4
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;	// IMP=0x0000000000049b5a
- (void)listAvailableExtensionsForSession:(id)arg1;	// IMP=0x0000000000049ae8
- (void)pingSession:(id)arg1;	// IMP=0x0000000000049a76
@property(readonly, copy) NSString *description;
- (id)initWithWorkerDelegate:(id)arg1;	// IMP=0x0000000000049899
- (id)initWithClientDelegate:(id)arg1;	// IMP=0x00000000000497c0
- (long long)transportType;	// IMP=0x00000000000497b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

