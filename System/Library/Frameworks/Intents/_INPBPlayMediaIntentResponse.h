//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPlayMediaIntentResponse-Protocol.h>

@class NSString, _INPBDictionary;

@interface _INPBPlayMediaIntentResponse : PBCodable <_INPBPlayMediaIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBDictionary *_nowPlayingInfo;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001ad6b1
- (void).cxx_destruct;	// IMP=0x00000000001ad4f1
@property(retain, nonatomic) _INPBDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
- (id)dictionaryRepresentation;	// IMP=0x00000000001ad445
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ad2a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ad224
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ad192
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ad093
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ad00c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001acfff
@property(readonly, nonatomic) _Bool hasNowPlayingInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

