//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKAnnotation-Protocol.h>

@class NSArray, NSString;

@interface MKClusterAnnotation : NSObject <MKAnnotation>
{
    NSArray *_memberAnnotations;	// 8 = 0x8
    NSString *_clusteringIdentifier;	// 16 = 0x10
    struct CLLocationCoordinate2D __coordinate;	// 24 = 0x18
    NSString *__title;	// 40 = 0x28
    NSString *__subtitle;	// 48 = 0x30
    CDStruct_81fb2dc1 _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001e987b
@property(copy, nonatomic) NSString *clusteringIdentifier; // @synthesize clusteringIdentifier=_clusteringIdentifier;
@property(readonly, nonatomic) NSArray *memberAnnotations; // @synthesize memberAnnotations=_memberAnnotations;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e9668
- (struct CLLocationCoordinate2D)_averageCoordinate;	// IMP=0x00000000001e93ef
- (_Bool)_isMKClusterAnnotation;	// IMP=0x00000000001e93e7
@property(readonly) unsigned long long hash;
- (void)_memberAnnotationCoordinateDidChange;	// IMP=0x00000000001e9389
- (id)initWithMemberAnnotations:(id)arg1;	// IMP=0x00000000001e9328
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=__coordinate;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=__subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=__title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
