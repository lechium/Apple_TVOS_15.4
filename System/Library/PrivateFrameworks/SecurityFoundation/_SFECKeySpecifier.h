//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _SFECKeySpecifier
{
    id _ecKeySpecifierInternal;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000091d0
+ (Class)keyClass;	// IMP=0x00000000000091bf
- (void).cxx_destruct;	// IMP=0x00000000000093c4
@property long long curve;
- (id)description;	// IMP=0x00000000000092d1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000927d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009277
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000009248
- (id)initWithCurve:(long long)arg1;	// IMP=0x00000000000091d8

@end

