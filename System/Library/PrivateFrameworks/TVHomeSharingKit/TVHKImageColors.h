//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

@interface TVHKImageColors : NSObject
{
    _Bool _isBackgroundLight;	// 8 = 0x8
    UIColor *_backgroundColor;	// 16 = 0x10
    UIColor *_textPrimaryColor;	// 24 = 0x18
    UIColor *_textSecondaryColor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000029f11
@property(nonatomic) _Bool isBackgroundLight; // @synthesize isBackgroundLight=_isBackgroundLight;
@property(retain, nonatomic) UIColor *textSecondaryColor; // @synthesize textSecondaryColor=_textSecondaryColor;
@property(retain, nonatomic) UIColor *textPrimaryColor; // @synthesize textPrimaryColor=_textPrimaryColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) long long recommendedBlurStyle;

@end

