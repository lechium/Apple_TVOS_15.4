//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapSelectionHandler-Protocol.h>

@class NSString;
@protocol PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapPassthroughSelectionHandler : NSObject <PXPlacesMapSelectionHandler>
{
    id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000052b7
@property(nonatomic) __weak id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; // @synthesize pipelineComponentProvider;
- (void)reset;	// IMP=0x000000000000528a
- (id)selectedGeotaggablesForRenderable:(id)arg1 mapView:(id)arg2;	// IMP=0x0000000000005275

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

