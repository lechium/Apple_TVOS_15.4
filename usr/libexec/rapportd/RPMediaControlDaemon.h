//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, RPMessageable;

@interface RPMediaControlDaemon : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    unsigned int _movementCommand;	// 16 = 0x10
    unsigned int _movementEndCommand;	// 20 = 0x14
    NSObject<OS_dispatch_source> *_movementEndTimer;	// 24 = 0x18
    unsigned long long _mediaControlFlags;	// 32 = 0x20
    _Bool _mediaControlInterest;	// 40 = 0x28
    _Bool _mediaRemoteCommandGetting;	// 41 = 0x29
    _Bool _mediaRemoteCommandObserving;	// 42 = 0x2a
    unsigned int _mediaRemoteVolumeCaps;	// 44 = 0x2c
    _Bool _mediaRemoteVolumeObserving;	// 48 = 0x30
    _Bool _volumeControlEnabledPB;	// 49 = 0x31
    int _volumeControlNotifyToken;	// 52 = 0x34
    id <RPMessageable> _messenger;	// 56 = 0x38
    CDUnknownBlockType _sendInterestEventHandler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000005068d
@property(copy, nonatomic) CDUnknownBlockType sendInterestEventHandler; // @synthesize sendInterestEventHandler=_sendInterestEventHandler;
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
- (void)_handleSetVolume:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050330
- (void)_handleGetVolume:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050170
- (void)_handleSkipByRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050060
- (void)_handleMovementCommand:(unsigned int)arg1 endCommand:(unsigned int)arg2;	// IMP=0x001000000004febc
- (void)_handleMediaCaptionSet:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004fce2
- (void)_handleMediaCaptionGet:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004fbb8
- (void)_handleCommand:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004f90a
- (void)_mediaRemoteVolumeControlUpdate;	// IMP=0x001000000004f8e0
- (void)_mediaRemoteVolumeControlChanged:(id)arg1;	// IMP=0x001000000004f760
- (void)_mediaRemoteSupportedCommandsGet;	// IMP=0x001000000004f48a
- (void)_mediaRemoteSupportedCommandsChanged;	// IMP=0x001000000004f3c6
- (void)_mediaControlFlagsUpdate:(unsigned long long)arg1 mask:(unsigned long long)arg2;	// IMP=0x001000000004f268
- (void)_mediaControlEnsureStopped;	// IMP=0x001000000004f13b
- (void)_mediaControlEnsureStarted;	// IMP=0x001000000004ed79
- (void)_update;	// IMP=0x001000000004ed55
- (void)deregisteredEventID:(id)arg1;	// IMP=0x001000000004ed0d
- (void)registeredEventID:(id)arg1;	// IMP=0x001000000004ecc5
- (void)invalidate;	// IMP=0x001000000004eb82
- (_Bool)activateAndReturnError:(id *)arg1;	// IMP=0x001000000004e93b
- (id)init;	// IMP=0x001000000004e8c4

@end

