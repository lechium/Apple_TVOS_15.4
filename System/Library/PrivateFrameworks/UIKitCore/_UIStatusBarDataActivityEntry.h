//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _UIStatusBarDataActivityEntry
{
    long long _type;	// 16 = 0x10
    NSString *_displayId;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000c95051
- (void).cxx_destruct;	// IMP=0x0000000000c95483
@property(copy, nonatomic) NSString *displayId; // @synthesize displayId=_displayId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)_ui_descriptionBuilder;	// IMP=0x0000000000c95325
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c951ce
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000c950f9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000c95059
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c94fc2
- (unsigned long long)hash;	// IMP=0x0000000000c94f61

@end
