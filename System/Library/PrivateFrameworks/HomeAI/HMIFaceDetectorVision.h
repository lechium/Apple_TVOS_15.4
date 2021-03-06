//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMIFaceDetector-Protocol.h>

@class NSString;

@interface HMIFaceDetectorVision : HMFObject <HMIFaceDetector, HMFLogging>
{
}

+ (id)logCategory;	// IMP=0x0000000000055c26
+ (void)releaseCachedResources;	// IMP=0x0000000000055b5f
+ (unsigned long long)defaultRevision;	// IMP=0x0000000000055b54
+ (id)detectFacesInImageData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000055922
+ (id)detectFacesInPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x000000000005576e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

