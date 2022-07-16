//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, PXContextualMemoriesSettings;

@interface PXContextualMemoriesSettingsController : NSObject
{
    _Bool _requestingUpdates;	// 8 = 0x8
    PXContextualMemoriesSettings *_settings;	// 16 = 0x10
    NSMutableArray *_completionHandlers;	// 24 = 0x18
    NSMutableArray *_registrationIdentifiers;	// 32 = 0x20
}

+ (id)sharedController;	// IMP=0x000000000042adf5
- (void).cxx_destruct;	// IMP=0x000000000042ac30
@property(retain, nonatomic) NSMutableArray *registrationIdentifiers; // @synthesize registrationIdentifiers=_registrationIdentifiers;
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(nonatomic, getter=isRequestingUpdates) _Bool requestingUpdates; // @synthesize requestingUpdates=_requestingUpdates;
@property(readonly, nonatomic) PXContextualMemoriesSettings *settings; // @synthesize settings=_settings;
- (void)unregisterForLocationPrefetchingWithIdentifier:(id)arg1;	// IMP=0x000000000042aa8c
- (void)registerForLocationPrefetchingWithIdentifier:(id)arg1;	// IMP=0x000000000042a954
- (void)requestUpdatedContextualMemoriesSettingsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000042a779
- (id)init;	// IMP=0x000000000042a6ed

@end

