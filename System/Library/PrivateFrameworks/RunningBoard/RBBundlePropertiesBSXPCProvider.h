//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface RBBundlePropertiesBSXPCProvider : NSObject
{
    NSMapTable *_propertiesByIdentifier;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000005a14
- (id)debugDescription;	// IMP=0x000000000000576f
- (void)removePropertiesForIdentifier:(id)arg1;	// IMP=0x000000000000571b
- (id)propertiesForIdentifier:(id)arg1;	// IMP=0x000000000000565b
- (id)init;	// IMP=0x00000000000055ee

@end

