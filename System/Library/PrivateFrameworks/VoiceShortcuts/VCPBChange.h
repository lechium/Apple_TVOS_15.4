//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VoiceShortcuts/NSCopying-Protocol.h>

@class NSData, NSString;

@interface VCPBChange : PBCodable <NSCopying>
{
    int _changeType;	// 8 = 0x8
    NSData *_message;	// 16 = 0x10
    int _messageType;	// 24 = 0x18
    NSString *_uniqueID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003da6b
@property(retain, nonatomic) NSData *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003d962
- (unsigned long long)hash;	// IMP=0x000000000003d8e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003d7f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d73f
- (void)copyTo:(id)arg1;	// IMP=0x000000000003d6b4
- (void)writeTo:(id)arg1;	// IMP=0x000000000003d5e9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003d5dc
- (id)dictionaryRepresentation;	// IMP=0x000000000003d45a
- (id)description;	// IMP=0x000000000003d3ab
- (int)StringAsChangeType:(id)arg1;	// IMP=0x000000000003d30e
- (id)changeTypeAsString:(int)arg1;	// IMP=0x000000000003d2a7
- (int)StringAsMessageType:(id)arg1;	// IMP=0x000000000003d20a
- (id)messageTypeAsString:(int)arg1;	// IMP=0x000000000003d1a3

@end
