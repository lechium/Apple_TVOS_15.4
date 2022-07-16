//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLFrequentLocationProtocol-Protocol.h>

@class NSDateInterval, NSMutableArray, NSSet, NSString;
@protocol PLMomentProcessingProtocol;

@interface PLFrequentLocation : NSObject <PLFrequentLocationProtocol>
{
    NSMutableArray *_sortedMoments;	// 8 = 0x8
    NSDateInterval *_dateInterval;	// 16 = 0x10
    NSSet *_momentsSet;	// 24 = 0x18
    id <PLMomentProcessingProtocol> _centroid;	// 32 = 0x20
    struct CLLocationCoordinate2D _coordinate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000269e54
@property(retain, nonatomic) id <PLMomentProcessingProtocol> centroid; // @synthesize centroid=_centroid;
@property(retain, nonatomic) NSSet *momentsSet; // @synthesize momentsSet=_momentsSet;
@property(retain, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) NSMutableArray *sortedMoments; // @synthesize sortedMoments=_sortedMoments;
- (void)_invalidateLazyProperties;	// IMP=0x0000000000269920
- (void)addMomentToSortedMoment:(id)arg1;	// IMP=0x00000000002697e8
- (_Bool)isWithinDistance:(double)arg1 toCoordinate:(struct CLLocationCoordinate2D)arg2;	// IMP=0x000000000026978f
- (_Bool)isSimilarToFrequentLocation:(id)arg1;	// IMP=0x0000000000269663
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000269591
@property(readonly, copy) NSString *description;
- (id)initWithSortedMoments:(id)arg1;	// IMP=0x000000000026933c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
