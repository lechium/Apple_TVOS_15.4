//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLTextureArgument
{
    unsigned int _textureType:15;	// 64 = 0x40
    unsigned int _isDepthTexture:1;	// 65 = 0x41
    unsigned short _textureDataType;	// 66 = 0x42
}

- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000029e39
- (unsigned long long)textureDataType;	// IMP=0x0000000000029e28
- (_Bool)isDepthTexture;	// IMP=0x0000000000029e15
- (unsigned long long)textureType;	// IMP=0x0000000000029dff
- (id)initWithName:(id)arg1 access:(unsigned long long)arg2 isActive:(_Bool)arg3 locationIndex:(unsigned long long)arg4 arraySize:(unsigned long long)arg5 dataType:(unsigned long long)arg6 textureType:(unsigned long long)arg7 isDepthTexture:(_Bool)arg8;	// IMP=0x0000000000029d18

@end

