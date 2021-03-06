//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentResponsePayloadSuccess-Protocol.h>

@class NSData, NSString;

@interface _INPBIntentResponsePayloadSuccess : PBCodable <_INPBIntentResponsePayloadSuccess, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int shouldOpenContainingApplication:1;
    } _has;	// 8 = 0x8
    _Bool _shouldOpenContainingApplication;	// 12 = 0xc
    NSData *_responseMessageData;	// 16 = 0x10
    NSString *_responseTypeName;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007e0de
- (void).cxx_destruct;	// IMP=0x000000000007de73
@property(nonatomic) _Bool shouldOpenContainingApplication; // @synthesize shouldOpenContainingApplication=_shouldOpenContainingApplication;
@property(copy, nonatomic) NSString *responseTypeName; // @synthesize responseTypeName=_responseTypeName;
@property(copy, nonatomic) NSData *responseMessageData; // @synthesize responseMessageData=_responseMessageData;
- (id)dictionaryRepresentation;	// IMP=0x000000000007dcc3
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007d930
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007d83e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007d7ac
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007d6ad
- (void)writeTo:(id)arg1;	// IMP=0x000000000007d5d2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007d5c5
@property(nonatomic) _Bool hasShouldOpenContainingApplication;
@property(readonly, nonatomic) _Bool hasResponseTypeName;
@property(readonly, nonatomic) _Bool hasResponseMessageData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

