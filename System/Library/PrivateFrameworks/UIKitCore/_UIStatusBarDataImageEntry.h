//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _UIStatusBarDataImageEntry
{
    NSString *_imageName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000c91e87
+ (id)entryWithImageNamed:(id)arg1;	// IMP=0x0000000000c91d89
- (void).cxx_destruct;	// IMP=0x0000000000c92200
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)_ui_descriptionBuilder;	// IMP=0x0000000000c920ee
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c91fbd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000c91f0c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000c91e8f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c91e31
- (unsigned long long)hash;	// IMP=0x0000000000c91ddb
- (id)initFromData:(const CDStruct_e9def42b *)arg1 type:(int)arg2 imageName:(const char *)arg3 maxLength:(int)arg4;	// IMP=0x0000000000c9a1ba

@end
