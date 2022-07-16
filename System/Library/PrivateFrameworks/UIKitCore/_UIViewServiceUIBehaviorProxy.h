//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIViewServiceUIBehaviorInterface-Protocol.h>

@class NSString, _UIViewServiceFencingControlProxy;

__attribute__((visibility("hidden")))
@interface _UIViewServiceUIBehaviorProxy <_UIViewServiceUIBehaviorInterface>
{
    int _remotePID;	// 8 = 0x8
    _UIViewServiceFencingControlProxy *_fencingControlProxy;	// 16 = 0x10
    int __automatic_invalidation_retainCount;	// 24 = 0x18
    _Bool __automatic_invalidation_invalidated;	// 28 = 0x1c
}

+ (id)proxyWrappingExportedObject:(id)arg1 forCommunicationWithPID:(int)arg2 exportedProtocol:(id)arg3;	// IMP=0x0000000000f5020d
- (void)dealloc;	// IMP=0x0000000000f502c1
- (_Bool)_isDeallocating;	// IMP=0x0000000000f501ea
- (_Bool)_tryRetain;	// IMP=0x0000000000f501ac
- (unsigned long long)retainCount;	// IMP=0x0000000000f50194
- (oneway void)release;	// IMP=0x0000000000f5010d
- (id)retain;	// IMP=0x0000000000f500ec
- (int)__automatic_invalidation_logic;	// IMP=0x0000000000f50003

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
