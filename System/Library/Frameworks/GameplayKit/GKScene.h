//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSCopying-Protocol.h>
#import <GameplayKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol GKSceneRootNodeType;

@interface GKScene : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_entities;	// 8 = 0x8
    NSMutableDictionary *_graphs;	// 16 = 0x10
    id <GKSceneRootNodeType> _rootNode;	// 24 = 0x18
}

+ (id)sceneWithFileNamed:(id)arg1;	// IMP=0x000000000004246e
+ (id)sceneWithFileNamed:(id)arg1 rootNode:(id)arg2;	// IMP=0x000000000004245c
+ (id)_sceneWithFileNamed:(id)arg1 rootNode:(id)arg2;	// IMP=0x00000000000415ec
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000415e4
- (void).cxx_destruct;	// IMP=0x0000000000042c4c
@property(retain, nonatomic) id <GKSceneRootNodeType> rootNode; // @synthesize rootNode=_rootNode;
@property(readonly, nonatomic) NSDictionary *graphs; // @synthesize graphs=_graphs;
@property(readonly, nonatomic) NSArray *entities; // @synthesize entities=_entities;
- (void)removeGraph:(id)arg1;	// IMP=0x0000000000042c00
- (void)addGraph:(id)arg1 name:(id)arg2;	// IMP=0x0000000000042be3
- (void)removeEntity:(id)arg1;	// IMP=0x0000000000042bc6
- (void)addEntity:(id)arg1;	// IMP=0x0000000000042ba9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000042835
- (id)copy;	// IMP=0x000000000004280e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000427a0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004251c
- (id)init;	// IMP=0x0000000000042482

@end

