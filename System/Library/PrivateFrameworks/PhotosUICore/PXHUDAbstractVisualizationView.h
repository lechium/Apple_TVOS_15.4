//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXHUDVisualizationDelegate-Protocol.h>

@class NSString, PXHUDVisualization;

@interface PXHUDAbstractVisualizationView : UIView <PXHUDVisualizationDelegate>
{
    PXHUDVisualization *_visualization;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000007079ef
@property(retain, nonatomic) PXHUDVisualization *visualization; // @synthesize visualization=_visualization;
- (void)visualizationDidChange:(id)arg1;	// IMP=0x00000000007079cc
- (void)visualizationDidUpdate;	// IMP=0x00000000007079c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

