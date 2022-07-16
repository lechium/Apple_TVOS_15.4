//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIImage, UITraitCollection, VKMapSnapshot;

@interface MKMapSnapshot : NSObject
{
    VKMapSnapshot *_snapshot;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    UITraitCollection *_traitCollection;	// 24 = 0x18
    NSArray *_allTraitCollections;	// 32 = 0x20
    NSArray *_allImages;	// 40 = 0x28
}

+ (id)createSnapshotWithOptions:(id)arg1 timeoutInSeconds:(long long)arg2;	// IMP=0x000000000019634f
- (void).cxx_destruct;	// IMP=0x000000000021937e
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)_statsMemoryUsage;	// IMP=0x0000000000219354
- (_Bool)_hasNoDataPlaceholders;	// IMP=0x000000000021934c
- (struct CLLocationCoordinate2D)_coordinateForPoint:(struct CGPoint)arg1;	// IMP=0x0000000000219336
- (struct CGPoint)pointForCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x0000000000219320
- (id)_initWithSnapshot:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000218caf
- (void)_prepareForRenderWithAnnotationViews:(id)arg1 workQueue:(id)arg2 annotationViewDrawingQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002188de
- (void)_compositeOnImages:(CDUnknownBlockType)arg1 drawQueue:(id)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000217df4
- (id)snapshotWithAnnotationView:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000001960db
- (id)snapshotWithAnnotationView:(id)arg1 atCoordinate:(struct CLLocationCoordinate2D)arg2;	// IMP=0x000000000019605a

@end
