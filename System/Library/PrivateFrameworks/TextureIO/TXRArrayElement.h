//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextureIO/NSCopying-Protocol.h>

@class NSArray, NSMutableArray;

@interface TXRArrayElement : NSObject <NSCopying>
{
    NSMutableArray *_faces;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000301c
@property(readonly) NSArray *faces; // @synthesize faces=_faces;
- (void)setImage:(id)arg1 atFace:(unsigned long long)arg2;	// IMP=0x0000000000002ff2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002de2
- (id)initAsLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 dimensions:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4 alphaInfo:(_Bool)arg5 cubemap:(id)arg6 bufferAllocator: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000002cb5
- (id)initAsLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 cubemap:(_Bool)arg3 dataSourceProvider:(id)arg4;	// IMP=0x0000000000002b97

@end

