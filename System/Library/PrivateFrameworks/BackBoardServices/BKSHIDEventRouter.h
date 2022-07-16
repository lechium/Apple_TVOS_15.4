//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>

@class NSMutableSet, NSSet, NSString;
@protocol OS_dispatch_queue, _BKSHIDEventRouterDelegate;

@interface BKSHIDEventRouter : NSObject <BSDescriptionProviding>
{
    long long _destination;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableSet *_queue_hidEventDescriptors;	// 24 = 0x18
    id <_BKSHIDEventRouterDelegate> _queue_delegate;	// 32 = 0x20
    NSSet *_queue_cachedHidEventDescriptors;	// 40 = 0x28
}

+ (id)defaultFocusedAppEventRouter;	// IMP=0x000000000000a0ed
+ (id)defaultSystemAppEventRouter;	// IMP=0x000000000000a03e
+ (id)defaultEventRouters;	// IMP=0x0000000000009f77
+ (id)routerWithDestination:(long long)arg1;	// IMP=0x0000000000009f3f
- (void).cxx_destruct;	// IMP=0x0000000000009c9f
@property(readonly) long long destination; // @synthesize destination=_destination;
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000009be2
- (id)succinctDescription;	// IMP=0x0000000000009b92
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000009ad7
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000009a87
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009982
@property(readonly) unsigned long long hash;
- (void)_setDelegate:(id)arg1;	// IMP=0x00000000000098b1
- (_Bool)containsDescriptor:(id)arg1;	// IMP=0x000000000000983a
- (_Bool)specifiesDescriptor:(id)arg1;	// IMP=0x000000000000972d
- (void)removeHIDEventDescriptors:(id)arg1;	// IMP=0x000000000000968e
- (void)addHIDEventDescriptors:(id)arg1;	// IMP=0x00000000000095ef
@property(readonly, copy) NSSet *hidEventDescriptors; // @dynamic hidEventDescriptors;
- (id)_initWithDestination:(long long)arg1 hidEventDescriptors:(id)arg2;	// IMP=0x0000000000009444
- (id)init;	// IMP=0x00000000000093bd

// Remaining properties
@property(readonly) Class superclass;

@end
