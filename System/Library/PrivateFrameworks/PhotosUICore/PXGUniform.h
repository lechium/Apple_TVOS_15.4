//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;
@protocol MTLTexture;

@interface PXGUniform : NSObject
{
    float _floatValue;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    MISSING_TYPE *_float2Value;	// 32 = 0x20
    struct CGImage *_image;	// 40 = 0x28
    CDUnknownBlockType _textureProvider;	// 48 = 0x30
    long long _bytesLength;	// 56 = 0x38
    const void *_bytes;	// 64 = 0x40
    id <MTLTexture> _cachedTexture;	// 72 = 0x48
    MISSING_TYPE *_float3Value;	// 80 = 0x50
    MISSING_TYPE *_float4Value;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000006dfc8b
@property(retain, nonatomic) id <MTLTexture> cachedTexture; // @synthesize cachedTexture=_cachedTexture;
@property(readonly, nonatomic) const void *bytes; // @synthesize bytes=_bytes;
@property(readonly, nonatomic) long long bytesLength; // @synthesize bytesLength=_bytesLength;
@property(copy, nonatomic) CDUnknownBlockType textureProvider; // @synthesize textureProvider=_textureProvider;
@property(nonatomic) struct CGImage *image; // @synthesize image=_image;
@property(nonatomic) MISSING_TYPE *float4Value; // @synthesize float4Value=_float4Value;
@property(nonatomic) MISSING_TYPE *float3Value; // @synthesize float3Value=_float3Value;
@property(nonatomic) MISSING_TYPE *float2Value; // @synthesize float2Value=_float2Value;
@property(nonatomic) float floatValue; // @synthesize floatValue=_floatValue;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *declaration;
- (id)bindableTextureForDevice:(id)arg1;	// IMP=0x00000000006df990
@property(readonly, nonatomic) MISSING_TYPE *encodableValue;
- (id)parameterDeclarationWithBindingIndex:(long long)arg1;	// IMP=0x00000000006df618
- (_Bool)isEquivalentToUniform:(id)arg1;	// IMP=0x00000000006df554
- (id)description;	// IMP=0x00000000006df437
@property(readonly, nonatomic) unsigned long long bindType;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00000000006df243
- (id)init;	// IMP=0x00000000006df1c9

@end

