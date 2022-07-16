//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXRuntime/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface AXUIMockElement <NSCopying>
{
    NSMutableDictionary *_writableAttributes;	// 8 = 0x8
    NSMutableDictionary *_performActionLog;	// 16 = 0x10
    _Bool _usesCarriageReturnAsLinesSeparator;	// 24 = 0x18
    _Bool _isApplication;	// 25 = 0x19
    NSMutableDictionary *_attributes;	// 32 = 0x20
    CDUnknownBlockType _handleActionBlock;	// 40 = 0x28
    CDUnknownBlockType _cacheUpdatedCallback;	// 48 = 0x30
}

+ (id)uiElementAtCoordinate:(struct CGPoint)arg1;	// IMP=0x000000000000c4ff
+ (void)applyElementAttributeCacheScheme:(unsigned long long)arg1;	// IMP=0x000000000000c4f9
- (void).cxx_destruct;	// IMP=0x000000000000e99c
@property(copy, nonatomic) CDUnknownBlockType cacheUpdatedCallback; // @synthesize cacheUpdatedCallback=_cacheUpdatedCallback;
@property(copy, nonatomic) CDUnknownBlockType handleActionBlock; // @synthesize handleActionBlock=_handleActionBlock;
@property(nonatomic) _Bool isApplication; // @synthesize isApplication=_isApplication;
@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) _Bool usesCarriageReturnAsLinesSeparator; // @synthesize usesCarriageReturnAsLinesSeparator=_usesCarriageReturnAsLinesSeparator;
- (unsigned long long)hash;	// IMP=0x000000000000e85d
- (unsigned long long)_lineNumberForPoint:(struct CGPoint)arg1;	// IMP=0x000000000000e827
- (struct CGPoint)pointForLineNumber:(unsigned long long)arg1;	// IMP=0x000000000000e7f8
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2 synchronous:(_Bool)arg3;	// IMP=0x000000000000e79c
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2;	// IMP=0x000000000000e740
- (void)setAXAttribute:(long long)arg1 withArray:(id)arg2;	// IMP=0x000000000000e6e4
- (void)setAXAttribute:(long long)arg1 withUIElementArray:(id)arg2;	// IMP=0x000000000000e688
- (void)setAXAttribute:(long long)arg1 withUIElement:(id)arg2;	// IMP=0x000000000000e62c
- (void)setAXAttribute:(long long)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000000e5ce
- (void)setAXAttribute:(long long)arg1 withSize:(struct CGSize)arg2;	// IMP=0x000000000000e4d9
- (void)setAXAttribute:(long long)arg1 withPoint:(struct CGPoint)arg2;	// IMP=0x000000000000e3e4
- (void)setAXAttribute:(long long)arg1 withNumber:(id)arg2;	// IMP=0x000000000000e316
- (void)setAXAttribute:(long long)arg1 withFloat:(float)arg2;	// IMP=0x000000000000e22b
- (void)setAXAttribute:(long long)arg1 withLong:(long long)arg2;	// IMP=0x000000000000e142
- (void)setAXAttribute:(long long)arg1 withString:(id)arg2;	// IMP=0x000000000000e074
- (void)setAXAttribute:(long long)arg1 withBOOL:(_Bool)arg2;	// IMP=0x000000000000df8c
- (void)updateCache:(long long)arg1;	// IMP=0x000000000000df15
- (void)updateCacheWithAttributes:(id)arg1;	// IMP=0x000000000000df0f
- (int)pid;	// IMP=0x000000000000df07
- (_Bool)isValidForApplication:(id)arg1;	// IMP=0x000000000000deff
- (_Bool)isValid;	// IMP=0x000000000000def7
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2 fetchAttributes:(_Bool)arg3;	// IMP=0x000000000000dee5
- (id)previousElementsWithParameters:(id)arg1;	// IMP=0x000000000000dece
- (id)nextElementsWithParameters:(id)arg1;	// IMP=0x000000000000deb7
- (id)nextElementsWithCount:(unsigned long long)arg1;	// IMP=0x000000000000dea0
- (id)previousElementsWithCount:(unsigned long long)arg1;	// IMP=0x000000000000de89
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;	// IMP=0x000000000000ddee
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2;	// IMP=0x000000000000dbf4
- (_Bool)performAXAction:(int)arg1;	// IMP=0x000000000000db02
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2;	// IMP=0x000000000000daf0
- (id)uiElementsWithAttribute:(long long)arg1;	// IMP=0x000000000000dade
- (id)copyCachedAttributes;	// IMP=0x000000000000da77
- (id)cachedAttributes;	// IMP=0x000000000000da14
- (id)objectWithAXAttribute:(long long)arg1 parameter:(void *)arg2;	// IMP=0x000000000000d189
- (void)fillStaticCache;	// IMP=0x000000000000d183
- (unsigned long long)arrayCountWithAXAttribute:(long long)arg1;	// IMP=0x000000000000d13f
- (id)uiElementArrayForAXAttribute:(long long)arg1;	// IMP=0x000000000000d12d
- (id)urlWithAXAttribute:(long long)arg1;	// IMP=0x000000000000d11b
- (struct CGRect)rectWithAXAttribute:(long long)arg1;	// IMP=0x000000000000d0ba
- (const struct CGPath *)pathWithAXAttribute:(long long)arg1;	// IMP=0x000000000000d0b2
- (struct _NSRange)rangeWithAXAttribute:(long long)arg1;	// IMP=0x000000000000d050
- (struct CGSize)sizeWithAXAttribute:(long long)arg1;	// IMP=0x000000000000cff6
- (struct CGPoint)pointWithAXAttribute:(long long)arg1;	// IMP=0x000000000000cf9c
- (id)numberWithAXAttribute:(long long)arg1;	// IMP=0x000000000000cec2
- (long long)longWithAXAttribute:(long long)arg1;	// IMP=0x000000000000ce7e
- (float)floatWithAXAttribute:(long long)arg1;	// IMP=0x000000000000ce2e
- (_Bool)boolWithAXAttribute:(long long)arg1;	// IMP=0x000000000000cdea
- (id)objectWithAXAttribute:(long long)arg1;	// IMP=0x000000000000cdd8
- (id)stringWithAXAttribute:(long long)arg1;	// IMP=0x000000000000cd57
- (id)arrayWithAXAttribute:(long long)arg1;	// IMP=0x000000000000cd45
- (void)setValue:(id)arg1 forAXParameterizedAttribute:(long long)arg2;	// IMP=0x000000000000cc5c
- (void)setValue:(id)arg1 forAXAttribute:(long long)arg2;	// IMP=0x000000000000cb73
- (_Bool)canPerformAXAction:(int)arg1;	// IMP=0x000000000000cb6b
- (id)uiElementWithAXAttribute:(long long)arg1;	// IMP=0x000000000000cb03
- (_Bool)canSetAXAttribute:(long long)arg1;	// IMP=0x000000000000ca3d
- (void)setWritable:(_Bool)arg1 forAXAttribute:(long long)arg2;	// IMP=0x000000000000c98e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000c8bf
- (void)disableCache;	// IMP=0x000000000000c8b9
- (void)enableCache:(_Bool)arg1;	// IMP=0x000000000000c8b3
- (id)_valueForAttribute:(long long)arg1;	// IMP=0x000000000000c80b
- (id)description;	// IMP=0x000000000000c6bc
- (id)performBlockWhileLoggingPerformedActions:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c665
- (id)endLoggingActions;	// IMP=0x000000000000c645
- (void)startLoggingActions;	// IMP=0x000000000000c5fa
- (id)visibleElements;	// IMP=0x000000000000c5f2
- (const struct __AXUIElement *)axElement;	// IMP=0x000000000000c5ea
- (_Bool)isMockElement;	// IMP=0x000000000000c5e2
- (id)init;	// IMP=0x000000000000c522
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000c404

@end
