//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIBoundingPathBitmap;

__attribute__((visibility("hidden")))
@interface _UIScreenComplexBoundingPathUtilities
{
    long long _type;	// 8 = 0x8
    _UIBoundingPathBitmap *_bitmap;	// 16 = 0x10
}

+ (_Bool)isScreenSupported:(id)arg1;	// IMP=0x000000000076ec0a
- (void).cxx_destruct;	// IMP=0x0000000000770843
- (void)_loadBitmapForScreen:(id)arg1 type:(long long)arg2;	// IMP=0x00000000007702f4
- (id)boundingPathForWindow:(id)arg1;	// IMP=0x000000000076ed82
- (id)initWithScreen:(id)arg1;	// IMP=0x000000000076ec58

@end

