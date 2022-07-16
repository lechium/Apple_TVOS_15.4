//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UINavTitleAppearanceData
{
    NSDictionary *_titleTextAttributes;	// 8 = 0x8
    NSDictionary *_largeTitleTextAttributes;	// 16 = 0x10
    struct UIOffset _titlePositionAdjustment;	// 24 = 0x18
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000efa64e
+ (id)standardTitleData;	// IMP=0x0000000000efa5b3
- (void).cxx_destruct;	// IMP=0x0000000000efb490
@property(copy, nonatomic) NSDictionary *largeTitleTextAttributes;
@property(nonatomic) struct UIOffset titlePositionAdjustment;
@property(copy, nonatomic) NSDictionary *titleTextAttributes;
- (id)replicate;	// IMP=0x0000000000efad84
- (_Bool)checkEqualTo:(id)arg1;	// IMP=0x0000000000efabf9
- (long long)hashInto:(long long)arg1;	// IMP=0x0000000000efabca
- (void)describeInto:(id)arg1;	// IMP=0x0000000000efaac5
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000efa88b

@end
