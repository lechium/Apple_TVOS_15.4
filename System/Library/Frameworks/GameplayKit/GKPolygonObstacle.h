//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameplayKit/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface GKPolygonObstacle <NSSecureCoding>
{
    void *_cPolygonObstacle;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001db2b
+ (id)obstacleWithPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000001da02
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001dc31
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001db7f
- (struct Obstacle *)obstacle;	// IMP=0x000000000001db6a
@property(readonly, nonatomic) unsigned long long vertexCount;
- (MISSING_TYPE *)vertexAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001db33
- (void)dealloc;	// IMP=0x000000000001dae4
- (id)initWithPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000001da3d
- (id)init;	// IMP=0x000000000001d9a2
- (void *)cPolygonObstacle;	// IMP=0x000000000001d991
- (void)setCPolygonObstacle:(void *)arg1;	// IMP=0x000000000001d980

@end

