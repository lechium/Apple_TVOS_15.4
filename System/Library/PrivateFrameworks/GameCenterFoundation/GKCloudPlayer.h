//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/NSCopying-Protocol.h>
#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface GKCloudPlayer <NSSecureCoding, NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000cabb8
+ (void)getCurrentSignedInPlayerForContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cab0e
- (void).cxx_destruct;	// IMP=0x00000000000cb022
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)displayName;	// IMP=0x00000000000cafc3
- (id)playerID;	// IMP=0x00000000000cafae
- (id)description;	// IMP=0x00000000000caeda
- (unsigned long long)hash;	// IMP=0x00000000000cae96
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cadd0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cad69
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cacbb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cabc0

@end

