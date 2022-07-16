//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXTileTransitionAnimationCoordinator-Protocol.h>

@class NSString, PXBasicTileAnimationOptions;

@interface PXPhotosDetailsHeaderTileTransitionAnimationCoordinator : NSObject <PXTileTransitionAnimationCoordinator>
{
    PXBasicTileAnimationOptions *__basicAnimationOptions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000650f46
@property(readonly, nonatomic) PXBasicTileAnimationOptions *_basicAnimationOptions; // @synthesize _basicAnimationOptions=__basicAnimationOptions;
- (_Bool)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(struct PXTileIdentifier)arg1 fromGeometry:(struct PXTileGeometry)arg2 fromUserData:(id)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;	// IMP=0x0000000000650f34
- (_Bool)getFinalGeometry:(out struct PXTileGeometry *)arg1 finalUserData:(out id *)arg2 forDisappearingTileWithIdentifier:(struct PXTileIdentifier)arg3 fromGeometry:(struct PXTileGeometry)arg4 fromUserData:(id)arg5;	// IMP=0x0000000000650efc
- (_Bool)getInitialGeometry:(out struct PXTileGeometry *)arg1 initialUserData:(out id *)arg2 forAppearingTileWithIdentifier:(struct PXTileIdentifier)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;	// IMP=0x0000000000650ec4
- (id)optionsForAnimatingTileWithIdentifier:(struct PXTileIdentifier)arg1 animationType:(long long)arg2 fromGeometry:(struct PXTileGeometry)arg3 fromUserData:(id)arg4 toGeometry:(struct PXTileGeometry)arg5 toUserData:(id)arg6;	// IMP=0x0000000000650eb2
- (id)init;	// IMP=0x0000000000650e31

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
