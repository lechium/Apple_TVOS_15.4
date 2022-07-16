//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetLabeledSettingIntentResponse-Protocol.h>

@class NSString;

@interface _INPBSetLabeledSettingIntentResponse : PBCodable <_INPBSetLabeledSettingIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSString *_errorDetail;	// 8 = 0x8
    NSString *_oldValue;	// 16 = 0x10
    NSString *_updatedValue;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000458ad3
- (void).cxx_destruct;	// IMP=0x00000000004588be
@property(copy, nonatomic) NSString *updatedValue; // @synthesize updatedValue=_updatedValue;
@property(copy, nonatomic) NSString *oldValue; // @synthesize oldValue=_oldValue;
@property(copy, nonatomic) NSString *errorDetail; // @synthesize errorDetail=_errorDetail;
- (id)dictionaryRepresentation;	// IMP=0x0000000000458710
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004582b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004581ca
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000458138
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000458039
- (void)writeTo:(id)arg1;	// IMP=0x0000000000457f4a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000457f3d
@property(readonly, nonatomic) _Bool hasUpdatedValue;
@property(readonly, nonatomic) _Bool hasOldValue;
@property(readonly, nonatomic) _Bool hasErrorDetail;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

