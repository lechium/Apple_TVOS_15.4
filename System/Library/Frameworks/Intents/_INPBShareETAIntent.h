//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBShareETAIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBShareETAIntent : PBCodable <_INPBShareETAIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 8 = 0x8
    NSArray *_recipients;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000438deb
+ (Class)recipientType;	// IMP=0x0000000000438dda
- (void).cxx_destruct;	// IMP=0x0000000000438b93
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x00000000004388fc
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004385f2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000438533
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004384a1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004383a2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000438217
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000043820a
- (id)recipientAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004381ed
@property(readonly, nonatomic) unsigned long long recipientsCount;
- (void)addRecipient:(id)arg1;	// IMP=0x0000000000438156
- (void)clearRecipients;	// IMP=0x0000000000438139
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

