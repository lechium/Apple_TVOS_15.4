//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGMemoryPlannerPastSource-Protocol.h>

@class NSString, PHPhotoLibrary;
@protocol OS_os_log;

@interface PGMemoryPlannerPhotoKitSource : NSObject <PGMemoryPlannerPastSource>
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSObject<OS_os_log> *_loggingConnection;	// 16 = 0x10
}

+ (_Bool)translateLegacyMemoryCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 toNewMemoryCategory:(unsigned long long *)arg3 triggerType:(unsigned long long *)arg4;	// IMP=0x00000000005a11b7
- (void).cxx_destruct;	// IMP=0x00000000005a118f
- (id)triggeredMemoriesFromPersistedMemories:(id)arg1 withGraph:(id)arg2 progressReporter:(id)arg3;	// IMP=0x00000000005a03e3
- (id)memoriesToAvoidForConfiguration:(id)arg1 withGraph:(id)arg2 progressReporter:(id)arg3;	// IMP=0x000000000059fff8
- (id)pastMemoriesForConfiguration:(id)arg1 withGraph:(id)arg2 progressReporter:(id)arg3;	// IMP=0x000000000059fb87
- (id)initWithPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;	// IMP=0x000000000059faee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

