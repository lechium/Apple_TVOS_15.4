//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKUserLocationView;

__attribute__((visibility("hidden")))
@interface _MKUserLocationInternalView
{
    MKUserLocationView *_parentView;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x0000000000180dd7
@property(nonatomic) __weak MKUserLocationView *parentView; // @synthesize parentView=_parentView;
- (id)_containerView;	// IMP=0x0000000000180d5a
- (id)_mapView;	// IMP=0x0000000000180d0a
- (id)_annotationContainer;	// IMP=0x0000000000180cba
- (double)_pointsForDistance:(double)arg1;	// IMP=0x0000000000180c34

@end

