//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDeleteFilePermanentlyIntentResponse-Protocol.h>

@class NSString;

@interface _INPBDeleteFilePermanentlyIntentResponse : PBCodable <_INPBDeleteFilePermanentlyIntentResponse, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int confirm:1;
        unsigned int success:1;
    } _has;	// 8 = 0x8
    _Bool _confirm;	// 12 = 0xc
    _Bool _success;	// 13 = 0xd
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000014bab3
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool confirm; // @synthesize confirm=_confirm;
- (id)dictionaryRepresentation;	// IMP=0x000000000014b748
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014b5a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014b502
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000014b470
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000014b371
- (void)writeTo:(id)arg1;	// IMP=0x000000000014b2f6
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000014b2e9
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasConfirm;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

