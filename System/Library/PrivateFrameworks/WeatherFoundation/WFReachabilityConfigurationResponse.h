//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class NSURL, NWPathEvaluator;

@interface WFReachabilityConfigurationResponse <NSSecureCoding>
{
    NSURL *_reachabilityHostURL;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005600f
- (void).cxx_destruct;	// IMP=0x00000000000561d9
@property(copy, nonatomic) NSURL *reachabilityHostURL; // @synthesize reachabilityHostURL=_reachabilityHostURL;
@property(readonly, nonatomic) NWPathEvaluator *pathEvaluator;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000560c5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000056017

@end

