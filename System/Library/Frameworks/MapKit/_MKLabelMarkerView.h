//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKMapView;

__attribute__((visibility("hidden")))
@interface _MKLabelMarkerView
{
    MKMapView *_mapView;	// 256 = 0x100
}

+ (_Bool)_followsTerrain;	// IMP=0x000000000015643e
- (void).cxx_destruct;	// IMP=0x0000000000156af9
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
- (_Bool)updateCalloutViewIfNeededAnimated:(_Bool)arg1;	// IMP=0x0000000000156a84
- (void)_updateAnchorOffset;	// IMP=0x00000000001569f9
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000001568fb
- (void)dealloc;	// IMP=0x00000000001568bd
- (void)setAnnotation:(id)arg1;	// IMP=0x0000000000156659
- (void)_deregisterObserver;	// IMP=0x00000000001565de
- (void)_registerObserver;	// IMP=0x0000000000156551
- (_Bool)shouldShowCallout;	// IMP=0x00000000001564c3
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000156446

@end

