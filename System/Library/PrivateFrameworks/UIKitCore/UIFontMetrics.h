//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIFontMetrics : NSObject
{
    NSString *_textStyle;	// 8 = 0x8
}

+ (double)scaledValueForValue:(double)arg1 withTextStyle:(id)arg2 bodyLeading:(double)arg3 compatibleWithTraitCollection:(id)arg4;	// IMP=0x000000000072cca5
+ (id)metricsForTextStyle:(id)arg1;	// IMP=0x000000000072c928
+ (id)defaultMetrics;	// IMP=0x000000000072c889
- (void).cxx_destruct;	// IMP=0x000000000072d06d
- (id)ib_scaledFontForFont:(id)arg1 maximumPointSize:(double)arg2;	// IMP=0x000000000072cfa6
- (id)ib_scaledFontForFont:(id)arg1;	// IMP=0x000000000072cee6
- (double)scaledValueForValue:(double)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x000000000072cbbd
- (double)scaledValueForValue:(double)arg1;	// IMP=0x000000000072cba9
- (id)scaledFontForFont:(id)arg1 maximumPointSize:(double)arg2 compatibleWithTraitCollection:(id)arg3;	// IMP=0x000000000072cac2
- (id)scaledFontForFont:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x000000000072caad
- (id)scaledFontForFont:(id)arg1 maximumPointSize:(double)arg2;	// IMP=0x000000000072ca99
- (id)scaledFontForFont:(id)arg1;	// IMP=0x000000000072ca84
- (id)init;	// IMP=0x000000000072c9e4
- (id)initForTextStyle:(id)arg1;	// IMP=0x000000000072c971

@end

