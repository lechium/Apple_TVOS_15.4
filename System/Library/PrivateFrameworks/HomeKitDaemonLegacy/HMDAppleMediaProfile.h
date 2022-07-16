//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/MPRequestResponseControllerDelegate-Protocol.h>

@class HMDAppleMediaAccessory, HMDMediaSystem, MPRequestResponseController, NSString;

@interface HMDAppleMediaProfile <MPRequestResponseControllerDelegate>
{
    HMDMediaSystem *_mediaSystem;	// 16 = 0x10
    MPRequestResponseController *_controller;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000434945
@property(readonly) MPRequestResponseController *controller; // @synthesize controller=_controller;
- (void)didFinishLoadingRequestForController:(id)arg1;	// IMP=0x0000000000434221
- (void)sessionAudioControlUpdated:(id)arg1;	// IMP=0x00000000004340eb
- (void)_handleSetPower:(id)arg1;	// IMP=0x00000000004340e5
- (void)_handleSetValue:(id)arg1 withRequestProperty:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000433930
- (_Bool)_updateRefreshPlayback:(id)arg1;	// IMP=0x00000000004334a0
- (_Bool)_updatePlayback:(id)arg1;	// IMP=0x0000000000433162
- (void)setMediaSession:(id)arg1;	// IMP=0x000000000043303f
@property(nonatomic) __weak HMDMediaSystem *mediaSystem; // @synthesize mediaSystem=_mediaSystem;
@property(readonly) __weak HMDAppleMediaAccessory *mediaAccessory;
- (void)registerForMessages;	// IMP=0x0000000000432b8f
- (void)configureWithMessageDispatcher:(id)arg1 configurationTracker:(id)arg2;	// IMP=0x0000000000432aa6
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 workQueue:(id)arg4;	// IMP=0x0000000000432968

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

