//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class NSArray;

@interface WFAggregateForecastResponse <NSCopying, NSSecureCoding>
{
    _Bool _responseWasFromCache;	// 8 = 0x8
    NSArray *_forecasts;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001af06
- (void).cxx_destruct;	// IMP=0x000000000001b0af
@property(nonatomic) _Bool responseWasFromCache; // @synthesize responseWasFromCache=_responseWasFromCache;
@property(copy, nonatomic) NSArray *forecasts; // @synthesize forecasts=_forecasts;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001afd1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001af0e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001ad96

@end

