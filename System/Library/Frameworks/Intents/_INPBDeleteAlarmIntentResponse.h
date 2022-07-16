//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDeleteAlarmIntentResponse-Protocol.h>

@class NSString;

@interface _INPBDeleteAlarmIntentResponse : PBCodable <_INPBDeleteAlarmIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004a3675
- (id)dictionaryRepresentation;	// IMP=0x00000000004a3557
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004a350a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004a34d8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004a3446
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004a3347
- (void)writeTo:(id)arg1;	// IMP=0x00000000004a3341
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004a3334

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

