//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBStartWorkoutIntentResponse-Protocol.h>

@class NSString;

@interface _INPBStartWorkoutIntentResponse : PBCodable <_INPBStartWorkoutIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ec842
- (id)dictionaryRepresentation;	// IMP=0x00000000000ec724
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ec6d7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ec6a5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ec613
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ec514
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ec50e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ec501

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
