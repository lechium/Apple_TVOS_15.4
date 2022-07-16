//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, PLLibraryServicesManager;
@protocol OS_dispatch_source;

@interface PLLibraryServicesCPLReadiness : NSObject
{
    PLLibraryServicesManager *_libraryServicesManager;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_photoLibraryCPLReadinessTimer;	// 16 = 0x10
    NSMutableArray *_photoLibraryCPLReadinessBlocks;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002cfcd0
- (void)pauseCloudPhotos:(_Bool)arg1 reason:(short)arg2;	// IMP=0x00000000002cfc15
- (void)processCloudPhotosLibraryStateChange:(_Bool)arg1;	// IMP=0x00000000002cfaa5
- (void)performOnceLibraryIsReadyForCPLManager:(CDUnknownBlockType)arg1;	// IMP=0x00000000002cf9d0
- (void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;	// IMP=0x00000000002cf832
- (_Bool)_checkForCPLReadinessAndCallBlocks;	// IMP=0x00000000002cf5b3
- (void)_callOutstandingCPLReadinessBlocks;	// IMP=0x00000000002cf3b6
- (void)_stopWaitingForCPLReadiness;	// IMP=0x00000000002cf335
- (void)cancelCPLReadinessBlocksAndStopWaiting;	// IMP=0x00000000002cf245
- (_Bool)_isAssetsdReadyForCPLManagerWithStatus:(id *)arg1;	// IMP=0x00000000002cf11c
- (_Bool)isReadyForCloudPhotoLibraryWithStatus:(id *)arg1;	// IMP=0x00000000002cedcb
- (id)libraryServicesManager;	// IMP=0x00000000002ced32
- (void)invalidate;	// IMP=0x00000000002ced20
- (id)initWithLibraryServicesManager:(id)arg1;	// IMP=0x00000000002ceca2

@end
