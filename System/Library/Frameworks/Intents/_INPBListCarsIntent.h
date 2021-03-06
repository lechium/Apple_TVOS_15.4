//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBListCarsIntent-Protocol.h>

@class NSString, _INPBIntentMetadata;

@interface _INPBListCarsIntent : PBCodable <_INPBListCarsIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000041f5b1
- (void).cxx_destruct;	// IMP=0x000000000041f3f1
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x000000000041f345
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000041f1a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000041f124
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000041f092
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000041ef93
- (void)writeTo:(id)arg1;	// IMP=0x000000000041ef0c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000041eeff
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

