//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapLayoutItem-Protocol.h>

@class NSMutableOrderedSet, NSOrderedSet, NSString;

@interface PXPlacesMapLayoutItemImpl : NSObject <PXPlacesMapLayoutItem>
{
    NSMutableOrderedSet *_layoutGeotaggables;	// 8 = 0x8
    struct CLLocationCoordinate2D _coordinate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000009008
@property(retain, nonatomic) NSMutableOrderedSet *layoutGeotaggables; // @synthesize layoutGeotaggables=_layoutGeotaggables;
@property struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSOrderedSet *geotaggables;
- (_Bool)isEqualToLayoutItem:(id)arg1;	// IMP=0x0000000000008d27
- (void)addGeotaggables:(id)arg1;	// IMP=0x0000000000008d11
- (void)addGeotaggable:(id)arg1;	// IMP=0x0000000000008cfb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008c8f
@property(readonly) unsigned long long hash;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x0000000000008b78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
