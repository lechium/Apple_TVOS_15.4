//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBFocusStatus-Protocol.h>

@class NSString;

@interface _INPBFocusStatus : PBCodable <_INPBFocusStatus, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int isFocused:1;
    } _has;	// 8 = 0x8
    _Bool _isFocused;	// 12 = 0xc
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004d79db
@property(nonatomic) _Bool isFocused; // @synthesize isFocused=_isFocused;
- (id)dictionaryRepresentation;	// IMP=0x00000000004d776f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d7662
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d75f1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004d755f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004d7460
- (void)writeTo:(id)arg1;	// IMP=0x00000000004d7411
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004d7404
@property(nonatomic) _Bool hasIsFocused;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

