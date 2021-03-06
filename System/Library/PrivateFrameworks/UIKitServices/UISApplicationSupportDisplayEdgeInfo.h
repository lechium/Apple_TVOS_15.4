//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitServices/BSXPCCoding-Protocol.h>
#import <UIKitServices/NSCopying-Protocol.h>

@class NSNumber, NSString, UISApplicationSupportDisplayEdgeInsetsWrapper;

@interface UISApplicationSupportDisplayEdgeInfo : NSObject <BSXPCCoding, NSCopying>
{
    union {
        unsigned long long asInt;
        struct {
            unsigned int assertOnMutationAttempt:1;
        } flags;
    } _infoFlags;	// 8 = 0x8
    UISApplicationSupportDisplayEdgeInsetsWrapper *_peripheryInsets;	// 16 = 0x10
    NSNumber *_systemMinimumMargin;	// 24 = 0x18
    NSNumber *_homeAffordanceOverlayAllowance;	// 32 = 0x20
    UISApplicationSupportDisplayEdgeInsetsWrapper *_safeAreaInsetsPortrait;	// 40 = 0x28
    UISApplicationSupportDisplayEdgeInsetsWrapper *_safeAreaInsetsLandscapeLeft;	// 48 = 0x30
    UISApplicationSupportDisplayEdgeInsetsWrapper *_safeAreaInsetsPortraitUpsideDown;	// 56 = 0x38
    UISApplicationSupportDisplayEdgeInsetsWrapper *_safeAreaInsetsLandscapeRight;	// 64 = 0x40
}

+ (id)defaultDisplayEdgeInfoForceInsets:(_Bool)arg1;	// IMP=0x000000000000fef3
+ (id)defaultDisplayEdgeInfo;	// IMP=0x000000000000fedf
- (void).cxx_destruct;	// IMP=0x0000000000010a19
@property(retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsLandscapeRight; // @synthesize safeAreaInsetsLandscapeRight=_safeAreaInsetsLandscapeRight;
@property(retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsPortraitUpsideDown; // @synthesize safeAreaInsetsPortraitUpsideDown=_safeAreaInsetsPortraitUpsideDown;
@property(retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsLandscapeLeft; // @synthesize safeAreaInsetsLandscapeLeft=_safeAreaInsetsLandscapeLeft;
@property(retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsPortrait; // @synthesize safeAreaInsetsPortrait=_safeAreaInsetsPortrait;
@property(retain, nonatomic) NSNumber *homeAffordanceOverlayAllowance; // @synthesize homeAffordanceOverlayAllowance=_homeAffordanceOverlayAllowance;
@property(retain, nonatomic) NSNumber *systemMinimumMargin; // @synthesize systemMinimumMargin=_systemMinimumMargin;
@property(retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *peripheryInsets; // @synthesize peripheryInsets=_peripheryInsets;
@property(readonly, copy) NSString *description;
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x00000000000106ce
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x00000000000105d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000105a3
- (void)_copyFromOtherInfo:(id)arg1;	// IMP=0x0000000000010471
- (void)_performIvarUpdateIfAllowed:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ff54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

