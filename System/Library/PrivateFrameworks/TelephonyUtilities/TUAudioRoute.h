//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface TUAudioRoute
{
    NSString *_avAudioRouteName;	// 8 = 0x8
    NSDictionary *_route;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005471e
- (void).cxx_destruct;	// IMP=0x000000000005656d
@property(readonly, copy, nonatomic) NSDictionary *route; // @synthesize route=_route;
@property(readonly, copy, nonatomic) NSString *avAudioRouteName; // @synthesize avAudioRouteName=_avAudioRouteName;
- (id)identifiersOfOtherConnectedDevices;	// IMP=0x00000000000561ef
- (_Bool)_routeTypeEqualTo:(id)arg1;	// IMP=0x00000000000560ad
@property(readonly, nonatomic, getter=isHeadphoneJackConnected) _Bool headphoneJackConnected;
@property(readonly, copy, nonatomic) NSString *bluetoothProductIdentifier;
- (long long)deviceType;	// IMP=0x0000000000055c63
- (_Bool)supportsSharePlay;	// IMP=0x0000000000055ba5
- (_Bool)supportsHighQualityVoiceWithMedia;	// IMP=0x0000000000055b9d
- (_Bool)isSiblingRoutePresent;	// IMP=0x0000000000055b95
- (_Bool)isPartnerRoutePresent;	// IMP=0x0000000000055b8d
- (_Bool)isPreferredAndActive;	// IMP=0x0000000000055a62
- (_Bool)isPreferred;	// IMP=0x0000000000055937
- (_Bool)isDefaultRoute;	// IMP=0x0000000000055856
- (_Bool)isWirelessHeadset;	// IMP=0x000000000005574d
- (_Bool)isWiredHeadset;	// IMP=0x00000000000555ac
- (_Bool)isWiredHeadphones;	// IMP=0x0000000000055532
- (_Bool)isInEarDetectionSupported;	// IMP=0x00000000000553eb
- (_Bool)isInEarDetectionEnabled;	// IMP=0x00000000000552a4
- (_Bool)isA2DPRoute;	// IMP=0x000000000005528f
- (long long)bluetoothEndpointType;	// IMP=0x0000000000054e14
- (_Bool)isBluetoothManaged;	// IMP=0x0000000000054ce9
- (_Bool)isBluetooth;	// IMP=0x0000000000054bb1
- (_Bool)isBluetoothLE;	// IMP=0x0000000000054b66
- (_Bool)isCarAudio;	// IMP=0x0000000000054b1b
- (_Bool)isAirTunes;	// IMP=0x0000000000054ad0
- (_Bool)isSpeaker;	// IMP=0x0000000000054a85
- (_Bool)isReceiver;	// IMP=0x0000000000054a3a
- (_Bool)isHandset;	// IMP=0x00000000000549eb
- (_Bool)isCurrentlyPicked;	// IMP=0x00000000000548c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000054851
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000054726
- (id)customDescription;	// IMP=0x000000000005460d
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000542aa

@end

