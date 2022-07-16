//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBNumericSettingValue-Protocol.h>

@class NSString;

@interface _INPBNumericSettingValue : PBCodable <_INPBNumericSettingValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int unit:1;
        unsigned int value:1;
    } _has;	// 8 = 0x8
    int _unit;	// 12 = 0xc
    double _value;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000467b1c
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) int unit; // @synthesize unit=_unit;
- (id)dictionaryRepresentation;	// IMP=0x00000000004677d2
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000046753b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000046749d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000046740b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000046730c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000467291
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000467284
@property(nonatomic) _Bool hasValue;
- (int)StringAsUnit:(id)arg1;	// IMP=0x0000000000467217
- (id)unitAsString:(int)arg1;	// IMP=0x00000000004671d2
@property(nonatomic) _Bool hasUnit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
