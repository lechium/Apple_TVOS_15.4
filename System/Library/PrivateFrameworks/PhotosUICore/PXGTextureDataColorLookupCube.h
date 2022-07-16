//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSData;
@protocol MTLDevice, MTLTexture;

@interface PXGTextureDataColorLookupCube
{
    id <MTLDevice> _device;	// 24 = 0x18
    id <MTLTexture> _texture;	// 32 = 0x20
    unsigned long long _pixelFormat;	// 40 = 0x28
    NSData *_data;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000008ba15
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (MISSING_TYPE *)center;	// IMP=0x000000000008b909
- (id)textureData;	// IMP=0x000000000008b8f4
- (id)createTextureWithDevice:(id)arg1;	// IMP=0x000000000008b6e3
- (_Bool)shouldCache;	// IMP=0x000000000008b6db
- (id)init;	// IMP=0x000000000008b661
- (id)initWithData:(id)arg1 edgeSize:(long long)arg2 pixelFormat:(unsigned long long)arg3;	// IMP=0x000000000008b5c7

@end

