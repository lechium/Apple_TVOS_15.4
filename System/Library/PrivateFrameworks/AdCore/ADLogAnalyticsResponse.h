//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@interface ADLogAnalyticsResponse : PBCodable <NSCopying>
{
}

+ (id)options;	// IMP=0x000000000001ee7d
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001f139
- (unsigned long long)hash;	// IMP=0x000000000001f131
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f0ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f0b3
- (void)copyTo:(id)arg1;	// IMP=0x000000000001f0ad
- (void)writeTo:(id)arg1;	// IMP=0x000000000001f0a7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001f09a
- (id)dictionaryRepresentation;	// IMP=0x000000000001ef7c
- (id)description;	// IMP=0x000000000001eecd

@end
