//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLConnectionRequired-Protocol.h>
#import <CFNetwork/SSDownloadHandlerDelegate-Protocol.h>
#import <CFNetwork/SSDownloadManagerObserver-Protocol.h>

@class NSAsyncSSDownloadManager, NSCountedSet, NSMutableArray, NSString, NSTimer, SSDownloadHandler;

@interface NSURLConnectionInternalBackgroundDownload <NSURLConnectionRequired, SSDownloadManagerObserver, SSDownloadHandlerDelegate>
{
    struct __CFRunLoopSource *_source;	// 72 = 0x48
    NSMutableArray *_pendingOps;	// 80 = 0x50
    NSCountedSet *_runloops;	// 88 = 0x58
    SSDownloadHandler *_handler;	// 96 = 0x60
    NSAsyncSSDownloadManager *_manager;	// 104 = 0x68
    long long _downloadIdent;	// 112 = 0x70
    long long _ctLast;	// 120 = 0x78
    _Bool _terminated;	// 128 = 0x80
    NSTimer *_deferredStartTimer;	// 136 = 0x88
}

+ (void)_enableLogging;	// IMP=0x00000000001f6f07
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;	// IMP=0x00000000001f4bd7
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;	// IMP=0x00000000001f4b94
- (void)cancelAuthenticationChallenge:(id)arg1;	// IMP=0x00000000001f4b51
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;	// IMP=0x00000000001f4b0e
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;	// IMP=0x00000000001f4acb
- (void)_updateDownloadState:(id)arg1;	// IMP=0x00000000001f46b0
- (long long)_getDownloadIdent;	// IMP=0x00000000001f469f
- (void)downloadHandler:(id)arg1 handleAuthenticationSession:(id)arg2;	// IMP=0x00000000001f463a
- (_Bool)downloadHandler:(id)arg1 pauseSession:(id)arg2;	// IMP=0x00000000001f4632
- (void)downloadHandler:(id)arg1 cancelSession:(id)arg2;	// IMP=0x00000000001f45de
- (void)downloadHandlerDidDisconnect:(id)arg1;	// IMP=0x00000000001f44eb
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00000000001f4462
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00000000001f433c
- (void)cancel;	// IMP=0x00000000001f423e
- (void)start;	// IMP=0x00000000001f3dd4
- (void)_managerFailedToStartInTime;	// IMP=0x00000000001f3d77
- (void)dealloc;	// IMP=0x00000000001f3d14
- (void)_invalidate;	// IMP=0x00000000001f3b68
- (void)invokeForDelegate:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f38f4
@property(readonly, copy) NSString *description;
- (id)initWithInfo:(const struct InternalInit *)arg1;	// IMP=0x00000000001f2f96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

