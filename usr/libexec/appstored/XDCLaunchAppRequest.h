//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface XDCLaunchAppRequest : PBRequest
{
    NSString *_bundleID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000af09c
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000af053
- (unsigned long long)hash;	// IMP=0x00100000000af036
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000aef9c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000aef24
- (void)writeTo:(id)arg1;	// IMP=0x00100000000aef07
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000aed92
- (id)dictionaryRepresentation;	// IMP=0x00100000000aed36
- (id)description;	// IMP=0x00100000000aec87

@end

