//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PGMatchingCommonLocation : NSObject
{
    double _distance;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    struct CLLocationCoordinate2D _coordinate;	// 24 = 0x18
    struct CLLocationCoordinate2D _addressCoordinate;	// 40 = 0x28
}

+ (id)matchingCommonLocationWithLabel:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 forAddressCoordinate:(struct CLLocationCoordinate2D)arg3;	// IMP=0x000000000047dacd
- (void).cxx_destruct;	// IMP=0x000000000047dabd
@property(nonatomic) struct CLLocationCoordinate2D addressCoordinate; // @synthesize addressCoordinate=_addressCoordinate;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (double)distanceBetweenCoordinates;	// IMP=0x000000000047da2f

@end

