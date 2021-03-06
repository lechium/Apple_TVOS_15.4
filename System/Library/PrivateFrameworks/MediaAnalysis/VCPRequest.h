//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPRequest : NSObject
{
    _Bool _useCPUOnly;	// 8 = 0x8
    unsigned int _revision;	// 12 = 0xc
    int _width;	// 16 = 0x10
    int _height;	// 20 = 0x14
    int _maxNumHands;	// 24 = 0x18
    int _humanActionWindowSize;	// 28 = 0x1c
}

@property(readonly, nonatomic) unsigned int revision; // @synthesize revision=_revision;
@property(readonly, nonatomic) _Bool useCPUOnly; // @synthesize useCPUOnly=_useCPUOnly;
- (_Bool)cleanupWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c6928
- (unsigned int)preferredPixelFormat;	// IMP=0x00000000001c6920
- (struct CGSize)preferredInputSizeWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c68c0
- (_Bool)updateWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c6799
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000001c6456
- (id)init;	// IMP=0x00000000001c63cd

@end

