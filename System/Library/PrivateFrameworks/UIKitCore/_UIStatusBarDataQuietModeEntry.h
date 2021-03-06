//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _UIStatusBarDataQuietModeEntry
{
    NSString *_focusName;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000c926f8
+ (id)entryWithFocusName:(id)arg1 imageNamed:(id)arg2 boolValue:(_Bool)arg3;	// IMP=0x0000000000c925d4
- (void).cxx_destruct;	// IMP=0x0000000000c92a71
@property(copy, nonatomic) NSString *focusName; // @synthesize focusName=_focusName;
- (id)_ui_descriptionBuilder;	// IMP=0x0000000000c9295f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c9282e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000c9277d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000c92700
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c926a2
- (unsigned long long)hash;	// IMP=0x0000000000c9264c
- (id)initFromData:(const CDStruct_e9def42b *)arg1 type:(int)arg2 focusName:(const char *)arg3 maxFocusLength:(int)arg4 imageName:(const char *)arg5 maxImageLength:(int)arg6 boolValue:(_Bool)arg7;	// IMP=0x0000000000c9a2a5

@end

