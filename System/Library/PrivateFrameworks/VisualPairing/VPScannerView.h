//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface VPScannerView : UIView
{
    _Bool _fillLayerBoundsWithVideo;	// 8 = 0x8
    CDUnknownBlockType _scannedCodeHandler;	// 16 = 0x10
    double _viewFinderDiameter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000027bd
@property(nonatomic) _Bool fillLayerBoundsWithVideo; // @synthesize fillLayerBoundsWithVideo=_fillLayerBoundsWithVideo;
@property(readonly, nonatomic) double viewFinderDiameter; // @synthesize viewFinderDiameter=_viewFinderDiameter;
@property(copy, nonatomic) CDUnknownBlockType scannedCodeHandler; // @synthesize scannedCodeHandler=_scannedCodeHandler;
- (void)stop;	// IMP=0x0000000000002763
- (void)start;	// IMP=0x000000000000275d

@end
