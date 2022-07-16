//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMsgStateMapSettings : PBCodable <NSCopying>
{
    NSMutableArray *_navVoiceSettings;	// 8 = 0x8
    int _locationType;	// 16 = 0x10
    int _navVoiceVolume;	// 20 = 0x14
    int _preferredTransportMode;	// 24 = 0x18
    _Bool _hFPEnabled;	// 28 = 0x1c
    _Bool _avoidBusyRoads;	// 29 = 0x1d
    _Bool _avoidHighways;	// 30 = 0x1e
    _Bool _avoidHills;	// 31 = 0x1f
    _Bool _avoidStairs;	// 32 = 0x20
    _Bool _avoidTolls;	// 33 = 0x21
    _Bool _eBike;	// 34 = 0x22
    _Bool _findMyCarEnabled;	// 35 = 0x23
    _Bool _headingEnabled;	// 36 = 0x24
    _Bool _labelEnabled;	// 37 = 0x25
    _Bool _pauseSpokenAudioEnabled;	// 38 = 0x26
    _Bool _speedLimitEnabled;	// 39 = 0x27
    _Bool _trafficEnabled;	// 40 = 0x28
    struct {
        unsigned int has_locationType:1;
        unsigned int has_navVoiceVolume:1;
        unsigned int has_preferredTransportMode:1;
        unsigned int has_hFPEnabled:1;
        unsigned int has_avoidBusyRoads:1;
        unsigned int has_avoidHighways:1;
        unsigned int has_avoidHills:1;
        unsigned int has_avoidStairs:1;
        unsigned int has_avoidTolls:1;
        unsigned int has_eBike:1;
        unsigned int has_findMyCarEnabled:1;
        unsigned int has_headingEnabled:1;
        unsigned int has_labelEnabled:1;
        unsigned int has_pauseSpokenAudioEnabled:1;
        unsigned int has_speedLimitEnabled:1;
        unsigned int has_trafficEnabled:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001466f3b
+ (Class)navVoiceSettingsType;	// IMP=0x00000000014655b4
- (void).cxx_destruct;	// IMP=0x00000000014685f9
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001468263
- (unsigned long long)hash;	// IMP=0x0000000001467fdc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001467b8e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000146777d
- (void)copyTo:(id)arg1;	// IMP=0x00000000014674d0
- (void)writeTo:(id)arg1;	// IMP=0x0000000001467167
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001467158
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001466e83
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001466e71
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000014661c3
- (id)jsonRepresentation;	// IMP=0x00000000014661b4
- (id)dictionaryRepresentation;	// IMP=0x00000000014656ce
- (id)description;	// IMP=0x000000000146561f
@property(nonatomic) _Bool hasHFPEnabled;
@property(nonatomic) _Bool hFPEnabled;
- (id)navVoiceSettingsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001465597
- (unsigned long long)navVoiceSettingsCount;	// IMP=0x000000000146557a
- (void)addNavVoiceSettings:(id)arg1;	// IMP=0x0000000001465510
- (void)clearNavVoiceSettings;	// IMP=0x00000000014654f3
@property(retain, nonatomic) NSMutableArray *navVoiceSettings;
@property(nonatomic) _Bool hasEBike;
@property(nonatomic) _Bool eBike;
- (int)StringAsLocationType:(id)arg1;	// IMP=0x00000000014653bc
- (id)locationTypeAsString:(int)arg1;	// IMP=0x000000000146533c
@property(nonatomic) _Bool hasLocationType;
@property(nonatomic) int locationType;
@property(nonatomic) _Bool hasAvoidBusyRoads;
@property(nonatomic) _Bool avoidBusyRoads;
@property(nonatomic) _Bool hasAvoidStairs;
@property(nonatomic) _Bool avoidStairs;
@property(nonatomic) _Bool hasAvoidHills;
@property(nonatomic) _Bool avoidHills;
@property(nonatomic) _Bool hasLabelEnabled;
@property(nonatomic) _Bool labelEnabled;
@property(nonatomic) _Bool hasTrafficEnabled;
@property(nonatomic) _Bool trafficEnabled;
@property(nonatomic) _Bool hasFindMyCarEnabled;
@property(nonatomic) _Bool findMyCarEnabled;
@property(nonatomic) _Bool hasPauseSpokenAudioEnabled;
@property(nonatomic) _Bool pauseSpokenAudioEnabled;
- (int)StringAsNavVoiceVolume:(id)arg1;	// IMP=0x0000000001464f78
- (id)navVoiceVolumeAsString:(int)arg1;	// IMP=0x0000000001464eec
@property(nonatomic) _Bool hasNavVoiceVolume;
@property(nonatomic) int navVoiceVolume;
@property(nonatomic) _Bool hasSpeedLimitEnabled;
@property(nonatomic) _Bool speedLimitEnabled;
@property(nonatomic) _Bool hasHeadingEnabled;
@property(nonatomic) _Bool headingEnabled;
@property(nonatomic) _Bool hasAvoidHighways;
@property(nonatomic) _Bool avoidHighways;
@property(nonatomic) _Bool hasAvoidTolls;
@property(nonatomic) _Bool avoidTolls;
- (int)StringAsPreferredTransportMode:(id)arg1;	// IMP=0x0000000001464c1c
- (id)preferredTransportModeAsString:(int)arg1;	// IMP=0x0000000001464b83
@property(nonatomic) _Bool hasPreferredTransportMode;
@property(nonatomic) int preferredTransportMode;

@end
