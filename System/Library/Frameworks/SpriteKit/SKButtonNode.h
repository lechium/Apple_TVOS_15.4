//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, SKAction;
@protocol SKButtonNodeDelegate;

@interface SKButtonNode
{
    NSObject<SKButtonNodeDelegate> *_delegate;	// 8 = 0x8
    SKAction *_downAction;	// 16 = 0x10
    SKAction *_upAction;	// 24 = 0x18
    CDUnknownBlockType _downBlock;	// 32 = 0x20
    CDUnknownBlockType _upBlock;	// 40 = 0x28
    CDUnknownBlockType _upInsideBlock;	// 48 = 0x30
    int _touches;	// 56 = 0x38
}

+ (id)buttonWithFontNamed:(id)arg1;	// IMP=0x00000000000396a0
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003955f
- (void).cxx_destruct;	// IMP=0x000000000003a0db
@property(retain, nonatomic) SKAction *upAction; // @synthesize upAction=_upAction;
@property(retain, nonatomic) SKAction *downAction; // @synthesize downAction=_downAction;
@property(nonatomic) __weak NSObject<SKButtonNodeDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000039fd3
- (void)onTouchDownInside:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039fa7
- (void)onTouchUp:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039f7b
- (void)onTouchUpInside:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039f4f
- (void)touchEnded:(unsigned long long)arg1 location:(struct CGPoint)arg2;	// IMP=0x0000000000039e05
- (void)touchMoved:(unsigned long long)arg1 location:(struct CGPoint)arg2;	// IMP=0x0000000000039dff
- (void)touchBegan:(unsigned long long)arg1 location:(struct CGPoint)arg2;	// IMP=0x0000000000039d21
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000039ae8
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000398af
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000039810
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000396f1
- (id)init;	// IMP=0x0000000000039567

@end

