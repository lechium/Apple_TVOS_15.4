//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface HMCameraClipVideoFileCombiner : NSObject <HMFLogging>
{
    NSArray *_videoFileURLs;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x000000000002689e
- (void).cxx_destruct;	// IMP=0x00000000000260e5
@property(readonly, copy) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, copy) NSArray *videoFileURLs; // @synthesize videoFileURLs=_videoFileURLs;
- (void)writeSamplesFromOutputs:(id)arg1 toInput:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000025f4f
- (void)combineToOutputFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024925
- (id)initWithVideoFileURLs:(id)arg1 queue:(id)arg2;	// IMP=0x000000000002488c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

