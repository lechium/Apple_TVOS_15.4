//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetMessageAttributeIntentResponse-Protocol.h>

@class NSString;

@interface _INPBSetMessageAttributeIntentResponse : PBCodable <_INPBSetMessageAttributeIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000204ae1
- (id)dictionaryRepresentation;	// IMP=0x00000000002049c3
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000204976
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000204944
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002048b2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002047b3
- (void)writeTo:(id)arg1;	// IMP=0x00000000002047ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002047a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

