//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFCharacteristicValueManager, HMCameraProfile, HMCameraStream;

@interface HFCameraAudioManager : NSObject
{
    HMCameraProfile *_cameraProfile;	// 8 = 0x8
    HMCameraStream *_cameraStream;	// 16 = 0x10
    HFCharacteristicValueManager *_valueManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003fdfe
@property(retain, nonatomic) HFCharacteristicValueManager *valueManager; // @synthesize valueManager=_valueManager;
@property(retain, nonatomic) HMCameraStream *cameraStream; // @synthesize cameraStream=_cameraStream;
@property(retain, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
- (id)_writeValuesForCharacteristics:(id)arg1;	// IMP=0x000000000003fc99
- (id)_readValuesForCharacteristics:(id)arg1;	// IMP=0x000000000003fb85
- (id)_enableAudioIfNecessaryForAudioControl:(id)arg1 minVolume:(float)arg2;	// IMP=0x000000000003f612
- (id)enableRemoteMicrophoneIfNecessary;	// IMP=0x000000000003f58a
- (id)enableRemoteSpeakerIfNecessary;	// IMP=0x000000000003f502
- (id)updateAudioStreamSetting:(unsigned long long)arg1;	// IMP=0x000000000003edbc
- (id)setIncomingAudioVolume:(float)arg1;	// IMP=0x000000000003eb47
- (id)setIncomingAudioEnabled:(_Bool)arg1;	// IMP=0x000000000003ead4
- (id)setOutgoingAudioEnabled:(_Bool)arg1;	// IMP=0x000000000003ea62
@property(readonly, nonatomic) float incomingAudioVolume;
@property(readonly, nonatomic, getter=isIncomingAudioEnabled) _Bool incomingAudioEnabled;
@property(readonly, nonatomic, getter=isOutgoingAudioEnabled) _Bool outgoingAudioEnabled;
@property(readonly, nonatomic) unsigned long long audioStreamSetting;
- (id)initWithCameraProfile:(id)arg1 cameraStream:(id)arg2 valueManager:(id)arg3;	// IMP=0x000000000003e8b0

@end
