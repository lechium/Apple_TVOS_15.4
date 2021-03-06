//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlacesKit/NSObject-Protocol.h>

@class PXPlacesImageCache;
@protocol PXPlacesMapLayout, PXPlacesMapRenderer, PXPlacesMapSelectionHandler, PXPlacesMapUpdatePlan;

@protocol PXPlacesMapPipelineComponentProvider <NSObject>
@property(retain) PXPlacesImageCache *imageCache;
@property(readonly) id <PXPlacesMapSelectionHandler> selectionHandler;
@property(readonly) id <PXPlacesMapRenderer> renderer;
@property(readonly) id <PXPlacesMapUpdatePlan> updatePlan;
@property(readonly) id <PXPlacesMapLayout> layout;
@end

