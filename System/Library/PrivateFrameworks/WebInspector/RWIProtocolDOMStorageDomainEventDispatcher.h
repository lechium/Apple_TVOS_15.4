//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RWIProtocolDOMStorageDomainEventDispatcher : NSObject
{
    struct AugmentableInspectorController *_controller;	// 8 = 0x8
}

- (void)domStorageItemUpdatedWithStorageId:(id)arg1 key:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;	// IMP=0x000000000002c534
- (void)domStorageItemAddedWithStorageId:(id)arg1 key:(id)arg2 newValue:(id)arg3;	// IMP=0x000000000002bd71
- (void)domStorageItemRemovedWithStorageId:(id)arg1 key:(id)arg2;	// IMP=0x000000000002b6f4
- (void)domStorageItemsClearedWithStorageId:(id)arg1;	// IMP=0x000000000002b1db
- (id)initWithController:(struct AugmentableInspectorController *)arg1;	// IMP=0x000000000002b19e

@end
