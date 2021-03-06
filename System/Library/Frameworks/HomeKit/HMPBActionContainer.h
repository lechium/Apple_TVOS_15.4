//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class HMPBCharacteristicWriteAction, HMPBMediaPlaybackAction, HMPBNaturalLightingAction;

@interface HMPBActionContainer : PBCodable <NSCopying>
{
    HMPBCharacteristicWriteAction *_characteristicWriteAction;	// 8 = 0x8
    HMPBMediaPlaybackAction *_mediaPlaybackAction;	// 16 = 0x10
    HMPBNaturalLightingAction *_naturalLightingAction;	// 24 = 0x18
    int _type;	// 32 = 0x20
    struct {
        unsigned int type:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000250357
@property(retain, nonatomic) HMPBNaturalLightingAction *naturalLightingAction; // @synthesize naturalLightingAction=_naturalLightingAction;
@property(retain, nonatomic) HMPBMediaPlaybackAction *mediaPlaybackAction; // @synthesize mediaPlaybackAction=_mediaPlaybackAction;
@property(retain, nonatomic) HMPBCharacteristicWriteAction *characteristicWriteAction; // @synthesize characteristicWriteAction=_characteristicWriteAction;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000250200
- (unsigned long long)hash;	// IMP=0x0000000000250169
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000250039
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024ff52
- (void)copyTo:(id)arg1;	// IMP=0x000000000024feaf
- (void)writeTo:(id)arg1;	// IMP=0x000000000024fe11
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000024fe04
- (id)dictionaryRepresentation;	// IMP=0x000000000024fc51
- (id)description;	// IMP=0x000000000024fba2
@property(readonly, nonatomic) _Bool hasNaturalLightingAction;
@property(readonly, nonatomic) _Bool hasMediaPlaybackAction;
@property(readonly, nonatomic) _Bool hasCharacteristicWriteAction;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000024fac6
- (id)typeAsString:(int)arg1;	// IMP=0x000000000024fa5f
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

