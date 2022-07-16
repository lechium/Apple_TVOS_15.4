//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextureIO/NSCopying-Protocol.h>

@class MISSING_TYPE, NSArray, NSMutableArray;
@protocol TXRBufferAllocator;

@interface TXRTexture : NSObject <NSCopying>
{
    id <TXRBufferAllocator> _bufferAllocator;	// 8 = 0x8
    NSMutableArray *_mipmapLevels;	// 16 = 0x10
    MISSING_TYPE *_dimensions;	// 32 = 0x20
    _Bool _cubemap;	// 48 = 0x30
    unsigned long long _pixelFormat;	// 56 = 0x38
    unsigned long long _alphaInfo;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000049c6
@property(readonly, nonatomic) unsigned long long alphaInfo; // @synthesize alphaInfo=_alphaInfo;
@property(readonly, nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly, nonatomic) _Bool cubemap; // @synthesize cubemap=_cubemap;
@property(readonly, nonatomic) MISSING_TYPE *dimensions; // @synthesize dimensions=_dimensions;
@property(readonly, nonatomic) NSArray *mipmapLevels; // @synthesize mipmapLevels=_mipmapLevels;
- (id)copyWithPixelFormat:(unsigned long long)arg1 options:(id)arg2 bufferAllocator:(id)arg3;	// IMP=0x0000000000004959
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000473c
- (void)generateMipmapsForRange:(struct _NSRange)arg1 filter:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000004186
- (void)reformat:(unsigned long long)arg1 gammaDegamma:(_Bool)arg2 bufferAllocator:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000003c2c
- (_Bool)exportToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003b62
- (id)exportToAssetCatalogWithName:(id)arg1 location:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000003abd
- (id)initWithData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000003a4f
- (id)initWithDimensions:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 alphaInfo:(unsigned long long)arg3 mipmapLevelCount:(unsigned long long)arg4 arrayLength:(_Bool)arg5 cubemap:(id)arg6 bufferAllocator: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000003850
- (id)initWithContentsOfURL:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000003760
- (id)initWithDataSourceProvider:(id)arg1;	// IMP=0x0000000000003556

@end

