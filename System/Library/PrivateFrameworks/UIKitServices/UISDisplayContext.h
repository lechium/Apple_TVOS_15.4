//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitServices/BSXPCCoding-Protocol.h>
#import <UIKitServices/NSCopying-Protocol.h>
#import <UIKitServices/NSMutableCopying-Protocol.h>

@class FBSDisplayConfiguration, NSString, UISApplicationSupportDisplayEdgeInfo, UISDisplayShape;

@interface UISDisplayContext : NSObject <BSXPCCoding, NSCopying, NSMutableCopying>
{
    FBSDisplayConfiguration *_displayConfiguration;	// 8 = 0x8
    UISApplicationSupportDisplayEdgeInfo *_displayEdgeInfo;	// 16 = 0x10
    unsigned long long _artworkSubtype;	// 24 = 0x18
    unsigned long long _userInterfaceStyle;	// 32 = 0x20
    UISDisplayShape *_exclusionArea;	// 40 = 0x28
}

+ (id)defaultContext;	// IMP=0x00000000000124d2
- (void).cxx_destruct;	// IMP=0x0000000000012e76
@property(readonly, nonatomic) UISDisplayShape *exclusionArea; // @synthesize exclusionArea=_exclusionArea;
@property(readonly, nonatomic) unsigned long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(readonly, nonatomic) unsigned long long artworkSubtype; // @synthesize artworkSubtype=_artworkSubtype;
@property(readonly, nonatomic) UISApplicationSupportDisplayEdgeInfo *displayEdgeInfo; // @synthesize displayEdgeInfo=_displayEdgeInfo;
@property(readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration; // @synthesize displayConfiguration=_displayConfiguration;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000129d0
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000129a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012997
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x00000000000128a7
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000012819
- (id)_initWithDisplayContext:(id)arg1;	// IMP=0x000000000001272a
- (id)initWithDisplayConfiguration:(id)arg1 displayEdgeInfo:(id)arg2 exclusionArea:(id)arg3;	// IMP=0x000000000001263d
- (id)initWithDisplayConfiguration:(id)arg1 displayEdgeInfo:(id)arg2;	// IMP=0x0000000000012628
- (id)initWithDisplayConfiguration:(id)arg1;	// IMP=0x0000000000012611

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

