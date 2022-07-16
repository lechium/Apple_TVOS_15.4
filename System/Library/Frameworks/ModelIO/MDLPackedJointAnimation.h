//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ModelIO/MDLJointAnimation-Protocol.h>
#import <ModelIO/NSCopying-Protocol.h>

@class MDLAnimatedQuaternionArray, MDLAnimatedVector3Array, NSArray;

@interface MDLPackedJointAnimation <NSCopying, MDLJointAnimation>
{
    NSArray *_jointPaths;	// 8 = 0x8
    MDLAnimatedVector3Array *_translations;	// 16 = 0x10
    MDLAnimatedQuaternionArray *_rotations;	// 24 = 0x18
    MDLAnimatedVector3Array *_scales;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000438c3c
@property(readonly, nonatomic) MDLAnimatedVector3Array *scales; // @synthesize scales=_scales;
@property(readonly, nonatomic) MDLAnimatedQuaternionArray *rotations; // @synthesize rotations=_rotations;
@property(readonly, nonatomic) MDLAnimatedVector3Array *translations; // @synthesize translations=_translations;
@property(readonly, nonatomic) NSArray *jointPaths; // @synthesize jointPaths=_jointPaths;
- (id)initWithName:(id)arg1 jointPaths:(id)arg2;	// IMP=0x00000000004389df
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004388e2

@end
