//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString;

@protocol PLPhotoAnalysisVisionServiceFaceProcessingProtocol
- (void)requestOnDemandFaceCropsForFaceLocalIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)rebuildPersonsWithContext:(NSDictionary *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)personPromoterStatusWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)requestSuggestedMePersonIdentifierWithContext:(NSDictionary *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)validateClusterCacheWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)faceClusteringInformation:(unsigned long long)arg1 withContext:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)processPersonsWithContext:(NSDictionary *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)reclusterFacesWithContext:(NSDictionary *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)resetFaceClassificationModelWithContext:(NSDictionary *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)resetFaceClusteringStateWithContext:(NSDictionary *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)updateKeyFacesOfPersonsWithLocalIdentifiers:(NSArray *)arg1 forceUpdate:(_Bool)arg2 context:(NSDictionary *)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)suggestPersonsForPersonWithLocalIdentifier:(NSString *)arg1 toBeConfirmedPersonSuggestions:(NSArray *)arg2 toBeRejectedPersonSuggestions:(NSArray *)arg3 context:(NSDictionary *)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)performFaceProcessingOnAssetWithLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
@end

