//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveEventTracker/NSCopying-Protocol.h>

@class NSString;

@interface PET1Key : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000b79f
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000b756
- (unsigned long long)hash;	// IMP=0x000000000000b739
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b69f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b627
- (void)copyTo:(id)arg1;	// IMP=0x000000000000b5fd
- (void)writeTo:(id)arg1;	// IMP=0x000000000000b5d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000b5cc
- (id)dictionaryRepresentation;	// IMP=0x000000000000b570
- (id)description;	// IMP=0x000000000000b4c1
@property(readonly, nonatomic) _Bool hasKey;

@end

