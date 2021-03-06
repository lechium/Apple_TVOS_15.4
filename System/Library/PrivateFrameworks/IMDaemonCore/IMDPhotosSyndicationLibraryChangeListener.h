//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSString, PHFetchOptions, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface IMDPhotosSyndicationLibraryChangeListener : NSObject <PHPhotoLibraryChangeObserver>
{
    PHFetchOptions *_analysisFetchOptions;	// 8 = 0x8
    PHPhotoLibrary *_syndicationLibrary;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_changeObservationQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000005c0f1
- (void).cxx_destruct;	// IMP=0x000000000005c883
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *changeObservationQueue; // @synthesize changeObservationQueue=_changeObservationQueue;
@property(readonly, nonatomic) PHPhotoLibrary *syndicationLibrary; // @synthesize syndicationLibrary=_syndicationLibrary;
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x000000000005c4fa
@property(readonly, nonatomic) PHFetchOptions *analysisFetchOptions; // @synthesize analysisFetchOptions=_analysisFetchOptions;
- (void)stopListening;	// IMP=0x000000000005c2e3
- (void)startListening;	// IMP=0x000000000005c27d
- (void)dealloc;	// IMP=0x000000000005c23f
- (id)init;	// IMP=0x000000000005c146
- (_Bool)__im_ff_photoAnalysisInSpotlightEnabled;	// IMP=0x000000000005c0a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

