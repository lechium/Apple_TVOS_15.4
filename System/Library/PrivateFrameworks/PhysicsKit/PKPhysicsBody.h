//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhysicsKit/NSCopying-Protocol.h>
#import <PhysicsKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, PKPhysicsWorld;
@protocol NSObject;

@interface PKPhysicsBody : NSObject <NSCopying, NSSecureCoding>
{
    id <NSObject> _representedObject;	// 8 = 0x8
    struct b2BodyDef _bodyDef;	// 16 = 0x10
    struct b2Body *_body;	// 96 = 0x60
    struct PKCField *_field;	// 104 = 0x68
    int _dynamicType;	// 112 = 0x70
    struct vector<PKPhysicsShape *, std::allocator<PKPhysicsShape *>> _shapes;	// 120 = 0x78
    PKPhysicsWorld *_world;	// 144 = 0x90
    NSMutableArray *_joints;	// 152 = 0x98
    _Bool _inUse;	// 160 = 0xa0
    int _shapeType;	// 164 = 0xa4
    shared_ptr_2aaf3a07 _pathPtr;	// 168 = 0xa8
    shared_ptr_639e7c03 _quadTree;	// 184 = 0xb8
    struct CGPoint _p0;	// 200 = 0xc8
    struct CGPoint _p1;	// 216 = 0xd8
    struct CGSize _size;	// 232 = 0xe8
    double _radius;	// 248 = 0xf8
    double _edgeRadius;	// 256 = 0x100
    struct CGImage *_mask;	// 264 = 0x108
    shared_ptr_2aaf3a07 _outline;	// 272 = 0x110
    _Bool _isPinned;	// 288 = 0x120
    _Bool _allowsRotation;	// 289 = 0x121
    CDUnknownBlockType _postStepBlock;	// 296 = 0x128
}

