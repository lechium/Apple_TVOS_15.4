//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBUserActivityMetadataTopic : PBCodable <NSCopying>
{
    NSString *_title;	// 8 = 0x8
    NSString *_topicIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006ff8a
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *topicIdentifier; // @synthesize topicIdentifier=_topicIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006fedd
- (unsigned long long)hash;	// IMP=0x000000000006fe90
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006fdc8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006fd2a
- (void)copyTo:(id)arg1;	// IMP=0x000000000006fcc7
- (void)writeTo:(id)arg1;	// IMP=0x000000000006fc6a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006fc5d
- (id)dictionaryRepresentation;	// IMP=0x000000000006fa46
- (id)description;	// IMP=0x000000000006f997
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasTopicIdentifier;

@end

