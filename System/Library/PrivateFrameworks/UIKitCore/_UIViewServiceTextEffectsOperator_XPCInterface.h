//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIViewServiceDeputyXPCInterface-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIViewServiceTextEffectsOperator_XPCInterface : NSObject <_UIViewServiceDeputyXPCInterface>
{
}

- (id)connectionInvocation;	// IMP=0x0000000000f33421
- (SEL)connectionSelector;	// IMP=0x0000000000f33414
- (id)connectionProtocol;	// IMP=0x0000000000f33403
- (id)hostObjectInterface;	// IMP=0x0000000000f333fb
- (id)exportedInterface;	// IMP=0x0000000000f3334b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

