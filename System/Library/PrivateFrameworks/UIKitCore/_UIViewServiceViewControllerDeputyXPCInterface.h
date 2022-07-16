//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIViewServiceDeputyXPCInterface-Protocol.h>

@class NSString, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _UIViewServiceViewControllerDeputyXPCInterface : NSObject <_UIViewServiceDeputyXPCInterface>
{
    NSXPCInterface *_exportedInterface;	// 8 = 0x8
    NSXPCInterface *_remoteViewControllerInterface;	// 16 = 0x10
}

+ (id)interfaceWithExportedInterface:(id)arg1 remoteViewControllerInterface:(id)arg2;	// IMP=0x0000000000f49758
- (void).cxx_destruct;	// IMP=0x0000000000f4982c
- (id)connectionInvocation;	// IMP=0x0000000000f49810
- (SEL)connectionSelector;	// IMP=0x0000000000f49803
- (id)connectionProtocol;	// IMP=0x0000000000f497f2
- (id)hostObjectInterface;	// IMP=0x0000000000f497e4
- (id)exportedInterface;	// IMP=0x0000000000f497d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

