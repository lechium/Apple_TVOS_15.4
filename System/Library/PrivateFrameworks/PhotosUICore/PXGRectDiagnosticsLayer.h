//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class NSArray, PXGLayout;

@interface PXGRectDiagnosticsLayer : CALayer
{
    PXGLayout *_layout;	// 8 = 0x8
    NSArray *_rectDiagnosticsProviders;	// 16 = 0x10
}

+ (id)defaultRectDiagnosticsProviders;	// IMP=0x00000000002564e5
- (void).cxx_destruct;	// IMP=0x0000000000256a99
@property(copy, nonatomic) NSArray *rectDiagnosticsProviders; // @synthesize rectDiagnosticsProviders=_rectDiagnosticsProviders;
@property(retain, nonatomic) PXGLayout *layout; // @synthesize layout=_layout;
- (void)update;	// IMP=0x00000000002565e2

@end
