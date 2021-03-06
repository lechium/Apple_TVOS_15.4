//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PDS/PDSXPCConnectionVendor-Protocol.h>
#import <PDS/PDSXPCInterfaceVendor-Protocol.h>

@class NSString;

@interface PDSXPCAdapter : NSObject <PDSXPCInterfaceVendor, PDSXPCConnectionVendor>
{
}

+ (id)_sharedInstance;	// IMP=0x0000000000009174
+ (id)defaultConnectionVendor;	// IMP=0x00000000000090e1
+ (id)defaultInterfaceVendor;	// IMP=0x00000000000090cf
+ (void)setDisableXPC:(_Bool)arg1;	// IMP=0x00000000000090c3
+ (_Bool)disableXPC;	// IMP=0x00000000000090b7
- (id)connectionForMachService:(id)arg1;	// IMP=0x000000000000925d
- (id)interfaceWithProtocol:(id)arg1;	// IMP=0x0000000000009244
- (id)_init;	// IMP=0x0000000000009215

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

