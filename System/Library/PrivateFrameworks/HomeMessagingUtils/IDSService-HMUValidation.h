//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/IDSService.h>

@class NSArray;

@interface IDSService (HMUValidation)
- (_Bool)hmu_validateDestination:(id)arg1 forHome:(id)arg2 currentAccessory:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0000000000001dd4
- (_Bool)hmu_validateFromID:(id)arg1 context:(id)arg2 currentAccessory:(id)arg3 home:(id)arg4 options:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x0000000000001a70
@property(readonly, nonatomic) NSArray *hmu_accessories;
@property(readonly, nonatomic) NSArray *hmu_appleTVs;
@property(readonly, nonatomic) NSArray *hmu_homePods;
@end

