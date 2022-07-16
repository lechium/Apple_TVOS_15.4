//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class MRDeviceInfo, MROrigin, MRPlayerPath, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSNumber;
@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClientRequests : NSObject <MRNowPlayingClientState>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    MRDeviceInfo *_deviceInfo;	// 16 = 0x10
    NSNumber *_volumeCapabilities;	// 24 = 0x18
    NSNumber *_volume;	// 32 = 0x20
    NSDate *_lastPlayingDate;	// 40 = 0x28
    NSMutableArray *_nowPlayingClients;	// 48 = 0x30
    NSMutableDictionary *_transactionCallbacks;	// 56 = 0x38
    NSMutableArray *_deviceInfoCompletions;	// 64 = 0x40
    NSMutableArray *_volumeCompletions;	// 72 = 0x48
    NSMutableArray *_volumeCapabilitiesCompletions;	// 80 = 0x50
    NSMutableArray *_lastPlayingDateCompletions;	// 88 = 0x58
    MROrigin *_origin;	// 96 = 0x60
    MRPlayerPath *_playerPath;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000f8996
@property(readonly, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) MROrigin *origin; // @synthesize origin=_origin;
- (void)restoreNowPlayingClientState;	// IMP=0x00000000000f880a
- (void)handleLastPlayingDateRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f845e
- (void)handleVolumeCapabilitiesRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f80a4
- (void)handleVolumeRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f7ce0
- (void)handleDeviceInfoRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f792b
- (CDUnknownBlockType)transactionCallbackForName:(unsigned long long)arg1;	// IMP=0x00000000000f77b0
- (void)setTransactionCallback:(CDUnknownBlockType)arg1 forName:(unsigned long long)arg2;	// IMP=0x00000000000f767f
@property(retain, nonatomic) NSDate *lastPlayingDate;
@property(retain, nonatomic) NSNumber *volume;
@property(retain, nonatomic) NSNumber *volumeCapabilities;
@property(copy, nonatomic) MRDeviceInfo *deviceInfo;
@property(readonly, nonatomic) NSArray *nowPlayingClientRequests;
- (void)removeAllClients;	// IMP=0x00000000000f6d7e
- (void)removeClient:(id)arg1;	// IMP=0x00000000000f6b08
- (id)existingNowPlayingClientRequestsForPlayerPath:(id)arg1;	// IMP=0x00000000000f67e3
- (id)nowPlayingClientRequestsForPlayerPath:(id)arg1;	// IMP=0x00000000000f642f
- (id)debugDescription;	// IMP=0x00000000000f61a5
- (id)initWithOrigin:(id)arg1;	// IMP=0x00000000000f6084

@end
