//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AFPeerMap : NSObject
{
    NSMutableDictionary *_objectsByUUID;	// 8 = 0x8
    NSMutableDictionary *_uuidsByAssistantIdentifier;	// 16 = 0x10
    NSMutableDictionary *_uuidsByRapportIdentifier;	// 24 = 0x18
    NSMutableDictionary *_uuidsByIdsDeviceIdentifier;	// 32 = 0x20
    NSMutableDictionary *_uuidsByHomeKitIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000167f29
- (void)_cleanUpUUIDMapsForPeerInfo:(id)arg1;	// IMP=0x0000000000167e03
- (id)_getUUIDAndUpdateIDMapsForPeerInfo:(id)arg1;	// IMP=0x0000000000167526
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001673d8
- (void)removeObjectForPeerInfo:(id)arg1;	// IMP=0x000000000016735c
- (void)setObject:(id)arg1 forPeerInfo:(id)arg2;	// IMP=0x00000000001672e1
- (id)objectForPeerInfo:(id)arg1;	// IMP=0x0000000000167281
- (id)init;	// IMP=0x00000000001671c7

@end