+ (id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg1;	// IMP=0x00000000000071e7
+ (id)bodyWithEdgeChainFromPath:(struct CGPath *)arg1;	// IMP=0x00000000000071b1
+ (id)bodyWithPolygonFromPath:(struct CGPath *)arg1;	// IMP=0x000000000000706f
+ (id)bodyWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x0000000000007016
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2 edgeRadius:(double)arg3;	// IMP=0x0000000000006fb0
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2;	// IMP=0x0000000000006f57
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 edgeRadius:(double)arg2;	// IMP=0x0000000000006ef8
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1;	// IMP=0x0000000000006ea3
+ (id)bodyWithCircleOfRadius:(double)arg1 center:(struct CGPoint)arg2;	// IMP=0x0000000000006e54
+ (id)bodyWithCircleOfRadius:(double)arg1;	// IMP=0x0000000000006e09
+ (id)bodyWithBodies:(id)arg1;	// IMP=0x0000000000006dab
+ (id)initWithMarchingCubes:(void *)arg1 pixelFrame:(struct CGRect)arg2;	// IMP=0x0000000000006d8a
+ (id)initWithQuadTree:(id)arg1;	// IMP=0x0000000000006a61
+ (id)bodyWithOutline:(shared_ptr_2aaf3a07)arg1 offset:(struct CGPoint)arg2;	// IMP=0x0000000000002739
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001dfe
- (id).cxx_construct;	// IMP=0x00000000000096a5
- (void).cxx_destruct;	// IMP=0x0000000000009629
@property(copy, nonatomic) CDUnknownBlockType postStepBlock; // @synthesize postStepBlock=_postStepBlock;
- (id)allContactedBodies;	// IMP=0x0000000000009564
- (id)description;	// IMP=0x0000000000009305
- (id)_descriptionFormat;	// IMP=0x0000000000009285
- (id)_descriptionClassName;	// IMP=0x0000000000009278
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000087ee
- (id)copy;	// IMP=0x00000000000087c7
@property(nonatomic, getter=isDynamic) _Bool dynamic;
@property(nonatomic) double charge;
@property(nonatomic) double friction;
@property(nonatomic) double restitution;
@property(nonatomic) double radius;
- (void)reapplyScale:(double)arg1 yScale:(double)arg2;	// IMP=0x0000000000008542
@property(readonly, nonatomic) double area;
@property(nonatomic) double density;
@property(nonatomic) double mass;
@property(readonly, nonatomic) NSArray *joints;
@property(nonatomic, getter=isResting) _Bool resting;
@property(nonatomic) _Bool allowsRotation;
@property(nonatomic) double angularVelocity;
@property(nonatomic) struct CGVector velocity;
@property(nonatomic) unsigned int contactTestBitMask;
@property(nonatomic) unsigned int collisionBitMask;
@property(nonatomic) unsigned int fieldBitMask;
@property(nonatomic) unsigned int categoryBitMask;
@property(nonatomic) _Bool affectedByGravity;
@property(nonatomic) _Bool usesPreciseCollisionDetection;
- (void)applyUnscaledImpulse:(struct CGVector)arg1;	// IMP=0x0000000000007d3e
- (void)applyUnscaledImpulse:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0000000000007c05
- (void)applyUnscaledForce:(struct CGVector)arg1;	// IMP=0x0000000000007b73
- (void)applyUnscaledForce:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0000000000007a4d
- (void)applyAngularImpulse:(double)arg1;	// IMP=0x00000000000079de
- (void)applyImpulse:(struct CGVector)arg1;	// IMP=0x00000000000078b2
- (void)applyImpulse:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0000000000007750
- (void)applyTorque:(double)arg1;	// IMP=0x00000000000076e9
- (void)applyForce:(struct CGPoint)arg1;	// IMP=0x0000000000007628
- (void)applyForce:(struct CGPoint)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000000074d9
@property(nonatomic) double angularDamping;
@property(nonatomic) double linearDamping;
@property(nonatomic) double rotation;
- (_Bool)_allowSleep;	// IMP=0x00000000000073a8
- (void)set_allowSleep:(_Bool)arg1;	// IMP=0x0000000000007380
@property(nonatomic) struct CGPoint position;
@property(nonatomic) _Bool pinned;
@property(nonatomic) __weak id <NSObject> representedObject;
- (id)initWithEdgeLoopFromPath:(struct CGPath *)arg1;	// IMP=0x00000000000065e9
- (id)initWithEdgeChainFromPath:(struct CGPath *)arg1;	// IMP=0x0000000000006512
- (id)initWithPolygonFromPath:(struct CGPath *)arg1;	// IMP=0x0000000000006427
- (id)initWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x00000000000063c2
- (id)initWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2 edgeRadius:(float)arg3;	// IMP=0x0000000000005feb
- (id)initWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2;	// IMP=0x0000000000005fd0
- (id)initWithRectangleOfSize:(struct CGSize)arg1;	// IMP=0x0000000000005fa5
- (id)initWithCircleOfRadius:(double)arg1 center:(struct CGPoint)arg2;	// IMP=0x0000000000005f43
- (id)initWithCircleOfRadius:(double)arg1;	// IMP=0x0000000000005f20
- (id)initWithBodies:(id)arg1;	// IMP=0x0000000000005b46
- (void)dealloc;	// IMP=0x0000000000005a88
- (id)init;	// IMP=0x00000000000058dd
- (_Bool)isEqualToBody:(id)arg1;	// IMP=0x00000000000054db
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000035d0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002d3e
- (void)clearBox2DData;	// IMP=0x00000000000026eb
@property(readonly, nonatomic) void *volume;
@property(nonatomic) shared_ptr_2aaf3a07 outline;
@property(nonatomic) struct b2Body *_body;
@property(nonatomic) struct b2BodyDef _bodyDef;
- (void)set_inUse:(_Bool)arg1;	// IMP=0x000000000000989d
- (_Bool)_inUse;	// IMP=0x0000000000009891
- (void)set_joints:(id)arg1;	// IMP=0x000000000000987d
- (id)_joints;	// IMP=0x000000000000986c
- (shared_ptr_639e7c03)_quadTree;	// IMP=0x0000000000009844
- (id)_world;	// IMP=0x000000000000982b
- (void)set_world:(id)arg1;	// IMP=0x0000000000009817
- (void)setActive:(_Bool)arg1;	// IMP=0x000000000000970d
- (_Bool)active;	// IMP=0x00000000000096f2
@property(readonly, nonatomic) void *_shapes;

@end
