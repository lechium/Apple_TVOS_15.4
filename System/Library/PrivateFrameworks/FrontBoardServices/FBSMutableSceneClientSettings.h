//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/BSDebugDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSXPCSecureCoding-Protocol.h>

@class FBSSceneIdentityToken, NSOrderedSet, NSString;

@interface FBSMutableSceneClientSettings <BSDebugDescriptionProviding, BSXPCSecureCoding>
{
}

+ (_Bool)_isMutable;	// IMP=0x000000000005776c
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000057724
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000576ec
- (id)otherSettings;	// IMP=0x000000000005769d
@property(copy, nonatomic) FBSSceneIdentityToken *preferredSceneHostIdentity; // @dynamic preferredSceneHostIdentity;
@property(copy, nonatomic) NSString *preferredSceneHostIdentifier; // @dynamic preferredSceneHostIdentifier;
@property(nonatomic) long long preferredInterfaceOrientation; // @dynamic preferredInterfaceOrientation;
@property(nonatomic) double preferredLevel; // @dynamic preferredLevel;
@property(copy, nonatomic, setter=_setLayers:) NSOrderedSet *layers; // @dynamic layers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

