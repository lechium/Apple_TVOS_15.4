//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/NSObject-Protocol.h>

@class BKSAnimationFenceHandle, BSAnimationSettings, NSString, NSValue;
@protocol PBSPictureInPictureDelegateServiceInterface;

@protocol PBSPictureInPictureServiceInterface <NSObject>
- (void)applyPictureInPictureInsetsValue:(NSValue *)arg1 fromSource:(NSString *)arg2 withAnimationSettings:(BSAnimationSettings *)arg3 usingAnimationFence:(BKSAnimationFenceHandle *)arg4;
- (void)mutePictureInPicture:(_Bool)arg1;
- (void)expandPictureInPicture;
- (void)movePictureInPicture;
- (void)cancelPictureInPictureFromPlayerInterface:(long long)arg1;
- (void)fetchCurrentPictureInPictureStateWithReply:(void (^)(PBSPictureInPictureState *, NSError *))arg1;
- (void)setServiceDelegate:(id <PBSPictureInPictureDelegateServiceInterface>)arg1;
@end
