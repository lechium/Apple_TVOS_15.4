//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIHomeShareMediaLibraryManager-Protocol.h>

@class NSArray, NSMutableArray, NSString, VUIMediaLibraryManager;
@protocol OS_dispatch_queue, VUIHomeShareMediaLibraryManagerDelegate;

__attribute__((visibility("hidden")))
@interface VUIMPHomeShareMediaLibraryManager : NSObject <VUIHomeShareMediaLibraryManager>
{
    id <VUIHomeShareMediaLibraryManagerDelegate> _delegate;	// 8 = 0x8
    VUIMediaLibraryManager *_manager;	// 16 = 0x10
    NSMutableArray *_mutableHomeShareMediaLibraries;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;	// 32 = 0x20
}

+ (id)_sharedMPMediaLibraries;	// IMP=0x00000000001345b8
- (void).cxx_destruct;	// IMP=0x0000000000134c71
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property(retain, nonatomic) NSMutableArray *mutableHomeShareMediaLibraries; // @synthesize mutableHomeShareMediaLibraries=_mutableHomeShareMediaLibraries;
@property(nonatomic) __weak VUIMediaLibraryManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <VUIHomeShareMediaLibraryManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegateHomeShareMediaLibrariesDidUpdate:(id)arg1 withChangeSet:(id)arg2;	// IMP=0x0000000000134b64
- (void)_updateMediaLibrariesWithSharedMPMediaLibraries:(id)arg1;	// IMP=0x00000000001348bb
- (id)_homeShareMediaLibraries;	// IMP=0x00000000001346a9
- (void)_handleAvailableMediaLibrariesDidChange:(id)arg1;	// IMP=0x0000000000134474
- (void)endDiscoveringMediaLibraries;	// IMP=0x000000000013445b
- (void)beginDiscoveringMediaLibraries;	// IMP=0x0000000000134442
@property(readonly, copy, nonatomic) NSArray *homeShareMediaLibraries;
- (void)dealloc;	// IMP=0x000000000013424c
- (id)initWithManager:(id)arg1;	// IMP=0x0000000000134135

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

