//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PPMockRTAddress : NSObject
{
    NSString *_subThoroughfare;	// 8 = 0x8
    NSString *_thoroughfare;	// 16 = 0x10
    NSString *_subLocality;	// 24 = 0x18
    NSString *_locality;	// 32 = 0x20
    NSString *_subAdministrativeArea;	// 40 = 0x28
    NSString *_administrativeArea;	// 48 = 0x30
    NSString *_administrativeAreaCode;	// 56 = 0x38
    NSString *_postalCode;	// 64 = 0x40
    NSString *_country;	// 72 = 0x48
    NSString *_countryCode;	// 80 = 0x50
    NSString *_inlandWater;	// 88 = 0x58
    NSString *_ocean;	// 96 = 0x60
    NSArray *_areasOfInterest;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000020c27
@property(retain, nonatomic) NSArray *areasOfInterest; // @synthesize areasOfInterest=_areasOfInterest;
@property(retain, nonatomic) NSString *ocean; // @synthesize ocean=_ocean;
@property(retain, nonatomic) NSString *inlandWater; // @synthesize inlandWater=_inlandWater;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(retain, nonatomic) NSString *administrativeAreaCode; // @synthesize administrativeAreaCode=_administrativeAreaCode;
@property(retain, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(retain, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property(retain, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(retain, nonatomic) NSString *subLocality; // @synthesize subLocality=_subLocality;
@property(retain, nonatomic) NSString *thoroughfare; // @synthesize thoroughfare=_thoroughfare;
@property(retain, nonatomic) NSString *subThoroughfare; // @synthesize subThoroughfare=_subThoroughfare;

@end

