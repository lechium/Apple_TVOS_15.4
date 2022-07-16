//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateComponentsFormatter;
@protocol PXGViewSource;

@interface PXGDecorationTextureProvider
{
    id <PXGViewSource> _overlayViewSource;	// 8 = 0x8
    NSDateComponentsFormatter *_videoDurationFormatter;	// 16 = 0x10
}

+ (void)_drawWithDecorationInfo:(struct PXGDecorationSpriteInfo)arg1 solidColorOverlay:(id)arg2 debugDecoration:(id)arg3 cornerRadius:(CDStruct_2bd92d94)arg4 context:(struct CGContext *)arg5 viewport:(struct CGRect)arg6 screenScale:(double)arg7 viewEnvironment:(id)arg8 userInterfaceDirection:(unsigned long long)arg9 videoDurationFormatter:(id)arg10;	// IMP=0x00000000001eb050
- (void).cxx_destruct;	// IMP=0x00000000001ea6fc
@property(readonly, nonatomic) NSDateComponentsFormatter *videoDurationFormatter; // @synthesize videoDurationFormatter=_videoDurationFormatter;
@property(nonatomic) __weak id <PXGViewSource> overlayViewSource; // @synthesize overlayViewSource=_overlayViewSource;
- (void)_requestViewTextureForDecorationInfo:(struct PXGDecorationSpriteInfo)arg1 customViewClass:(Class)arg2 userData:(id)arg3 decorationOptions:(unsigned long long)arg4 requestID:(int)arg5;	// IMP=0x00000000001ea604
- (void)_requestTextureForDecorationInfo:(struct PXGDecorationSpriteInfo)arg1 solidColorOverlay:(id)arg2 debugDecoration:(id)arg3 targetSize:(struct CGSize)arg4 cornerRadius:(CDStruct_2bd92d94)arg5 screenScale:(double)arg6 requestID:(int)arg7 viewEnvironment:(id)arg8 userInterfaceDirection:(unsigned long long)arg9;	// IMP=0x00000000001e9eaf
- (struct _NSRange)requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 geometries:(CDStruct_4f725fed *)arg2 styles:(CDStruct_76b550e2 *)arg3 infos:(CDStruct_9d1ebe49 *)arg4 inLayout:(id)arg5;	// IMP=0x00000000001e8ec8
- (id)init;	// IMP=0x00000000001e8e6b

@end

