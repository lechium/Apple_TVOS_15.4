//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface XDCProgress : PBCodable
{
    long long _completedUnitCount;	// 8 = 0x8
    long long _totalUnitCount;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000e01f8
@property(nonatomic) long long totalUnitCount; // @synthesize totalUnitCount=_totalUnitCount;
@property(nonatomic) long long completedUnitCount; // @synthesize completedUnitCount=_completedUnitCount;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000e012e
- (unsigned long long)hash;	// IMP=0x00100000000e00e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000e0028
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000dff92
- (void)writeTo:(id)arg1;	// IMP=0x00100000000dff1b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000dff0e
- (id)dictionaryRepresentation;	// IMP=0x00100000000dfb77
- (id)description;	// IMP=0x00100000000dfac8

@end

