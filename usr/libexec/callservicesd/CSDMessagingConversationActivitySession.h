//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingConversationActivity, NSString;

@interface CSDMessagingConversationActivitySession : PBCodable
{
    double _creationDateEpochTime;	// 8 = 0x8
    CSDMessagingConversationActivity *_activity;	// 16 = 0x10
    NSString *_identifierUUIDString;	// 24 = 0x18
    struct {
        unsigned int creationDateEpochTime:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000a823b
@property(nonatomic) double creationDateEpochTime; // @synthesize creationDateEpochTime=_creationDateEpochTime;
@property(retain, nonatomic) CSDMessagingConversationActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSString *identifierUUIDString; // @synthesize identifierUUIDString=_identifierUUIDString;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000a8141
- (unsigned long long)hash;	// IMP=0x00100000000a7fde
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a7ee3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a7e21
- (void)copyTo:(id)arg1;	// IMP=0x00100000000a7d9a
- (void)writeTo:(id)arg1;	// IMP=0x00100000000a7d17
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000a7d0a
- (id)dictionaryRepresentation;	// IMP=0x00100000000a799e
- (id)description;	// IMP=0x00100000000a78ef
@property(nonatomic) _Bool hasCreationDateEpochTime;
@property(readonly, nonatomic) _Bool hasActivity;
@property(readonly, nonatomic) _Bool hasIdentifierUUIDString;

@end
