//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface CUNetInterfaceMonitor : NSObject
{
    _Bool _invalidateCalled;	// 8 = 0x8
    _Bool _invalidateDone;	// 9 = 0x9
    struct __SCDynamicStore *_scStore;	// 16 = 0x10
    struct LogCategory *_ucat;	// 24 = 0x18
    unsigned int _controlFlags;	// 32 = 0x20
    unsigned int _flags;	// 36 = 0x24
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    CDUnknownBlockType _invalidationHandler;	// 48 = 0x30
    NSString *_label;	// 56 = 0x38
    CDUnknownBlockType _flagsChangedHandler;	// 64 = 0x40
    NSArray *_interfaces;	// 72 = 0x48
    CDUnknownBlockType _interfacesChangedHandler;	// 80 = 0x50
    CDUnknownBlockType _primaryIPChangedHandler;	// 88 = 0x58
    CDUnknownBlockType _primaryNetworkChangedHandler;	// 96 = 0x60
    NSString *_primaryNetworkSignature;	// 104 = 0x68
    CDUnion_fab80606 _primaryIPv4Addr;	// 112 = 0x70
    CDUnion_fab80606 _primaryIPv6Addr;	// 140 = 0x8c
}

- (void).cxx_destruct;	// IMP=0x0000000000078292
@property(readonly, copy, nonatomic) NSString *primaryNetworkSignature; // @synthesize primaryNetworkSignature=_primaryNetworkSignature;
@property(copy, nonatomic) CDUnknownBlockType primaryNetworkChangedHandler; // @synthesize primaryNetworkChangedHandler=_primaryNetworkChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType primaryIPChangedHandler; // @synthesize primaryIPChangedHandler=_primaryIPChangedHandler;
@property(readonly, nonatomic) CDUnion_fab80606 primaryIPv6Addr; // @synthesize primaryIPv6Addr=_primaryIPv6Addr;
@property(readonly, nonatomic) CDUnion_fab80606 primaryIPv4Addr; // @synthesize primaryIPv4Addr=_primaryIPv4Addr;
@property(copy, nonatomic) CDUnknownBlockType interfacesChangedHandler; // @synthesize interfacesChangedHandler=_interfacesChangedHandler;
@property(copy, nonatomic) NSArray *interfaces; // @synthesize interfaces=_interfaces;
@property(copy, nonatomic) CDUnknownBlockType flagsChangedHandler; // @synthesize flagsChangedHandler=_flagsChangedHandler;
@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int controlFlags; // @synthesize controlFlags=_controlFlags;
- (void)_primaryIPChanged:(_Bool)arg1;	// IMP=0x0000000000077dcc
- (void)_networkInterfacesChanged:(_Bool)arg1;	// IMP=0x000000000007783a
- (void)_ensureStopped;	// IMP=0x00000000000777c7
- (void)_ensureStarted;	// IMP=0x0000000000077481
- (void)_invalidated;	// IMP=0x00000000000773c4
- (void)_invalidate;	// IMP=0x0000000000077344
- (void)invalidate;	// IMP=0x00000000000772f9
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007726e
- (id)description;	// IMP=0x00000000000771e6
- (void)dealloc;	// IMP=0x0000000000077199
- (id)init;	// IMP=0x000000000007711e

@end

