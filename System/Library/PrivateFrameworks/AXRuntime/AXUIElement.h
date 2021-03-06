//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXRuntime/NSCopying-Protocol.h>
#import <AXRuntime/UIElementProtocol-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface AXUIElement : NSObject <UIElementProtocol, NSCopying>
{
    struct __AXUIElement *_axElement;	// 8 = 0x8
    long long _cachedRefCount;	// 16 = 0x10
    NSMutableDictionary *_cachedAttributes;	// 24 = 0x18
    _Bool _isValid;	// 32 = 0x20
}

+ (id)uiApplicationForContext:(unsigned int)arg1;	// IMP=0x0000000000026ddc
+ (id)uiApplicationAtCoordinate:(struct CGPoint)arg1;	// IMP=0x0000000000026d66
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1 startWithElement:(id)arg2;	// IMP=0x0000000000026c80
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1;	// IMP=0x0000000000026bea
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1 forApplication:(struct __AXUIElement *)arg2 contextId:(unsigned int)arg3;	// IMP=0x0000000000026b66
+ (id)scrollAncestorAtCoordinate:(struct CGPoint)arg1;	// IMP=0x0000000000026990
+ (id)uiElementWithAXElement:(struct __AXUIElement *)arg1 cache:(id)arg2;	// IMP=0x0000000000026938
+ (id)uiElementWithAXElement:(struct __AXUIElement *)arg1;	// IMP=0x0000000000026909
+ (void)initialize;	// IMP=0x00000000000267d9
+ (void)applyElementAttributeCacheScheme:(unsigned long long)arg1;	// IMP=0x0000000000026145
+ (id)uiSystemWideApplication;	// IMP=0x0000000000026134
+ (const struct __AXUIElement *)systemWideAXUIElement;	// IMP=0x0000000000026127
- (void).cxx_destruct;	// IMP=0x000000000002a884
- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3 currentCursorRange:(struct _NSRange)arg4;	// IMP=0x000000000002a345
- (struct _NSRange)_lineRangeWithFaultTolerance:(long long)arg1 forward:(_Bool)arg2;	// IMP=0x000000000002a2e1
- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3;	// IMP=0x000000000002a27e
- (struct _NSRange)_lineRangeForPosition:(unsigned long long)arg1;	// IMP=0x000000000002a1d9
- (long long)_lineEndPosition;	// IMP=0x000000000002a17b
- (long long)_lineStartPosition;	// IMP=0x000000000002a11d
- (id)_valueForRange:(struct _NSRange)arg1;	// IMP=0x000000000002a0b7
- (id)_attributedValueForRange:(struct _NSRange)arg1;	// IMP=0x000000000002a051
- (id)_objectForRange:(struct _NSRange)arg1 withParameterizedAttribute:(long long)arg2;	// IMP=0x0000000000029fe1
- (struct _NSRange)_selectedTextRange;	// IMP=0x0000000000029fa9
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000029f91
- (_Bool)isMockElement;	// IMP=0x0000000000029f89
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2 synchronous:(_Bool)arg3;	// IMP=0x0000000000029e65
- (void)setAXAttribute:(long long)arg1 withArray:(id)arg2;	// IMP=0x0000000000029e05
- (void)setAXAttribute:(long long)arg1 withUIElementArray:(id)arg2;	// IMP=0x0000000000029bfd
- (void)setAXAttribute:(long long)arg1 withUIElement:(id)arg2;	// IMP=0x0000000000029b26
- (void)setAXAttribute:(long long)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000029aaf
- (void)setAXAttribute:(long long)arg1 withSize:(struct CGSize)arg2;	// IMP=0x0000000000029a36
- (void)setAXAttribute:(long long)arg1 withPoint:(struct CGPoint)arg2;	// IMP=0x00000000000299bd
- (void)setAXAttribute:(long long)arg1 withNumber:(id)arg2;	// IMP=0x0000000000029974
- (void)setAXAttribute:(long long)arg1 withFloat:(float)arg2;	// IMP=0x000000000002990a
- (void)setAXAttribute:(long long)arg1 withLong:(long long)arg2;	// IMP=0x00000000000298ac
- (void)setAXAttribute:(long long)arg1 withString:(id)arg2;	// IMP=0x000000000002984c
- (void)setAXAttribute:(long long)arg1 withBOOL:(_Bool)arg2;	// IMP=0x00000000000297ee
- (id)_elementsWithParameter:(long long)arg1 parameters:(id)arg2 prefetchAttributes:(_Bool)arg3;	// IMP=0x00000000000295ad
- (id)childrenIncludingPrefetchedAttributesWithCount:(unsigned long long)arg1;	// IMP=0x00000000000294c7
- (id)previousElementsWithCount:(unsigned long long)arg1;	// IMP=0x00000000000293e4
- (id)nextElementsIncludingPrefetchedAttributesWithCount:(unsigned long long)arg1;	// IMP=0x00000000000292fe
- (id)nextElementsWithCount:(unsigned long long)arg1;	// IMP=0x000000000002921b
- (id)previousElementsWithParameters:(id)arg1;	// IMP=0x00000000000291fe
- (id)nextElementsWithParameters:(id)arg1;	// IMP=0x00000000000291e1
- (id)uiElementsWithAttribute:(long long)arg1;	// IMP=0x00000000000291cd
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2 fetchAttributes:(_Bool)arg3;	// IMP=0x0000000000028f14
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2;	// IMP=0x0000000000028efc
- (_Bool)performAXAction:(int)arg1;	// IMP=0x0000000000028eb5
- (_Bool)canPerformAXAction:(int)arg1;	// IMP=0x0000000000028e12
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;	// IMP=0x0000000000028d71
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2;	// IMP=0x0000000000028d5c
- (id)valueArrayWithAXAttributes:(struct __CFArray *)arg1;	// IMP=0x0000000000028c02
- (id)objectWithAXAttribute:(long long)arg1 parameter:(void *)arg2;	// IMP=0x0000000000028b7e
- (id)objectWithAXAttribute:(long long)arg1;	// IMP=0x0000000000028a79
- (struct CGColor *)colorWithAXAttribute:(long long)arg1;	// IMP=0x0000000000028981
- (struct _NSRange)rangeWithAXAttribute:(long long)arg1;	// IMP=0x0000000000028841
- (struct CGRect)rectWithAXAttribute:(long long)arg1;	// IMP=0x00000000000286d0
- (const struct CGPath *)pathWithAXAttribute:(long long)arg1;	// IMP=0x00000000000285ad
- (struct CGPoint)pointWithAXAttribute:(long long)arg1;	// IMP=0x0000000000028460
- (id)numberWithAXAttribute:(long long)arg1;	// IMP=0x0000000000028330
- (_Bool)boolWithAXAttribute:(long long)arg1;	// IMP=0x00000000000281bf
- (id)stringWithAXAttribute:(long long)arg1;	// IMP=0x0000000000027fa2
- (id)arrayWithAXAttribute:(long long)arg1;	// IMP=0x0000000000027e72
- (void)updateCache:(long long)arg1;	// IMP=0x0000000000027dd8
- (id)_outputCache;	// IMP=0x0000000000027b72
- (_Bool)isValid;	// IMP=0x0000000000027b2c
- (_Bool)isValidForApplication:(id)arg1;	// IMP=0x0000000000027991
- (void)updateCacheWithAttributes:(id)arg1;	// IMP=0x0000000000027811
- (void)_createCache:(_Bool)arg1;	// IMP=0x0000000000027686
- (void)disableCache;	// IMP=0x0000000000027539
- (void)enableCache:(_Bool)arg1;	// IMP=0x0000000000027523
- (void)setCachedAttributes:(id)arg1;	// IMP=0x00000000000274b3
- (void *)modifyStaticCacheValue:(void *)arg1;	// IMP=0x0000000000027455
- (void)_invalidate;	// IMP=0x000000000002744b
- (void)setAXElement:(struct __AXUIElement *)arg1;	// IMP=0x0000000000027415
@property(readonly, nonatomic) const struct __AXUIElement *axElement; // @synthesize axElement=_axElement;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000027361
@property(readonly) unsigned long long hash;
- (int)pid;	// IMP=0x00000000000272f4
- (void)_setCachedValue:(void *)arg1 forAttribute:(long long)arg2;	// IMP=0x0000000000027230
- (void *)_cachedValueForAttribute:(long long)arg1;	// IMP=0x000000000002716e
@property(readonly, nonatomic) NSMutableDictionary *copyCachedAttributes;
@property(readonly, nonatomic) NSDictionary *cachedAttributes; // @dynamic cachedAttributes;
- (void)dealloc;	// IMP=0x000000000002706b
- (id)initWithAXElement:(struct __AXUIElement *)arg1;	// IMP=0x000000000002702f
- (id)initWithAXElement:(struct __AXUIElement *)arg1 cache:(id)arg2;	// IMP=0x0000000000026f52
- (unsigned int)_activeKeyboardContextId;	// IMP=0x0000000000026ac3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002608e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

