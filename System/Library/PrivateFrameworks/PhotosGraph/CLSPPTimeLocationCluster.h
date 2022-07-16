//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/CLSTimeLocationTuple-Protocol.h>

@class CLCircularRegion, NSDate, NSString, PHAssetCollection;

@interface CLSPPTimeLocationCluster : NSObject <CLSTimeLocationTuple>
{
    PHAssetCollection *_assetCollection;	// 8 = 0x8
    CLCircularRegion *_region;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    NSDate *_endDate;	// 32 = 0x20
    NSDate *_expandedEndDate;	// 40 = 0x28
    NSDate *_expandedStartDate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000246dab
@property(readonly, nonatomic) NSDate *expandedStartDate; // @synthesize expandedStartDate=_expandedStartDate;
@property(readonly, nonatomic) NSDate *expandedEndDate; // @synthesize expandedEndDate=_expandedEndDate;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinates;
@property(readonly, nonatomic) NSString *timeLocationIdentifier;
- (id)initWithAssetCollection:(id)arg1 region:(id)arg2;	// IMP=0x0000000000246b89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

