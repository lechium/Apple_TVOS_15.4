//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _UIStatusBarDataLockEntry
{
    long long _unlockFailureCount;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000c95f81
@property(nonatomic) long long unlockFailureCount; // @synthesize unlockFailureCount=_unlockFailureCount;
- (id)_ui_descriptionBuilder;	// IMP=0x0000000000c96150
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c96092
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000c96006
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000c95f89
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c95f2b
- (unsigned long long)hash;	// IMP=0x0000000000c95eef

@end

