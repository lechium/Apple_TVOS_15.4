//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSBundle;

@interface PXGNamedImageTextureProvider
{
    NSBundle *_bundle;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000007c6478
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void)_requestTextureForImageWithName:(id)arg1 inBundle:(id)arg2 isSystemImage:(_Bool)arg3 tintColor:(id)arg4 imageConfiguration:(id)arg5 userInterfaceDirection:(unsigned long long)arg6 screenScale:(double)arg7 requestID:(int)arg8;	// IMP=0x00000000007c6145
- (struct _NSRange)requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 geometries:(CDStruct_4f725fed *)arg2 styles:(CDStruct_76b550e2 *)arg3 infos:(CDStruct_9d1ebe49 *)arg4 inLayout:(id)arg5;	// IMP=0x00000000007c5d0e

@end

