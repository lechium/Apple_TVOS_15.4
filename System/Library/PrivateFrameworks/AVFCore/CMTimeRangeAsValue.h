//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface CMTimeRangeAsValue : NSValue
{
    CDStruct_e83c9415 _timeRange;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000109f8
+ (id)valueWithCMTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000010702
- (Class)classForCoder;	// IMP=0x0000000000010c20
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010b2a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010a00
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001097f
- (unsigned long long)hash;	// IMP=0x0000000000010906
- (_Bool)isEqualToValue:(id)arg1;	// IMP=0x0000000000010835
- (id)description;	// IMP=0x00000000000107a1
- (const char *)objCType;	// IMP=0x0000000000010794
- (void)getValue:(void *)arg1;	// IMP=0x000000000001076e
- (CDStruct_e83c9415)CMTimeRangeValue;	// IMP=0x0000000000010745

@end
