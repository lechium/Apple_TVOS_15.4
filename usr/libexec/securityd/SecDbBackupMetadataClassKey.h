//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface SecDbBackupMetadataClassKey : PBCodable
{
    NSData *_backupWrappedMetadataKey;	// 8 = 0x8
    int _keyClass;	// 16 = 0x10
    struct {
        unsigned int keyClass:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x002000000006afcd
@property(retain, nonatomic) NSData *backupWrappedMetadataKey; // @synthesize backupWrappedMetadataKey=_backupWrappedMetadataKey;
@property(nonatomic) int keyClass; // @synthesize keyClass=_keyClass;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006af35
- (unsigned long long)hash;	// IMP=0x001000000006aee8
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006ae23
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006ad93
- (void)copyTo:(id)arg1;	// IMP=0x001000000006ad30
- (void)writeTo:(id)arg1;	// IMP=0x001000000006accc
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006aaca
- (id)dictionaryRepresentation;	// IMP=0x001000000006aa0c
- (id)description;	// IMP=0x001000000006a95d
@property(readonly, nonatomic) _Bool hasBackupWrappedMetadataKey;
@property(nonatomic) _Bool hasKeyClass;

@end
