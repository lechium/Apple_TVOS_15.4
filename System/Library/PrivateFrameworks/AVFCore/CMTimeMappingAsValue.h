//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface CMTimeMappingAsValue : NSValue
{
    CDStruct_82206317 _timeMapping;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000110da
+ (id)valueWithCMTimeMapping:(CDStruct_82206317)arg1;	// IMP=0x0000000000010c2a
- (Class)classForCoder;	// IMP=0x0000000000011378
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001123c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000110e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011021
- (unsigned long long)hash;	// IMP=0x0000000000010f46
- (_Bool)isEqualToValue:(id)arg1;	// IMP=0x0000000000010df4
- (id)description;	// IMP=0x0000000000010d1a
- (const char *)objCType;	// IMP=0x0000000000010d0d
- (void)getValue:(void *)arg1;	// IMP=0x0000000000010ccc
- (CDStruct_82206317)CMTimeMappingValue;	// IMP=0x0000000000010c88

@end

