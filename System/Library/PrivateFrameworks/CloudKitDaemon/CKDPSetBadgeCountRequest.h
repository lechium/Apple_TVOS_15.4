//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@interface CKDPSetBadgeCountRequest : PBRequest <NSCopying>
{
    unsigned int _badgeCount;	// 8 = 0x8
    _Bool _forDevice;	// 12 = 0xc
    struct {
        unsigned int badgeCount:1;
        unsigned int forDevice:1;
    } _has;	// 16 = 0x10
}

+ (id)options;	// IMP=0x000000000008b18d
@property(nonatomic) _Bool forDevice; // @synthesize forDevice=_forDevice;
@property(nonatomic) unsigned int badgeCount; // @synthesize badgeCount=_badgeCount;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000008b90f
- (unsigned long long)hash;	// IMP=0x000000000008b8ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008b807
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008b78a
- (void)copyTo:(id)arg1;	// IMP=0x000000000008b730
- (Class)responseClass;	// IMP=0x000000000008b71f
- (unsigned int)requestTypeCode;	// IMP=0x000000000008b714
- (void)writeTo:(id)arg1;	// IMP=0x000000000008b6a2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008b695
- (id)dictionaryRepresentation;	// IMP=0x000000000008b31a
- (id)description;	// IMP=0x000000000008b26b
@property(nonatomic) _Bool hasForDevice;
@property(nonatomic) _Bool hasBadgeCount;

@end

