//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class NSSet;

@interface BBSectionIcon : NSObject <NSCopying, NSSecureCoding>
{
    NSSet *_variants;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000048a22
- (void).cxx_destruct;	// IMP=0x0000000000048bf6
@property(copy, nonatomic) NSSet *variants; // @synthesize variants=_variants;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000048b64
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000048a2a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000489bf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000488d8
- (unsigned long long)hash;	// IMP=0x0000000000048894
- (id)_bestVariantForFormat:(long long)arg1;	// IMP=0x00000000000486dc
- (void)addVariant:(id)arg1;	// IMP=0x000000000004860e

@end
