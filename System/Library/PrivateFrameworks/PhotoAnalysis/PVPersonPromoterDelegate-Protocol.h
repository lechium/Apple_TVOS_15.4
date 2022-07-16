//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class NSArray, NSMapTable, NSSet, NSString, PVPersonClusterManager;
@protocol PVFaceProtocol, PVPersonProtocol;

@protocol PVPersonPromoterDelegate <NSObject>
- (NSArray *)densityClusteringForObjects:(NSArray *)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(double (^)(id, id))arg4;
- (NSArray *)performSocialGroupsIdentifiersWithPersonClusterManager:(PVPersonClusterManager *)arg1 forPersons:(NSSet *)arg2 overTheYearsComputation:(_Bool)arg3 updateBlock:(void (^)(float, _Bool *))arg4;
- (NSString *)suggestedMeIdentifierWithPersonClusterManager:(PVPersonClusterManager *)arg1 forPersons:(NSSet *)arg2 updateBlock:(void (^)(float, _Bool *))arg3;
- (id <PVFaceProtocol>)keyFaceForPerson:(id <PVPersonProtocol>)arg1 qualityMeasureByFace:(NSMapTable *)arg2 updateBlock:(void (^)(float, _Bool *))arg3;
@end

