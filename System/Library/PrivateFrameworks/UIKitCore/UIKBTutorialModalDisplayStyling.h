//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface UIKBTutorialModalDisplayStyling : NSObject
{
    NSArray *_backgroundEffects;	// 8 = 0x8
    UIColor *_backgroundColor;	// 16 = 0x10
    UIColor *_mainTextColor;	// 24 = 0x18
    UIColor *_buttonTextColor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000691db3
@property(retain, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(retain, nonatomic) UIColor *mainTextColor; // @synthesize mainTextColor=_mainTextColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSArray *backgroundEffects; // @synthesize backgroundEffects=_backgroundEffects;
- (id)backgroundBlurEffects:(long long)arg1;	// IMP=0x0000000000691cb0
- (id)initWithKeyboardAppearance:(long long)arg1;	// IMP=0x0000000000691bb6

@end

