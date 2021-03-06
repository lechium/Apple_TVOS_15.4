//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RTPredictedLocationOfInterest;

@interface EKPredictedLocationOfInterest : NSObject
{
    long long _type;	// 8 = 0x8
    NSString *_customLabel;	// 16 = 0x10
    NSString *_mapItemName;	// 24 = 0x18
    NSString *_addressCountryCode;	// 32 = 0x20
    NSString *_addressThoroughfare;	// 40 = 0x28
    NSString *_addressLocality;	// 48 = 0x30
    RTPredictedLocationOfInterest *_rtPredictedLocationOfInterest;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000c3a79
@property(readonly, nonatomic) RTPredictedLocationOfInterest *rtPredictedLocationOfInterest; // @synthesize rtPredictedLocationOfInterest=_rtPredictedLocationOfInterest;
@property(readonly, copy, nonatomic) NSString *addressLocality; // @synthesize addressLocality=_addressLocality;
@property(readonly, copy, nonatomic) NSString *addressThoroughfare; // @synthesize addressThoroughfare=_addressThoroughfare;
@property(readonly, copy, nonatomic) NSString *addressCountryCode; // @synthesize addressCountryCode=_addressCountryCode;
@property(readonly, copy, nonatomic) NSString *mapItemName; // @synthesize mapItemName=_mapItemName;
@property(readonly, copy, nonatomic) NSString *customLabel; // @synthesize customLabel=_customLabel;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)initWithType:(long long)arg1 customLabel:(id)arg2 mapItemName:(id)arg3 addressCountryCode:(id)arg4 addressThoroughFare:(id)arg5 addressLocality:(id)arg6;	// IMP=0x00000000000c38f6
- (id)initWithPredictedLocationOfInterest:(id)arg1;	// IMP=0x00000000000c3754

@end

