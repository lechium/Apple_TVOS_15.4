//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSMutableArray;

@interface ICIAMSynchronizeMessagesResponse : PBCodable <NSCopying>
{
    NSMutableArray *_applicationMessageSyncResponses;	// 8 = 0x8
}

+ (Class)applicationMessageSyncResponsesType;	// IMP=0x0000000000099bb1
- (void).cxx_destruct;	// IMP=0x00000000000999f5
@property(retain, nonatomic) NSMutableArray *applicationMessageSyncResponses; // @synthesize applicationMessageSyncResponses=_applicationMessageSyncResponses;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000009989b
- (unsigned long long)hash;	// IMP=0x000000000009987e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000997e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000099621
- (void)copyTo:(id)arg1;	// IMP=0x000000000009955a
- (void)writeTo:(id)arg1;	// IMP=0x000000000009942a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000009941d
- (id)dictionaryRepresentation;	// IMP=0x00000000000991ea
- (id)description;	// IMP=0x000000000009913b
- (id)applicationMessageSyncResponsesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000009911e
- (unsigned long long)applicationMessageSyncResponsesCount;	// IMP=0x0000000000099101
- (void)addApplicationMessageSyncResponses:(id)arg1;	// IMP=0x0000000000099097
- (void)clearApplicationMessageSyncResponses;	// IMP=0x000000000009907a

@end

