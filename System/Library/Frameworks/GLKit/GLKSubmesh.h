//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GLKMesh, GLKMeshBuffer, NSString;

@interface GLKSubmesh : NSObject
{
    unsigned int _type;	// 8 = 0x8
    unsigned int _mode;	// 12 = 0xc
    int _elementCount;	// 16 = 0x10
    GLKMeshBuffer *_elementBuffer;	// 24 = 0x18
    GLKMesh *_mesh;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000840f
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak GLKMesh *mesh; // @synthesize mesh=_mesh;
@property(readonly, nonatomic) GLKMeshBuffer *elementBuffer; // @synthesize elementBuffer=_elementBuffer;
@property(readonly, nonatomic) int elementCount; // @synthesize elementCount=_elementCount;
@property(readonly, nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (id)initWithMesh:(id)arg1 submesh:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000007fdb

@end

