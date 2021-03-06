//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBConnectedCall-Protocol.h>

@class NSString;

@interface _INPBConnectedCall : PBCodable <_INPBConnectedCall, NSSecureCoding, NSCopying>
{
    CDStruct_fbf2c6cd _has;	// 8 = 0x8
    int _audioRoute;	// 12 = 0xc
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000048e4af
@property(nonatomic) int audioRoute; // @synthesize audioRoute=_audioRoute;
- (id)dictionaryRepresentation;	// IMP=0x000000000048e20c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000048e0ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000048e08f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000048dffd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000048defe
- (void)writeTo:(id)arg1;	// IMP=0x000000000048deb0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000048dea3
- (int)StringAsAudioRoute:(id)arg1;	// IMP=0x000000000048de05
- (id)audioRouteAsString:(int)arg1;	// IMP=0x000000000048dd9e
@property(nonatomic) _Bool hasAudioRoute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

