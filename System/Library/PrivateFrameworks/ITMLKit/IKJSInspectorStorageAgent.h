//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/RWIProtocolDOMStorageDomainHandler-Protocol.h>

@class IKJSInspectorController, NSString;

@interface IKJSInspectorStorageAgent : NSObject <RWIProtocolDOMStorageDomainHandler>
{
    IKJSInspectorController *_controller;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006d498
@property(readonly, nonatomic) __weak IKJSInspectorController *controller; // @synthesize controller=_controller;
- (id)_storageForStorageId:(id)arg1;	// IMP=0x000000000006d385
- (id)_storageIdForStorage:(id)arg1;	// IMP=0x000000000006d18e
- (void)_itemsCleared:(id)arg1;	// IMP=0x000000000006cf34
- (void)_itemRemoved:(id)arg1;	// IMP=0x000000000006cc67
- (void)_itemUpdated:(id)arg1;	// IMP=0x000000000006c937
- (void)_itemAdded:(id)arg1;	// IMP=0x000000000006c637
- (void)removeDOMStorageItemWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 storageId:(id)arg3 key:(id)arg4;	// IMP=0x000000000006c5a8
- (void)setDOMStorageItemWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 storageId:(id)arg3 key:(id)arg4 value:(id)arg5;	// IMP=0x000000000006c4fa
- (void)getDOMStorageItemsWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 storageId:(id)arg3;	// IMP=0x000000000006c23f
- (void)disableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c22a
- (void)enableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c21f
- (void)stopListeningForStorageNotifications;	// IMP=0x000000000006c1cc
- (void)startListeningForStorageNotifications;	// IMP=0x000000000006c091
- (void)dealloc;	// IMP=0x000000000006c01c
- (id)initWithInspectorController:(id)arg1;	// IMP=0x000000000006bfb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
