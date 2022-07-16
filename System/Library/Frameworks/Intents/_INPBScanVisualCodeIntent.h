//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBScanVisualCodeIntent-Protocol.h>

@class NSString, _INPBIntentMetadata;

@interface _INPBScanVisualCodeIntent : PBCodable <_INPBScanVisualCodeIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001823db
- (void).cxx_destruct;	// IMP=0x000000000018221b
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x000000000018216f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000181fd0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000181f4e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000181ebc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000181dbd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000181d36
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000181d29
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
