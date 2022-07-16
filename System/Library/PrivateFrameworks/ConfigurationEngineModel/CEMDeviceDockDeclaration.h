//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface CEMDeviceDockDeclaration <CEMRegisteredTypeProtocol>
{
    NSString *_payloadOrientation;	// 16 = 0x10
    NSNumber *_payloadPositionImmutable;	// 24 = 0x18
    NSNumber *_payloadAutohide;	// 32 = 0x20
    NSNumber *_payloadAutohideImmutable;	// 40 = 0x28
    NSNumber *_payloadMinimizeToApplication;	// 48 = 0x30
    NSNumber *_payloadMinimizeToApplicationImmutable;	// 56 = 0x38
    NSNumber *_payloadMagnification;	// 64 = 0x40
    NSNumber *_payloadMagnifyImmutable;	// 72 = 0x48
    NSNumber *_payloadLargesize;	// 80 = 0x50
    NSNumber *_payloadMagsizeImmutable;	// 88 = 0x58
    NSNumber *_payloadShowProcessIndicators;	// 96 = 0x60
    NSNumber *_payloadLaunchanim;	// 104 = 0x68
    NSNumber *_payloadLaunchanimImmutable;	// 112 = 0x70
    NSString *_payloadMineffect;	// 120 = 0x78
    NSNumber *_payloadMineffectImmutable;	// 128 = 0x80
    NSNumber *_payloadTilesize;	// 136 = 0x88
    NSNumber *_payloadSizeImmutable;	// 144 = 0x90
    NSArray *_payloadMCXDockSpecialFolders;	// 152 = 0x98
    NSNumber *_payloadAllowDockFixupOverride;	// 160 = 0xa0
    NSNumber *_payloadStaticOnly;	// 168 = 0xa8
    NSArray *_payloadStaticOthers;	// 176 = 0xb0
    NSArray *_payloadStaticApps;	// 184 = 0xb8
    NSNumber *_payloadContentsImmutable;	// 192 = 0xc0
    NSNumber *_payloadWindowtabbingImmutable;	// 200 = 0xc8
    NSNumber *_payloadDblclickbehaviorImmutable;	// 208 = 0xd0
    NSNumber *_payloadShowindicatorsImmutable;	// 216 = 0xd8
    NSNumber *_payloadShowRecents;	// 224 = 0xe0
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x0000000000036a8d
+ (id)buildWithIdentifier:(id)arg1 withOrientation:(id)arg2 withPositionImmutable:(id)arg3 withAutohide:(id)arg4 withAutohideImmutable:(id)arg5 withMinimizeToApplication:(id)arg6 withMinimizeToApplicationImmutable:(id)arg7 withMagnification:(id)arg8 withMagnifyImmutable:(id)arg9 withLargesize:(id)arg10 withMagsizeImmutable:(id)arg11 withShowProcessIndicators:(id)arg12 withLaunchanim:(id)arg13 withLaunchanimImmutable:(id)arg14 withMineffect:(id)arg15 withMineffectImmutable:(id)arg16 withTilesize:(id)arg17 withSizeImmutable:(id)arg18 withMCXDockSpecialFolders:(id)arg19 withAllowDockFixupOverride:(id)arg20 withStaticOnly:(id)arg21 withStaticOthers:(id)arg22 withStaticApps:(id)arg23 withContentsImmutable:(id)arg24 withWindowtabbingImmutable:(id)arg25 withDblclickbehaviorImmutable:(id)arg26 withShowindicatorsImmutable:(id)arg27 withShowRecents:(id)arg28;	// IMP=0x0000000000036382
+ (id)restrictionPayloadKeys;	// IMP=0x000000000003633a
+ (id)allowedPayloadKeys;	// IMP=0x000000000003614f
+ (id)profileType;	// IMP=0x0000000000036142
+ (id)registeredIdentifier;	// IMP=0x0000000000036135
+ (id)registeredClassName;	// IMP=0x0000000000036128
- (void).cxx_destruct;	// IMP=0x0000000000038688
@property(copy, nonatomic) NSNumber *payloadShowRecents; // @synthesize payloadShowRecents=_payloadShowRecents;
@property(copy, nonatomic) NSNumber *payloadShowindicatorsImmutable; // @synthesize payloadShowindicatorsImmutable=_payloadShowindicatorsImmutable;
@property(copy, nonatomic) NSNumber *payloadDblclickbehaviorImmutable; // @synthesize payloadDblclickbehaviorImmutable=_payloadDblclickbehaviorImmutable;
@property(copy, nonatomic) NSNumber *payloadWindowtabbingImmutable; // @synthesize payloadWindowtabbingImmutable=_payloadWindowtabbingImmutable;
@property(copy, nonatomic) NSNumber *payloadContentsImmutable; // @synthesize payloadContentsImmutable=_payloadContentsImmutable;
@property(copy, nonatomic) NSArray *payloadStaticApps; // @synthesize payloadStaticApps=_payloadStaticApps;
@property(copy, nonatomic) NSArray *payloadStaticOthers; // @synthesize payloadStaticOthers=_payloadStaticOthers;
@property(copy, nonatomic) NSNumber *payloadStaticOnly; // @synthesize payloadStaticOnly=_payloadStaticOnly;
@property(copy, nonatomic) NSNumber *payloadAllowDockFixupOverride; // @synthesize payloadAllowDockFixupOverride=_payloadAllowDockFixupOverride;
@property(copy, nonatomic) NSArray *payloadMCXDockSpecialFolders; // @synthesize payloadMCXDockSpecialFolders=_payloadMCXDockSpecialFolders;
@property(copy, nonatomic) NSNumber *payloadSizeImmutable; // @synthesize payloadSizeImmutable=_payloadSizeImmutable;
@property(copy, nonatomic) NSNumber *payloadTilesize; // @synthesize payloadTilesize=_payloadTilesize;
@property(copy, nonatomic) NSNumber *payloadMineffectImmutable; // @synthesize payloadMineffectImmutable=_payloadMineffectImmutable;
@property(copy, nonatomic) NSString *payloadMineffect; // @synthesize payloadMineffect=_payloadMineffect;
@property(copy, nonatomic) NSNumber *payloadLaunchanimImmutable; // @synthesize payloadLaunchanimImmutable=_payloadLaunchanimImmutable;
@property(copy, nonatomic) NSNumber *payloadLaunchanim; // @synthesize payloadLaunchanim=_payloadLaunchanim;
@property(copy, nonatomic) NSNumber *payloadShowProcessIndicators; // @synthesize payloadShowProcessIndicators=_payloadShowProcessIndicators;
@property(copy, nonatomic) NSNumber *payloadMagsizeImmutable; // @synthesize payloadMagsizeImmutable=_payloadMagsizeImmutable;
@property(copy, nonatomic) NSNumber *payloadLargesize; // @synthesize payloadLargesize=_payloadLargesize;
@property(copy, nonatomic) NSNumber *payloadMagnifyImmutable; // @synthesize payloadMagnifyImmutable=_payloadMagnifyImmutable;
@property(copy, nonatomic) NSNumber *payloadMagnification; // @synthesize payloadMagnification=_payloadMagnification;
@property(copy, nonatomic) NSNumber *payloadMinimizeToApplicationImmutable; // @synthesize payloadMinimizeToApplicationImmutable=_payloadMinimizeToApplicationImmutable;
@property(copy, nonatomic) NSNumber *payloadMinimizeToApplication; // @synthesize payloadMinimizeToApplication=_payloadMinimizeToApplication;
@property(copy, nonatomic) NSNumber *payloadAutohideImmutable; // @synthesize payloadAutohideImmutable=_payloadAutohideImmutable;
@property(copy, nonatomic) NSNumber *payloadAutohide; // @synthesize payloadAutohide=_payloadAutohide;
@property(copy, nonatomic) NSNumber *payloadPositionImmutable; // @synthesize payloadPositionImmutable=_payloadPositionImmutable;
@property(copy, nonatomic) NSString *payloadOrientation; // @synthesize payloadOrientation=_payloadOrientation;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000037f33
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000037981
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000036b74
- (id)assetReferences;	// IMP=0x0000000000036375
- (int)activationLevel;	// IMP=0x000000000003636a
- (_Bool)mustBeSupervised;	// IMP=0x0000000000036362
- (_Bool)multipleAllowed;	// IMP=0x000000000003635a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

