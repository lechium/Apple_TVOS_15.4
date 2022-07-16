//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface StocksStyle : NSObject
{
    UIColor *_chartHighlightColor;	// 8 = 0x8
    UIFont *_mainFont;	// 16 = 0x10
    UIFont *_chartLabelFont;	// 24 = 0x18
}

+ (id)sharedStyle;	// IMP=0x000000000003c40c
- (void).cxx_destruct;	// IMP=0x000000000003c6df
- (id)boldFontOfSize:(double)arg1;	// IMP=0x000000000003c6c6
- (id)mediumFontOfSize:(double)arg1;	// IMP=0x000000000003c6ad
- (id)fontOfSize:(double)arg1;	// IMP=0x000000000003c694
- (id)lightFontOfSize:(double)arg1;	// IMP=0x000000000003c67b
- (id)chartHighlightColor;	// IMP=0x000000000003c61a
- (id)lossColor;	// IMP=0x000000000003c598
- (id)gainColor;	// IMP=0x000000000003c516
- (void)resetLocale;	// IMP=0x000000000003c4dd
- (id)init;	// IMP=0x000000000003c449

@end
