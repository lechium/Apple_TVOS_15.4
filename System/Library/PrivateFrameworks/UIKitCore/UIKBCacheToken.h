//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSMutableArray, NSSet, NSString;

@interface UIKBCacheToken : NSObject <NSCopying>
{
    NSMutableArray *_components;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    double _scale;	// 24 = 0x18
    int _emptyFields;	// 32 = 0x20
    NSSet *_transformationIdentifiers;	// 40 = 0x28
    long long _renderFlags;	// 48 = 0x30
}

+ (id)tokenTemplateFilledForKey:(id)arg1 style:(int)arg2 size:(struct CGSize)arg3;	// IMP=0x000000000081ff5b
+ (id)tokenTemplateForKey:(id)arg1 name:(id)arg2 style:(int)arg3 size:(struct CGSize)arg4;	// IMP=0x000000000081ff3f
+ (id)tokenTemplateForKey:(id)arg1 style:(int)arg2 size:(struct CGSize)arg3;	// IMP=0x000000000081fed7
+ (id)tokenForKeyMask:(id)arg1 style:(CDStruct_227bb23d)arg2 displayInsets:(struct UIEdgeInsets)arg3;	// IMP=0x000000000081febe
+ (id)tokenForKey:(id)arg1 style:(CDStruct_227bb23d)arg2 displayInsets:(struct UIEdgeInsets)arg3;	// IMP=0x000000000081fea5
+ (id)tokenForKey:(id)arg1 style:(CDStruct_227bb23d)arg2;	// IMP=0x000000000081fe8c
+ (id)tokenForKeyplane:(id)arg1;	// IMP=0x000000000081fe73
@property(retain, nonatomic) NSSet *transformationIdentifiers; // @synthesize transformationIdentifiers=_transformationIdentifiers;
@property(nonatomic) long long renderFlags; // @synthesize renderFlags=_renderFlags;
@property(nonatomic) int emptyFields; // @synthesize emptyFields=_emptyFields;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x000000000081ff74
- (id)stringForRenderFlags:(long long)arg1 lightKeyboard:(_Bool)arg2;	// IMP=0x000000000081fdad
- (id)stringForSplitState:(_Bool)arg1 handBias:(long long)arg2;	// IMP=0x000000000081fc77
- (id)stringForState:(int)arg1;	// IMP=0x000000000081fc30
- (id)stringForKey:(id)arg1 state:(int)arg2;	// IMP=0x000000000081fb63
@property(readonly, nonatomic) NSString *string;
- (id)stringForComponentArray:(id)arg1 additionalValues:(CDUnknownBlockType)arg2;	// IMP=0x000000000081fa18
- (id)stringForConstruction:(CDUnknownBlockType)arg1;	// IMP=0x000000000081f93e
- (int)_writeArray:(id)arg1 toStr:(char *)arg2 maxLen:(int)arg3;	// IMP=0x000000000081f679
- (int)_writeEdgeInsets:(struct UIEdgeInsets)arg1 toStr:(char *)arg2 maxLen:(int)arg3;	// IMP=0x000000000081f58c
- (int)_writeNumber:(float)arg1 toStr:(char *)arg2;	// IMP=0x000000000081f4b6
- (int)_writeString:(id)arg1 toStr:(char *)arg2 maxLen:(int)arg3;	// IMP=0x000000000081f41f
- (void)annotateWithInt:(int)arg1;	// IMP=0x000000000081f419
- (void)annotateWithBool:(_Bool)arg1;	// IMP=0x000000000081f413
- (void)resetAnnotations;	// IMP=0x000000000081f40d
@property(readonly, nonatomic) _Bool hasKey;
- (_Bool)isUsableForCacheToken:(id)arg1 withRenderFlags:(long long)arg2;	// IMP=0x000000000081f3fd
@property(nonatomic) CDStruct_227bb23d styling;
@property(nonatomic) int displayHint;
@property(nonatomic) int rowHint;
@property(nonatomic) struct CGSize size;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000081f3ac
- (void)dealloc;	// IMP=0x000000000081f35b
- (id)initWithComponents:(id)arg1 name:(id)arg2;	// IMP=0x000000000081f2eb
- (id)initWithName:(id)arg1;	// IMP=0x000000000081f2d4

@end

