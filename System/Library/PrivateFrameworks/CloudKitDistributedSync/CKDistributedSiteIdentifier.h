//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDistributedSync/NSCopying-Protocol.h>
#import <CloudKitDistributedSync/NSSecureCoding-Protocol.h>

@class NSData;

@interface CKDistributedSiteIdentifier : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_identifier;	// 8 = 0x8
    NSData *_modifier;	// 16 = 0x10
}

+ (id)SHADescription:(id)arg1;	// IMP=0x00000000000fb714
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000fb14f
- (void).cxx_destruct;	// IMP=0x00000000000fbc89
@property(readonly, nonatomic) NSData *modifier; // @synthesize modifier=_modifier;
@property(readonly, nonatomic) NSData *identifier; // @synthesize identifier=_identifier;
- (id)descriptionWithStringSiteIdentifiers;	// IMP=0x00000000000fb9ff
- (id)description;	// IMP=0x00000000000fb876
- (unsigned long long)hash;	// IMP=0x00000000000fb660
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fb397
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fb38c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000fb2af
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fb157
- (id)initWithIdentifier:(id)arg1 modifier:(id)arg2;	// IMP=0x00000000000fb032
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000fb01e

@end
