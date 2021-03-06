//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, NSDate;

@interface WFAirQualityProviderStation : NSObject
{
    NSDate *_lastReadDate;	// 8 = 0x8
    CLLocation *_location;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000c023
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSDate *lastReadDate; // @synthesize lastReadDate=_lastReadDate;
- (id)description;	// IMP=0x000000000000bf7c
- (id)initWithLocation:(id)arg1 lastReadDate:(id)arg2;	// IMP=0x000000000000bee3

@end

