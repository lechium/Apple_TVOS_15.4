//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBJSONDictionary-Protocol.h>

@class NSString;

@interface _INPBJSONDictionary : PBCodable <_INPBJSONDictionary, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSString *_jsonString;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004b06bb
- (void).cxx_destruct;	// IMP=0x00000000004b0537
@property(copy, nonatomic) NSString *jsonString; // @synthesize jsonString=_jsonString;
- (id)dictionaryRepresentation;	// IMP=0x00000000004b0482
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b02e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b0261
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004b01cf
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004b00d0
- (void)writeTo:(id)arg1;	// IMP=0x00000000004b0063
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004b0056
@property(readonly, nonatomic) _Bool hasJsonString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

