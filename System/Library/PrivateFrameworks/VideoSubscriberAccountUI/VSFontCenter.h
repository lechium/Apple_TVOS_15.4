//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFont, UITraitCollection;
@protocol UITraitEnvironment;

@interface VSFontCenter : NSObject
{
    id <UITraitEnvironment> _traitEnvironment;	// 8 = 0x8
    UITraitCollection *_traitCollection;	// 16 = 0x10
    UIFont *_title0Font;	// 24 = 0x18
    UIFont *_title1Font;	// 32 = 0x20
    UIFont *_title2Font;	// 40 = 0x28
    UIFont *_title3Font;	// 48 = 0x30
    UIFont *_headlineFont;	// 56 = 0x38
    UIFont *_subheadlineFont;	// 64 = 0x40
    UIFont *_bodyFont;	// 72 = 0x48
    UIFont *_calloutFont;	// 80 = 0x50
    UIFont *_footnoteFont;	// 88 = 0x58
    UIFont *_caption1Font;	// 96 = 0x60
    UIFont *_caption2Font;	// 104 = 0x68
    UIFont *_appAgeRatingFont;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000056533
@property(copy, nonatomic) UIFont *appAgeRatingFont; // @synthesize appAgeRatingFont=_appAgeRatingFont;
@property(copy, nonatomic) UIFont *caption2Font; // @synthesize caption2Font=_caption2Font;
@property(copy, nonatomic) UIFont *caption1Font; // @synthesize caption1Font=_caption1Font;
@property(copy, nonatomic) UIFont *footnoteFont; // @synthesize footnoteFont=_footnoteFont;
@property(copy, nonatomic) UIFont *calloutFont; // @synthesize calloutFont=_calloutFont;
@property(copy, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(copy, nonatomic) UIFont *subheadlineFont; // @synthesize subheadlineFont=_subheadlineFont;
@property(copy, nonatomic) UIFont *headlineFont; // @synthesize headlineFont=_headlineFont;
@property(copy, nonatomic) UIFont *title3Font; // @synthesize title3Font=_title3Font;
@property(copy, nonatomic) UIFont *title2Font; // @synthesize title2Font=_title2Font;
@property(copy, nonatomic) UIFont *title1Font; // @synthesize title1Font=_title1Font;
@property(copy, nonatomic) UIFont *title0Font; // @synthesize title0Font=_title0Font;
@property(copy, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(nonatomic) __weak id <UITraitEnvironment> traitEnvironment; // @synthesize traitEnvironment=_traitEnvironment;
- (void)_updateFontsWithTraitCollection:(id)arg1;	// IMP=0x0000000000056032
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000000005601e
- (void)dealloc;	// IMP=0x0000000000055f95
- (id)initWithTraitEnvironment:(id)arg1;	// IMP=0x0000000000055e80
- (id)init;	// IMP=0x0000000000055e6c

@end
