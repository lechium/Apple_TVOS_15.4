//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXOneUpSettings
{
    _Bool _hideFloatingInfoPanel;	// 8 = 0x8
    double _maximumWhitespaceWidthForInitialZoomToFill;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000000005e76c1
+ (id)settingsControllerModule;	// IMP=0x00000000005e7754
@property(nonatomic) _Bool hideFloatingInfoPanel; // @synthesize hideFloatingInfoPanel=_hideFloatingInfoPanel;
@property(nonatomic) double maximumWhitespaceWidthForInitialZoomToFill; // @synthesize maximumWhitespaceWidthForInitialZoomToFill=_maximumWhitespaceWidthForInitialZoomToFill;
- (double)zoomFactorForContentWithSize:(struct CGSize)arg1 toFillViewWithSize:(struct CGSize)arg2;	// IMP=0x00000000005e765f
- (_Bool)shouldInitiallyZoomContentWithSize:(struct CGSize)arg1 toFillViewWithSize:(struct CGSize)arg2;	// IMP=0x00000000005e75cc
- (void)setDefaultValues;	// IMP=0x00000000005e7583
- (id)parentSettings;	// IMP=0x00000000005e756a

@end

