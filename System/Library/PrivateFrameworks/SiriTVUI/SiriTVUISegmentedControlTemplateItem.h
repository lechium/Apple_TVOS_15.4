//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

@interface SiriTVUISegmentedControlTemplateItem
{
    NSArray *_titles;	// 8 = 0x8
    NSDictionary *_backgroundColors;	// 16 = 0x10
    NSDictionary *_textColors;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001c153
@property(copy, nonatomic) NSDictionary *textColors; // @synthesize textColors=_textColors;
@property(copy, nonatomic) NSDictionary *backgroundColors; // @synthesize backgroundColors=_backgroundColors;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
- (id)titleTextAttributesForUserIntefaceStyle:(long long)arg1;	// IMP=0x000000000001c00a
- (id)backgroundColorForUserInterfaceStyle:(long long)arg1;	// IMP=0x000000000001bf9c
- (id)initWithTitles:(id)arg1 backgroundColors:(id)arg2 andTextColors:(id)arg3;	// IMP=0x000000000001be74

@end
