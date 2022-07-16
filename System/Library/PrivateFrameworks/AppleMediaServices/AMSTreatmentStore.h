//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSLRUCache;

@interface AMSTreatmentStore : NSObject
{
    AMSLRUCache *_areasCache;	// 8 = 0x8
    AMSLRUCache *_treatmentsCache;	// 16 = 0x10
}

+ (id)defaultTreatmentStore;	// IMP=0x00000000002176b1
+ (void)setAttemptConnectionInTests:(_Bool)arg1;	// IMP=0x000000000021afaa
+ (_Bool)attemptConnectionInTests;	// IMP=0x000000000021af9e
- (void).cxx_destruct;	// IMP=0x000000000021af76
@property(readonly) AMSLRUCache *treatmentsCache; // @synthesize treatmentsCache=_treatmentsCache;
@property(readonly) AMSLRUCache *areasCache; // @synthesize areasCache=_areasCache;
- (id)treatmentsPayloadForAreas:(id)arg1;	// IMP=0x000000000021a96f
- (id)treatmentsForAreas:(id)arg1;	// IMP=0x0000000000219edb
- (id)synchronizeTreatments;	// IMP=0x000000000021985e
- (id)experimentDataForAreas:(id)arg1;	// IMP=0x00000000002192bb
- (id)areasForTopics:(id)arg1;	// IMP=0x0000000000218827
- (id)areasForNamespaces:(id)arg1;	// IMP=0x0000000000217d93
- (void)_treatmentsDidSyncronize:(id)arg1;	// IMP=0x0000000000217d12
- (void)_cacheTreatment:(id)arg1 forArea:(id)arg2;	// IMP=0x0000000000217c8c
- (id)_cachedTreatmentForArea:(id)arg1;	// IMP=0x0000000000217b42
- (id)_cachedAreasForTopic:(id)arg1;	// IMP=0x0000000000217a99
- (id)_cachedAreasForNamespace:(id)arg1;	// IMP=0x00000000002179f0
- (void)_cacheAreas:(id)arg1 forTopic:(id)arg2;	// IMP=0x0000000000217941
- (void)_cacheAreas:(id)arg1 forNamespace:(id)arg2;	// IMP=0x0000000000217892
- (id)_treatmentStoreService;	// IMP=0x000000000021784c
- (void)dealloc;	// IMP=0x00000000002177cd
- (id)init;	// IMP=0x0000000000217706

@end
