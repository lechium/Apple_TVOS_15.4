//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PVPersonDeduperSocialGroupComplementStep
{
}

- (void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 resultBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000021a55
- (_Bool)isPersonSimilar:(id)arg1 withOtherPerson:(id)arg2 withDistance:(float)arg3 minAgeType:(unsigned short)arg4;	// IMP=0x0000000000021987
- (id)metricsKey;	// IMP=0x0000000000021968
- (id)name;	// IMP=0x000000000002195b

@end
