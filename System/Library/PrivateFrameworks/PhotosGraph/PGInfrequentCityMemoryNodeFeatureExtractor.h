//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGInfrequentCityMemoryNodeFeatureExtractor
{
}

+ (id)unlocalizedCityNameFromCityName:(id)arg1 countryCode:(id)arg2 fromCityManager:(id)arg3;	// IMP=0x0000000000501917
- (id)labelsForVersion:(long long)arg1;	// IMP=0x0000000000501662
- (id)initWithVersion:(long long)arg1 graph:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000501458
- (id)initWithFrequentCityLabels:(id)arg1 version:(long long)arg2 graph:(id)arg3 cityManager:(id)arg4 error:(id *)arg5;	// IMP=0x000000000050126e
- (id)initWithFrequentCityLabels:(id)arg1 version:(long long)arg2 graph:(id)arg3 error:(id *)arg4;	// IMP=0x00000000005011be
- (id)initWithError:(id *)arg1;	// IMP=0x00000000005011a2

@end

