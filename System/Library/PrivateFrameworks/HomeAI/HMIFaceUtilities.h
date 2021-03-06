//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSString;

@interface HMIFaceUtilities : HMFObject <HMFLogging>
{
}

+ (id)logCategory;	// IMP=0x00000000000727a7
+ (_Bool)serializeJSONObject:(id)arg1 url:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007264e
+ (_Bool)saveFaceClassifications:(id)arg1 videoId:(id)arg2 fragmentId:(unsigned long long)arg3 frameId:(id)arg4 baseURL:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000719a1
+ (id)mergedPersonEventsFromEvents:(id)arg1;	// IMP=0x0000000000070178
+ (id)faceObservationFromFaceprint:(id)arg1;	// IMP=0x0000000000070023
+ (id)faceObservationsFromFaceprintsForClustering:(id)arg1;	// IMP=0x000000000006fcaa
+ (unsigned long long)faceprintDefaultRevision;	// IMP=0x000000000006fc9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

