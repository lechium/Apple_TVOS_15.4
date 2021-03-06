//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCreateNoteIntentResponse-Protocol.h>

@class NSString, _INPBNote;

@interface _INPBCreateNoteIntentResponse : PBCodable <_INPBCreateNoteIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBNote *_createdNote;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000209d99
- (void).cxx_destruct;	// IMP=0x0000000000209bd9
@property(retain, nonatomic) _INPBNote *createdNote; // @synthesize createdNote=_createdNote;
- (id)dictionaryRepresentation;	// IMP=0x0000000000209b2d
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020998e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020990c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000020987a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000020977b
- (void)writeTo:(id)arg1;	// IMP=0x00000000002096f4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002096e7
@property(readonly, nonatomic) _Bool hasCreatedNote;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

