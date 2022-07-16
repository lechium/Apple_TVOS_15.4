//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EAGLContext, NSLock;

@interface GLKTextureLoader : NSObject
{
    _Bool _supportsASTC_LDR;	// 8 = 0x8
    _Bool _supportsETC2;	// 9 = 0x9
    EAGLContext *_glContext;	// 16 = 0x10
    NSLock *_nsLock;	// 24 = 0x18
}

+ (id)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000019400
+ (id)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001935e
+ (id)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000192dc
+ (id)textureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001925a
+ (id)textureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000191d8
+ (id)textureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000019145
+ (id)textureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000190c3
+ (id)textureWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000019025
+ (id)commonCubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;	// IMP=0x000000000001877d
+ (id)commonCubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;	// IMP=0x000000000001818f
+ (id)commonTextureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;	// IMP=0x00000000000180ac
+ (id)commonTextureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id *)arg5 lock:(id)arg6 glContext:(id)arg7;	// IMP=0x0000000000017d6b
+ (id)commonTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;	// IMP=0x0000000000017b50
+ (id)commonTextureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;	// IMP=0x0000000000017a6d
+ (id)_textureWithTextureTXR:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000179e3
+ (id)_textureWithTexture:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000178fc
+ (void)unlockAndRestoreContext:(id)arg1 glContext:(id)arg2;	// IMP=0x00000000000178ba
+ (id)lockAndSwitchContext:(id)arg1 glContext:(id)arg2;	// IMP=0x0000000000017857
@property _Bool supportsETC2; // @synthesize supportsETC2=_supportsETC2;
@property _Bool supportsASTC_LDR; // @synthesize supportsASTC_LDR=_supportsASTC_LDR;
@property(retain) NSLock *nsLock; // @synthesize nsLock=_nsLock;
@property(retain) EAGLContext *glContext; // @synthesize glContext=_glContext;
- (void)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001a04e
- (void)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000019ff3
- (void)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000019e5b
- (void)textureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000019c20
- (void)textureWithContentsOfData:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000019a88
- (void)textureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 queue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000197d5
- (void)textureWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000194d7
- (void)textureWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001947c
- (void)dealloc;	// IMP=0x0000000000017800
- (id)initWithSharegroup:(id)arg1;	// IMP=0x000000000001769b

@end

