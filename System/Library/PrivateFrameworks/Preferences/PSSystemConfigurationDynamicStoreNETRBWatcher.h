//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PSSystemConfigurationDynamicStoreNETRBWatcher : NSObject
{
    struct __CFRunLoopSource *_scRunLoopSource;	// 8 = 0x8
    struct __SCDynamicStore *_scDynamicStore;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x000000000004a1fc
- (_Bool)isDataEnabled;	// IMP=0x000000000004a330
- (_Bool)isTetheringEnabled;	// IMP=0x000000000004a328
- (_Bool)shouldShowTethering;	// IMP=0x000000000004a320
- (void)sendStateUpdate;	// IMP=0x000000000004a31a
- (void)dealloc;	// IMP=0x000000000004a2b0
- (id)init;	// IMP=0x000000000004a281

@end
