//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, SKAction;
@protocol SKButtonNodeSpriteDelegate;

@interface SKButtonNodeSprite
{
    NSObject<SKButtonNodeSpriteDelegate> *_delegate;	// 8 = 0x8
    SKAction *_downAction;	// 16 = 0x10
    SKAction *_upAction;	// 24 = 0x18
    CDUnknownBlockType _downBlock;	// 32 = 0x20
    CDUnknownBlockType _upBlock;	// 40 = 0x28
    CDUnknownBlockType _upInsideBlock;	// 48 = 0x30
    int _touches;	// 56 = 0x38
}

+ (id)buttonWithFontNamed:(id)arg1;	// IMP=0x000000000003a28f
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003a14e
- (void).cxx_destruct;	// IMP=0x000000000003acca
@property(retain, nonatomic) SKAction *upAction; // @synthesize upAction=_upAction;
@property(retain, nonatomic) SKAction *downAction; // @synthesize downAction=_downAction;
@property(nonatomic) __weak NSObject<SKButtonNodeSpriteDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003abc2
- (void)onTouchDownInside:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ab96
- (void)onTouchUp:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ab6a
- (void)onTouchUpInside:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ab3e
- (void)touchEnded:(unsigned long long)arg1 location:(struct CGPoint)arg2;	// IMP=0x000000000003a9f4
- (void)touchMoved:(unsigned long long)arg1 location:(struct CGPoint)arg2;	// IMP=0x000000000003a9ee
- (void)touchBegan:(unsigned long long)arg1 location:(struct CGPoint)arg2;	// IMP=0x000000000003a910
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003a6d7
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003a49e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003a3ff
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003a2e0
- (id)init;	// IMP=0x000000000003a156

@end

