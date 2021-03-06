//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSString;

@interface WFPBBrowseGalleryCategoryEvent : PBCodable <NSCopying>
{
    NSString *_galleryCategoryIdentifier;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001fb7f3
@property(retain, nonatomic) NSString *galleryCategoryIdentifier; // @synthesize galleryCategoryIdentifier=_galleryCategoryIdentifier;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001fb757
- (unsigned long long)hash;	// IMP=0x00000000001fb70a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fb642
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001fb5a4
- (void)copyTo:(id)arg1;	// IMP=0x00000000001fb541
- (void)writeTo:(id)arg1;	// IMP=0x00000000001fb4e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001fb4d7
- (id)dictionaryRepresentation;	// IMP=0x00000000001fb454
- (id)description;	// IMP=0x00000000001fb3a5
@property(readonly, nonatomic) _Bool hasGalleryCategoryIdentifier;
@property(readonly, nonatomic) _Bool hasKey;

@end

