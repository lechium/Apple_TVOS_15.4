//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKCloudPlayer
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000031f0
+ (void)getCurrentSignedInPlayerForContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003132
+ (id)playerWithRecordID:(id)arg1;	// IMP=0x001000000008fd03
+ (id)playerWithIdentity:(id)arg1;	// IMP=0x001000000008fca1
- (void).cxx_destruct;	// IMP=0x002000000000365a
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)displayName;	// IMP=0x00100000000035fb
- (id)playerID;	// IMP=0x00100000000035e6
- (id)description;	// IMP=0x0010000000003512
- (unsigned long long)hash;	// IMP=0x00100000000034ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000003408
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000033a1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000032f3
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000031f8

@end
