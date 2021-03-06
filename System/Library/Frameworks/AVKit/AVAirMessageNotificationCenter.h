//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/AVAirTransportDelegate-Protocol.h>
#import <AVKit/AVBonjourServiceDelegate-Protocol.h>

@class AVBonjourService, AVPlayerItem, NSMutableSet, NSString;
@protocol AVAirMessageNotificationCenterDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAirMessageNotificationCenter : NSObject <AVBonjourServiceDelegate, AVAirTransportDelegate>
{
    _Bool _started;	// 8 = 0x8
    id <AVAirMessageNotificationCenterDelegate> _delegate;	// 16 = 0x10
    AVBonjourService *_mainService;	// 24 = 0x18
    AVPlayerItem *_nowPlayingPlayerItem;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableSet *_activeChannels;	// 48 = 0x30
}

+ (id)shared;	// IMP=0x00000000000ba21d
+ (_Bool)isPrepared;	// IMP=0x00000000000ba20c
+ (void)prepare;	// IMP=0x00000000000ba1e8
+ (_Bool)_isNotificationCenterEnabled;	// IMP=0x00000000000ba152
- (void).cxx_destruct;	// IMP=0x00000000000ba019
@property(retain, nonatomic) NSMutableSet *activeChannels; // @synthesize activeChannels=_activeChannels;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) AVPlayerItem *nowPlayingPlayerItem; // @synthesize nowPlayingPlayerItem=_nowPlayingPlayerItem;
@property(readonly, nonatomic) AVBonjourService *mainService; // @synthesize mainService=_mainService;
@property(nonatomic) __weak id <AVAirMessageNotificationCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)airTransportInputDidClose:(id)arg1;	// IMP=0x00000000000b9e6f
- (void)airTransport:(id)arg1 didReceiveObject:(id)arg2;	// IMP=0x00000000000b9b70
- (void)bonjourService:(id)arg1 didCloseChannel:(id)arg2;	// IMP=0x00000000000b9a5d
- (id)bonjourServiceAdditionalTXTRecordInfo:(id)arg1;	// IMP=0x00000000000b997a
- (void)bonjourService:(id)arg1 didAcceptConnectionChannel:(id)arg2;	// IMP=0x00000000000b97f1
- (void)handleCommandMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b9655
- (id)playerItemForIdentifier:(id)arg1;	// IMP=0x00000000000b9596
- (void)stop;	// IMP=0x00000000000b93f8
- (void)start;	// IMP=0x00000000000b93e8
- (void)dealloc;	// IMP=0x00000000000b9391
- (id)_initPrivate;	// IMP=0x00000000000b9258
- (id)init;	// IMP=0x00000000000b9216

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

