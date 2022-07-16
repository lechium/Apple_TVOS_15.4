//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXPlacesMapGeometricClusterLayout
{
    double _clusteringDistance;	// 8 = 0x8
}

@property(nonatomic) double clusteringDistance; // @synthesize clusteringDistance=_clusteringDistance;
- (_Bool)_shapeAtCoordinate:(struct CLLocationCoordinate2D)arg1 overlapsShapeAtCoordinate:(struct CLLocationCoordinate2D)arg2 forViewPort:(id)arg3;	// IMP=0x00000000000085eb
- (id)_findClusterOverlappingGeotaggable:(id)arg1 fromClusters:(id)arg2 forViewPort:(id)arg3;	// IMP=0x00000000000083df
- (id)_clusterGeotaggables:(id)arg1 forViewPort:(id)arg2;	// IMP=0x0000000000007f6e
- (id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2;	// IMP=0x0000000000007d50
- (id)init;	// IMP=0x0000000000007d07

@end
