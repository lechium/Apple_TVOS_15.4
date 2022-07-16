//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/_GCControllerComponentDescription-Protocol.h>

@class GCDeviceLight, GCLightXPCProxyClientEndpoint, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCLightXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription>
{
    GCDeviceLight *_initialLight;	// 8 = 0x8
    GCLightXPCProxyClientEndpoint *_materializedObject;	// 16 = 0x10
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004a0d6
- (void).cxx_destruct;	// IMP=0x000000000004a5f7
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (id)materializeWithContext:(id)arg1;	// IMP=0x000000000004a2fe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004a290
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004a1a7
- (id)init;	// IMP=0x000000000004a184
- (id)initWithIdentifier:(id)arg1 initialLight:(id)arg2;	// IMP=0x000000000004a0de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
