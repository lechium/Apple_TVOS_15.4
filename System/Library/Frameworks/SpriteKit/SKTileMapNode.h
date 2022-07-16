//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>

@class MISSING_TYPE, NSDictionary, NSString, SKShader, SKTileSet, UIColor;

@interface SKTileMapNode <NSCopying, NSSecureCoding>
{
    void *_skcTileMapNode;	// 96 = 0x60
    SKTileSet *_tileSet;	// 104 = 0x68
    struct CGSize _tileSize;	// 112 = 0x70
    MISSING_TYPE *_isoOrigin;	// 128 = 0x80
    MISSING_TYPE *_isoColumnVector;	// 136 = 0x88
    MISSING_TYPE *_isoRowVector;	// 144 = 0x90
    float _isoColumnWidth;	// 152 = 0x98
    float _isoRowHeight;	// 156 = 0x9c
    float _isoHeightScalar;	// 160 = 0xa0
    float _hexRadius;	// 164 = 0xa4
    _Bool _enableAutomapping;	// 168 = 0xa8
    NSString *_tileSetName;	// 176 = 0xb0
}

+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;	// IMP=0x00000000000f2694
+ (id)debugHierarchyPropertyDescriptions;	// IMP=0x00000000000f1dd0
+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4 tileGroupLayout:(id)arg5;	// IMP=0x00000000000ebc52
+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4 fillWithTileGroup:(id)arg5;	// IMP=0x00000000000ebb90
+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4;	// IMP=0x00000000000ebafb
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e9f00
- (void).cxx_destruct;	// IMP=0x00000000000f2edb
@property(retain, nonatomic) NSString *tileSetName; // @synthesize tileSetName=_tileSetName;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;	// IMP=0x00000000000f1da1
- (id)valueForAttributeNamed:(id)arg1;	// IMP=0x00000000000f1d63
- (void)forceRedraw;	// IMP=0x00000000000f1d42
- (_Bool)shouldUnarchiveTileSet;	// IMP=0x00000000000f1d3a
- (id)tileDefinitionForTileID:(unsigned int)arg1;	// IMP=0x00000000000f1c62
- (void)applyTileStamp:(id)arg1 inColumn:(long long)arg2 row:(long long)arg3;	// IMP=0x00000000000f181b
- (id)createTileStampFromColumn:(unsigned long long)arg1 row:(unsigned long long)arg2 withWidth:(unsigned long long)arg3 height:(unsigned long long)arg4 addToTileSet:(_Bool)arg5;	// IMP=0x00000000000f14b2
- (struct CGPoint)centerOfTileAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2;	// IMP=0x00000000000f0fbb
- (unsigned long long)tileRowIndexFromPosition:(struct CGPoint)arg1;	// IMP=0x00000000000f0bd5
- (unsigned long long)tileColumnIndexFromPosition:(struct CGPoint)arg1;	// IMP=0x00000000000f07ec
- (void)calculateSize;	// IMP=0x00000000000f0003
- (void)setColumns:(unsigned long long)arg1 andRows:(long long)arg2;	// IMP=0x00000000000efe33
- (void)updateTileGroupsAtX:(unsigned long long)arg1 y:(unsigned long long)arg2;	// IMP=0x00000000000ee905
- (void)updateTileDefinitionWithoutAutomappingAtX:(unsigned long long)arg1 y:(unsigned long long)arg2;	// IMP=0x00000000000ee2d8
- (void)rebuildTileSprites;	// IMP=0x00000000000ee254
- (void)removeAllTiles;	// IMP=0x00000000000ee226
- (void)getTileModifiedData:(long long *)arg1 outMinRowModified:(long long *)arg2 outMaxColumnModified:(long long *)arg3 outmaxRowModified:(long long *)arg4;	// IMP=0x00000000000ee1ed
- (void)clearModifiedTileTracking;	// IMP=0x00000000000ee1d8
- (void)setTilesFromArray:(unsigned int *)arg1 fromColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 forWidth:(unsigned long long)arg4 height:(unsigned long long)arg5;	// IMP=0x00000000000ee1b1
- (void)setTilesFromArray:(unsigned int *)arg1;	// IMP=0x00000000000ee199
- (void)fillArray:(unsigned int *)arg1 withTilesFromColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 forWidth:(unsigned long long)arg4 height:(unsigned long long)arg5;	// IMP=0x00000000000ee172
- (void)fillArrayWithTiles:(unsigned int *)arg1;	// IMP=0x00000000000ee15a
- (void)validateAllTiles;	// IMP=0x00000000000ee0c1
- (void)setTileGroup:(id)arg1 andTileDefinition:(id)arg2 forTileIndicies:(id)arg3;	// IMP=0x00000000000ed98d
- (void)setTileGroup:(id)arg1 forTileIndicies:(id)arg2;	// IMP=0x00000000000ed420
- (void)setTileGroupWithoutUpdate:(id)arg1 tileDefinition:(id)arg2 forColumn:(unsigned long long)arg3 row:(unsigned long long)arg4;	// IMP=0x00000000000ed050
- (void)setTileGroupWithoutUpdate:(id)arg1 forColumn:(unsigned long long)arg2 row:(unsigned long long)arg3;	// IMP=0x00000000000ecde6
- (void)setTileGroup:(id)arg1 andTileDefinition:(id)arg2 forColumn:(unsigned long long)arg3 row:(unsigned long long)arg4;	// IMP=0x00000000000ec9c0
- (void)setTileGroup:(id)arg1 forColumn:(unsigned long long)arg2 row:(unsigned long long)arg3;	// IMP=0x00000000000ec720
- (id)tileGroupAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2;	// IMP=0x00000000000ec4fc
- (id)tileDefinitionAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2;	// IMP=0x00000000000ec2ee
- (void)fillWithTileGroup:(id)arg1;	// IMP=0x00000000000ec07c
- (void)fillWithTileDefinition:(id)arg1;	// IMP=0x00000000000ebef2
- (unsigned int)getTileIDWithTileGroup:(id)arg1 andTileDefinition:(id)arg2;	// IMP=0x00000000000ebd9b
- (void)dealloc;	// IMP=0x00000000000ebd14
- (id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4 tileGroupLayout:(id)arg5;	// IMP=0x00000000000eb81e
- (id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4 fillWithTileGroup:(id)arg5;	// IMP=0x00000000000eb71e
- (id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4;	// IMP=0x00000000000eb653
- (id)init;	// IMP=0x00000000000eb5bf
- (void)setStartData:(unsigned long long)arg1 rows:(unsigned long long)arg2 tileSize:(struct CGSize)arg3 tileSet:(id)arg4;	// IMP=0x00000000000eb4b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000eb401
- (id)copy;	// IMP=0x00000000000eb3da
- (void)setRawTiles:(unsigned int *)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3;	// IMP=0x00000000000eb3bf
- (_Bool)isEqualToNode:(id)arg1;	// IMP=0x00000000000eaf6e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000eaaf6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ea4e0
- (void)commonInit;	// IMP=0x00000000000ea4da
- (void)setAlpha:(double)arg1;	// IMP=0x00000000000ea49c
- (double)alpha;	// IMP=0x00000000000ea483
@property(nonatomic) _Bool enableAutomapping;
- (void)_didMakeBackingNode;	// IMP=0x00000000000ea400
- (void *)_makeBackingNode;	// IMP=0x00000000000ea3c9
@property(nonatomic) unsigned int lightingBitMask;
@property(retain, nonatomic) SKShader *shader;
@property(nonatomic) struct CGPoint anchorPoint;
@property(nonatomic) long long blendMode;
@property(retain, nonatomic) UIColor *color;
@property(nonatomic) double colorBlendFactor;
@property(retain, nonatomic) SKTileSet *tileSet;
@property(readonly, nonatomic) struct CGSize mapSize;
@property(nonatomic) struct CGSize tileSize;
@property(nonatomic) unsigned long long numberOfRows;
@property(nonatomic) unsigned long long numberOfColumns;

// Remaining properties
@property(copy, nonatomic) NSDictionary *attributeValues; // @dynamic attributeValues;

@end

