//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCallMetrics-Protocol.h>

@class NSString, _INPBCallMetricsValue;

@interface _INPBCallMetrics : PBCodable <_INPBCallMetrics, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBCallMetricsValue *_value;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000033e129
- (void).cxx_destruct;	// IMP=0x000000000033df69
@property(retain, nonatomic) _INPBCallMetricsValue *value; // @synthesize value=_value;
- (id)dictionaryRepresentation;	// IMP=0x000000000033debd
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000033dd1e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000033dc9c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000033dc0a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000033db0b
- (void)writeTo:(id)arg1;	// IMP=0x000000000033da84
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000033da77
@property(readonly, nonatomic) _Bool hasValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

