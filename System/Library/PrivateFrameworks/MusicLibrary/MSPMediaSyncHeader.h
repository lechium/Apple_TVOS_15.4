//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@interface MSPMediaSyncHeader : PBCodable <NSCopying>
{
    int _syncType;	// 8 = 0x8
    int _totalPackages;	// 12 = 0xc
    struct {
        unsigned int syncType:1;
        unsigned int totalPackages:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) int totalPackages; // @synthesize totalPackages=_totalPackages;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000104ea4
- (unsigned long long)hash;	// IMP=0x0000000000104e5e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000104dab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000104d2e
- (void)copyTo:(id)arg1;	// IMP=0x0000000000104cd4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000104c63
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000104c56
- (id)dictionaryRepresentation;	// IMP=0x0000000000104b3b
- (id)description;	// IMP=0x0000000000104a8c
- (int)StringAsSyncType:(id)arg1;	// IMP=0x0000000000104a25
- (id)syncTypeAsString:(int)arg1;	// IMP=0x00000000001049cf
@property(nonatomic) _Bool hasSyncType;
@property(nonatomic) int syncType; // @synthesize syncType=_syncType;
@property(nonatomic) _Bool hasTotalPackages;

@end

