//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRCryptoPairingSession, NSArray;

@interface MRExternalClientConnection
{
    NSArray *_subscribedPlayerPaths;	// 8 = 0x8
    _Bool _registeredToNowPlayingUpdates;	// 16 = 0x10
    _Bool _registeredToVolumeUpdates;	// 17 = 0x11
    _Bool _registeredKeyboardUpdates;	// 18 = 0x12
    _Bool _registeredToOutputDeviceUpdates;	// 19 = 0x13
    _Bool _registeredToSystemEndpointUpdates;	// 20 = 0x14
    _Bool _cryptoEnabled;	// 21 = 0x15
    unsigned int _voiceRecordingState;	// 24 = 0x18
    MRCryptoPairingSession *_cryptoSession;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000022ca32
@property(nonatomic) _Bool cryptoEnabled; // @synthesize cryptoEnabled=_cryptoEnabled;
@property(retain, nonatomic) MRCryptoPairingSession *cryptoSession; // @synthesize cryptoSession=_cryptoSession;
@property(nonatomic) unsigned int voiceRecordingState; // @synthesize voiceRecordingState=_voiceRecordingState;
@property(nonatomic) _Bool registeredToSystemEndpointUpdates; // @synthesize registeredToSystemEndpointUpdates=_registeredToSystemEndpointUpdates;
@property(nonatomic) _Bool registeredToOutputDeviceUpdates; // @synthesize registeredToOutputDeviceUpdates=_registeredToOutputDeviceUpdates;
@property(nonatomic) _Bool registeredKeyboardUpdates; // @synthesize registeredKeyboardUpdates=_registeredKeyboardUpdates;
@property(nonatomic) _Bool registeredToVolumeUpdates; // @synthesize registeredToVolumeUpdates=_registeredToVolumeUpdates;
@property(nonatomic) _Bool registeredToNowPlayingUpdates; // @synthesize registeredToNowPlayingUpdates=_registeredToNowPlayingUpdates;
@property(copy, nonatomic) NSArray *subscribedPlayerPaths;
- (id)initWithConnection:(id)arg1;	// IMP=0x000000000022c817

@end
