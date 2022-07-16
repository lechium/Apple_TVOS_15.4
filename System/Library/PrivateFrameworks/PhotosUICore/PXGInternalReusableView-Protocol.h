//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXScrollViewController, _PXGReusableViewInfo;
@protocol NSCopying, PXGInternalReusableView, PXGSpriteTexture;

@protocol PXGInternalReusableView <NSObject>
@property(readonly, nonatomic) _Bool shouldReuseWhenInvisible;
- (_Bool)shouldReloadForUserData:(id <NSCopying>)arg1;
- (void)pxg_shiftPosition:(struct CGPoint)arg1;
- (void)pxg_configureWithTexture:(id <PXGSpriteTexture>)arg1 geometry:(CDStruct_4f725fed *)arg2 info:(CDStruct_9d1ebe49 *)arg3 style:(CDStruct_76b550e2 *)arg4 textureInfo:(CDStruct_183601bc *)arg5 resizableCapInsets:(CDStruct_0054b44d)arg6 reusableViewInfo:(_PXGReusableViewInfo *)arg7 screenScale:(double)arg8;
- (void)pxg_prepareForReuse;
- (void)pxg_becomeReusable;
- (void)pxg_removeFromSuperview;
- (_Bool)pxg_hasSuperview;
- (void)pxg_addToHostingView:(id <PXGInternalReusableView>)arg1;
- (void)pxg_addToScrollViewController:(PXScrollViewController *)arg1;
@end

