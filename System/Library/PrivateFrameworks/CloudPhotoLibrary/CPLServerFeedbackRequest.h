//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CPLServerFeedbackRequest : PBRequest <NSCopying>
{
    NSMutableArray *_messages;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000014b4ec
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000014b392
- (unsigned long long)hash;	// IMP=0x000000000014b375
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014b2db
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014b118
- (void)copyTo:(id)arg1;	// IMP=0x000000000014b051
- (void)writeTo:(id)arg1;	// IMP=0x000000000014af21
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000014af14
- (id)dictionaryRepresentation;	// IMP=0x000000000014ace1
- (id)description;	// IMP=0x000000000014ac32
- (id)messagesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000014ac15
- (unsigned long long)messagesCount;	// IMP=0x000000000014abf8
- (void)addMessages:(id)arg1;	// IMP=0x000000000014ab8e
- (void)clearMessages;	// IMP=0x000000000014ab71

@end
