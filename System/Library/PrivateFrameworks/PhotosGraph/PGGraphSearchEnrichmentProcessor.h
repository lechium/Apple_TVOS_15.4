//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphDataModelEnrichmentProcessor-Protocol.h>

@class NSString;

@interface PGGraphSearchEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>
{
}

+ (double)backgroundJobTimeout;	// IMP=0x0000000000395d2a
+ (id)backgroundJobName;	// IMP=0x0000000000395d1d
+ (_Bool)supportsBackgroundJob;	// IMP=0x0000000000395d15
- (void)_processGraphUpdateInventory:(id)arg1 onGraph:(id)arg2 photoLibrary:(id)arg3 curationManager:(id)arg4 curationContext:(id)arg5 searchComputationCache:(id)arg6 progressBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x0000000000396339
- (_Bool)_shouldProcessGraphUpdate:(id)arg1;	// IMP=0x0000000000396224
- (void)enrichDataModelWithManager:(id)arg1 curationContext:(id)arg2 graphUpdateInventory:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000395d38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
