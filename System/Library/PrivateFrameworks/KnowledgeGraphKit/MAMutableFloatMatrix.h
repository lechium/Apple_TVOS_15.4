//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _TtC17KnowledgeGraphKit27MAMutableFloatMatrixWrapper;

@interface MAMutableFloatMatrix
{
}

+ (Class)wrapperClass;	// IMP=0x000000000014935d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001492da
- (void)appendRow:(id)arg1;	// IMP=0x000000000014924e
- (void)addScalar:(float)arg1;	// IMP=0x00000000001491ff
- (void)subtractScalar:(float)arg1;	// IMP=0x00000000001491b0
- (void)subtractMatrix:(id)arg1;	// IMP=0x0000000000149124
- (void)setFloat:(float)arg1 atRow:(long long)arg2 column:(long long)arg3;	// IMP=0x00000000001490c1

// Remaining properties
@property(readonly, nonatomic) _TtC17KnowledgeGraphKit27MAMutableFloatMatrixWrapper *wrapper; // @dynamic wrapper;

@end
