//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface REInterfaceCache
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_supportedInterfaces;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e1d88
- (void)enumerateExportedMethodsOfProtocol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e1cf0
- (void)enumerateExportedMethodsOfClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e1c6a
- (void)enumerateExportedPropertiesOfProtocol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e1bd2
- (void)enumerateExportedPropertiesOfClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e1b4c
- (_Bool)exportedInterfaceProtocol:(id)arg1;	// IMP=0x00000000000e1ac9
- (_Bool)exportedInterfaceClass:(Class)arg1;	// IMP=0x00000000000e1a62
- (_Bool)_interface:(id)arg1 implementsInterface:(id)arg2;	// IMP=0x00000000000e199a
- (void)_enumerateMethodsOfInterface:(id)arg1 forProtocol:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e17ad
- (void)_enumeratePropertiesOfInterface:(id)arg1 forProtocol:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e15c0
- (id)_accessInterfaceForKey:(id)arg1;	// IMP=0x00000000000e1455
- (id)_queue_valueForKey:(id)arg1 level:(unsigned long long)arg2;	// IMP=0x00000000000e03e1
- (id)_supportedProtocols;	// IMP=0x00000000000e0375
- (id)_init;	// IMP=0x00000000000e02e0
- (_Bool)_supportsCache;	// IMP=0x00000000000e0265

@end

