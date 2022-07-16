//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMapTable, NSMutableData, NSMutableDictionary;

@interface TUIKBGraphSerialization : NSObject
{
    NSMapTable *_serializedOffsets;	// 8 = 0x8
    NSDictionary *_keyboardOffsets;	// 16 = 0x10
    NSData *_keyboardOffsetsData;	// 24 = 0x18
    NSData *_graphData;	// 32 = 0x20
    NSData *_serializedData;	// 40 = 0x28
    NSMutableDictionary *_minEdgeWidths;	// 48 = 0x30
    NSMutableDictionary *_maxEdgeWidths;	// 56 = 0x38
    NSMutableDictionary *_referenceCount;	// 64 = 0x40
    _Bool _disableOffsets;	// 72 = 0x48
    NSMutableDictionary *_deserializationCache;	// 80 = 0x50
}

+ (id)separatorCharacterSet;	// IMP=0x0000000000055f5c
@property(retain, nonatomic) NSMutableDictionary *deserializationCache; // @synthesize deserializationCache=_deserializationCache;
- (id)keyboardPrefixForWidth:(float)arg1 andEdge:(_Bool)arg2;	// IMP=0x00000000000558c7
- (void)addKeyboardPrefix:(id)arg1 forWidth:(float)arg2 minEdge:(_Bool)arg3;	// IMP=0x0000000000055878
- (id)objectForOffset:(int *)arg1;	// IMP=0x00000000000555fb
- (id)_UIKBTreeForOffset:(int *)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x00000000000554ba
- (id)UIKBTreeForOffset:(int *)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x0000000000055464
- (id)mergeActionForOffset:(int *)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x000000000005538e
- (id)shapeForOffset:(int *)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x0000000000055274
- (struct CGRect)CGRectForOffset:(int *)arg1;	// IMP=0x00000000000551be
- (id)geometryForOffset:(int *)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x000000000005504b
- (CDStruct_cdff19b3)UIKBValueForOffset:(int *)arg1;	// IMP=0x0000000000054fde
- (id)dictionaryForOffset:(int *)arg1 nonEmpty:(_Bool)arg2;	// IMP=0x0000000000054f5a
- (id)setForOffset:(int *)arg1 nonEmpty:(_Bool)arg2;	// IMP=0x0000000000054f0a
- (id)relativeRefArrayForOffset:(int *)arg1 withCount:(unsigned long long)arg2;	// IMP=0x0000000000054e31
- (id)refArrayForOffset:(int *)arg1 withCount:(unsigned long long)arg2;	// IMP=0x0000000000054d93
- (id)arrayForOffset:(int *)arg1 withCount:(unsigned long long)arg2;	// IMP=0x0000000000054d12
- (id)stringConcatForOffset:(int *)arg1 withComponentCount:(unsigned long long)arg2;	// IMP=0x0000000000054c4f
- (id)simpleStringForOffset:(int *)arg1 withUTF8Length:(unsigned long long)arg2;	// IMP=0x0000000000054bea
- (float)floatValueForOffset:(int *)arg1;	// IMP=0x0000000000054bd8
- (float)compressedFloatForOffset:(int *)arg1 withKind:(unsigned char)arg2;	// IMP=0x0000000000054b46
- (float)bareFloatForOffset:(int *)arg1;	// IMP=0x0000000000054b18
- (int)intValueForOffset:(int *)arg1;	// IMP=0x0000000000054b06
- (unsigned char)flagsForOffset:(int *)arg1;	// IMP=0x0000000000054af0
- (unsigned long long)compressedUIntForOffset:(int *)arg1;	// IMP=0x0000000000054aa3
- (unsigned long long)compressedIntForOffset:(int *)arg1;	// IMP=0x0000000000054a31
- (id)keyboardForName:(id)arg1;	// IMP=0x000000000005492d
@property(retain, nonatomic) NSData *serializedData;
- (unsigned long long)serializedObjectCount;	// IMP=0x0000000000054413
- (void)preheatWithStatistics:(id)arg1;	// IMP=0x000000000005426f
- (id)statistics;	// IMP=0x0000000000054258
- (void)serializeObject:(id)arg1;	// IMP=0x000000000005417a
- (id)_objectAtSerializedOffset:(int)arg1;	// IMP=0x0000000000054156
- (int)_serializedOffsetForObject:(id)arg1;	// IMP=0x000000000005411f
- (void)persistData:(id)arg1 forObject:(id)arg2;	// IMP=0x0000000000053fff
- (id)dataForObject:(id)arg1;	// IMP=0x0000000000053e59
- (id)dataForOffsetObject:(id)arg1;	// IMP=0x0000000000053e03
- (id)dataForUIKBTree:(id)arg1;	// IMP=0x00000000000538bf
- (id)dataForMergeAction:(id)arg1;	// IMP=0x0000000000053741
- (id)dataForShape:(id)arg1;	// IMP=0x00000000000535b4
- (id)dataForCGRect:(struct CGRect)arg1;	// IMP=0x000000000005347f
- (id)dataForGeometry:(id)arg1;	// IMP=0x0000000000053283
- (id)dataForUIKBValue:(CDStruct_cdff19b3)arg1;	// IMP=0x00000000000531c7
- (id)dataForDictionary:(id)arg1;	// IMP=0x0000000000052fd7
- (id)sanitizedDictionary:(id)arg1;	// IMP=0x0000000000052f49
- (id)dataForSet:(id)arg1;	// IMP=0x0000000000052e9d
- (id)dataForArray:(id)arg1;	// IMP=0x00000000000529a7
- (id)dataForString:(id)arg1;	// IMP=0x0000000000052963
- (id)dataForSimpleString:(id)arg1;	// IMP=0x00000000000528ca
- (id)dataForStringConcat:(id)arg1;	// IMP=0x00000000000526d4
- (_Bool)stringIsSimple:(id)arg1;	// IMP=0x0000000000052648
- (id)stringsBySplittingString:(id)arg1 afterCharactersInSet:(id)arg2;	// IMP=0x000000000005254e
- (id)dataForReference:(int)arg1;	// IMP=0x00000000000524fb
- (id)dataForFloat:(float)arg1;	// IMP=0x00000000000524a0
- (id)dataForBareFloat:(float)arg1;	// IMP=0x0000000000052471
- (id)dataForInt:(int)arg1;	// IMP=0x000000000005241b
- (id)dataForFlags:(unsigned char)arg1;	// IMP=0x0000000000052407
- (id)dataForCompressedFloat:(float)arg1 kind:(unsigned char *)arg2;	// IMP=0x000000000005230c
- (id)dataForCompressedUInt:(unsigned long long)arg1;	// IMP=0x0000000000052285
- (id)dataForCompressedInt:(long long)arg1;	// IMP=0x00000000000521c8
- (id)mutableDataForObjectType:(unsigned char)arg1 withSize:(unsigned long long)arg2;	// IMP=0x0000000000052128
- (id)mutableDataForObjectType:(unsigned char)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x0000000000052116
- (id)mutableDataForObjectType:(unsigned char)arg1;	// IMP=0x0000000000052102
@property(readonly, nonatomic) NSMutableDictionary *keyboardOffsets;
@property(readonly, nonatomic) NSMutableData *graphData;
- (void)reset;	// IMP=0x0000000000052031
- (void)dealloc;	// IMP=0x0000000000051fb6
- (id)init;	// IMP=0x0000000000051ebb

@end
