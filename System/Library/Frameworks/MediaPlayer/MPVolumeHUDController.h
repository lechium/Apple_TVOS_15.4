//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableSet;

@interface MPVolumeHUDController : NSObject
{
    NSHashTable *_scenes;	// 8 = 0x8
    NSMutableSet *_displays;	// 16 = 0x10
    NSMutableSet *_categories;	// 24 = 0x18
    _Bool _needsUpdate;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000000181f67
- (void).cxx_destruct;	// IMP=0x0000000000181f16
- (void)_updateVisibilityForVolumeDisplays:(id)arg1 inWindowScene:(id)arg2;	// IMP=0x00000000001818ca
- (void)_updateVisibility;	// IMP=0x0000000000181234
- (void)_addCategory:(id)arg1;	// IMP=0x00000000001811e8
- (void)unregisterView:(id)arg1 inContext:(id)arg2;	// IMP=0x00000000001811d6
- (void)registerView:(id)arg1 inContext:(id)arg2;	// IMP=0x00000000001811c4
@property(readonly, nonatomic) id mainContext;
- (void)setNeedsUpdate;	// IMP=0x000000000018114e
- (void)removeVolumeDisplay:(id)arg1;	// IMP=0x0000000000181053
- (void)addVolumeDisplay:(id)arg1;	// IMP=0x0000000000180f58
- (id)init;	// IMP=0x0000000000180ebc

@end

