//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UILabelLegacyScaledMetrics : NSObject
{
    double _actualScaleFactor;	// 8 = 0x8
    double _baselineOffset;	// 16 = 0x10
    double _scaledBaselineOffset;	// 24 = 0x18
    double _scaledLineHeight;	// 32 = 0x20
    long long _measuredNumberOfLines;	// 40 = 0x28
    NSAttributedString *_scaledAttributedText;	// 48 = 0x30
    double _scaledFirstBaselineOffset;	// 56 = 0x38
    struct CGSize _scaledSize;	// 64 = 0x40
    struct CGSize _unscaledAndPossiblyTooLargeSize;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000fa8fda

@end

