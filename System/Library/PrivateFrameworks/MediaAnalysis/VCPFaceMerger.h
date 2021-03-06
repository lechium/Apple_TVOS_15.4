//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPPhotosFaceProcessingContext;

@interface VCPFaceMerger : NSObject
{
    VCPPhotosFaceProcessingContext *_context;	// 8 = 0x8
}

+ (_Bool)_allowANE;	// IMP=0x0000000000218f41
- (void).cxx_destruct;	// IMP=0x000000000021b76d
- (id)mergeExistingFaces:(id)arg1 withDetectedFaces:(id)arg2 forImage:(id)arg3;	// IMP=0x000000000021a675
- (id)_sortedViableFaceMergePairsFromQueryFaces:(id)arg1 andCandidateFaces:(id)arg2;	// IMP=0x0000000000219c5a
- (_Bool)_alignBBoxForVCPPhotosFaces:(id)arg1 forImage:(id)arg2;	// IMP=0x0000000000219654
- (id)_bboxAlignedFaceObservationsFromFaceObservations:(id)arg1 inImage:(id)arg2 withError:(id *)arg3;	// IMP=0x000000000021900e
- (void)_configureRequest:(id)arg1 withRevision:(unsigned long long)arg2;	// IMP=0x0000000000218f49
- (id)_faceObservationsWithBBoxFromVCPPhotosFaces:(id)arg1 mapping:(id)arg2;	// IMP=0x0000000000218ad2
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000218a67

@end

