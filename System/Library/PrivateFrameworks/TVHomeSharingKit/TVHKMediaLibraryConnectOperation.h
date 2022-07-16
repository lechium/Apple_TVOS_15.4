//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSOperation, TVHKMediaLibraryRequestSession, TVHKMediaLibrarySessionState, TVHKMediaServerIdentifier;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryConnectOperation
{
    TVHKMediaLibrarySessionState *_sessionState;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    TVHKMediaServerIdentifier *_mediaServerIdentifier;	// 24 = 0x18
    TVHKMediaLibraryRequestSession *_requestSession;	// 32 = 0x20
    NSOperation *_currentSubOperation;	// 40 = 0x28
    TVHKMediaLibrarySessionState *_sessionStateInternal;	// 48 = 0x30
}

+ (id)new;	// IMP=0x000000000004c0fd
- (void).cxx_destruct;	// IMP=0x000000000004e39a
@property(retain, nonatomic) TVHKMediaLibrarySessionState *sessionStateInternal; // @synthesize sessionStateInternal=_sessionStateInternal;
@property(retain, nonatomic) NSOperation *currentSubOperation; // @synthesize currentSubOperation=_currentSubOperation;
@property(retain, nonatomic) TVHKMediaLibraryRequestSession *requestSession; // @synthesize requestSession=_requestSession;
@property(retain, nonatomic) TVHKMediaServerIdentifier *mediaServerIdentifier; // @synthesize mediaServerIdentifier=_mediaServerIdentifier;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) TVHKMediaLibrarySessionState *sessionState; // @synthesize sessionState=_sessionState;
- (void)_finishConnectAttemptWithSuccess:(_Bool)arg1;	// IMP=0x000000000004e250
- (void)_startSubOperation:(id)arg1;	// IMP=0x000000000004e1fe
- (void)_startDPAPRevisionOperation;	// IMP=0x000000000004df69
- (void)_startDPAPBasePlaylistOperation;	// IMP=0x000000000004dcf6
- (void)_startDPAPDatabasesOperation;	// IMP=0x000000000004da54
- (void)_startDAAPRevisionOperation;	// IMP=0x000000000004d763
- (void)_startDAAPBasePlaylistOperation;	// IMP=0x000000000004d4af
- (void)_startDAAPDatabasesOperation;	// IMP=0x000000000004d1c0
- (void)_startMachineVerifyOperation;	// IMP=0x000000000004cf36
- (void)_startHomeShareVerifyOperation;	// IMP=0x000000000004cc9d
- (void)_startFairPlaySAPSetupOperation;	// IMP=0x000000000004c99e
- (void)_startLoginOperation;	// IMP=0x000000000004c70a
- (void)_startServerInfoOperation;	// IMP=0x000000000004c350
- (void)cancel;	// IMP=0x000000000004c2d2
- (void)executionDidBegin;	// IMP=0x000000000004c2c0
- (id)initWithMediaServerIdentifier:(id)arg1 accessMode:(unsigned long long)arg2 homeSharingGroupIdentifier:(id)arg3 requestSession:(id)arg4;	// IMP=0x000000000004c19b
- (id)init;	// IMP=0x000000000004c12c

@end
