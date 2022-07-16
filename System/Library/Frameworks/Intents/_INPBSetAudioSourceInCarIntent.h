//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetAudioSourceInCarIntent-Protocol.h>

@class NSString, _INPBIntentMetadata;

@interface _INPBSetAudioSourceInCarIntent : PBCodable <_INPBSetAudioSourceInCarIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int audioSource:1;
        unsigned int relativeAudioSourceReference:1;
    } _has;	// 8 = 0x8
    int _audioSource;	// 12 = 0xc
    int _relativeAudioSourceReference;	// 16 = 0x10
    _INPBIntentMetadata *_intentMetadata;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000169521
- (void).cxx_destruct;	// IMP=0x0000000000169245
@property(nonatomic) int relativeAudioSourceReference; // @synthesize relativeAudioSourceReference=_relativeAudioSourceReference;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) int audioSource; // @synthesize audioSource=_audioSource;
- (id)dictionaryRepresentation;	// IMP=0x0000000000168fd7
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000168cee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000168c12
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000168b80
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000168a81
- (void)writeTo:(id)arg1;	// IMP=0x00000000001689a2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000168995
- (int)StringAsRelativeAudioSourceReference:(id)arg1;	// IMP=0x000000000016892e
- (id)relativeAudioSourceReferenceAsString:(int)arg1;	// IMP=0x00000000001688d8
@property(nonatomic) _Bool hasRelativeAudioSourceReference;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (int)StringAsAudioSource:(id)arg1;	// IMP=0x00000000001686f8
- (id)audioSourceAsString:(int)arg1;	// IMP=0x0000000000168636
@property(nonatomic) _Bool hasAudioSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

