//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@class UIStoryboardDecodingContext;

@interface NSCoder (UIGeometryKeyedCoding)
- (struct UIOffset)decodeUIOffsetForKey:(id)arg1;	// IMP=0x000000000073136d
- (struct NSDirectionalEdgeInsets)decodeDirectionalEdgeInsetsForKey:(id)arg1;	// IMP=0x00000000007312e4
- (struct UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)arg1;	// IMP=0x000000000073125b
- (struct CGAffineTransform)decodeCGAffineTransformForKey:(id)arg1;	// IMP=0x00000000007311be
- (struct CGRect)decodeCGRectForKey:(id)arg1;	// IMP=0x000000000073112a
- (struct CGSize)decodeCGSizeForKey:(id)arg1;	// IMP=0x0000000000731084
- (struct CGVector)decodeCGVectorForKey:(id)arg1;	// IMP=0x0000000000730fe8
- (struct CGPoint)decodeCGPointForKey:(id)arg1;	// IMP=0x0000000000730f42
- (void)encodeUIOffset:(struct UIOffset)arg1 forKey:(id)arg2;	// IMP=0x0000000000730ecd
- (void)encodeDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1 forKey:(id)arg2;	// IMP=0x0000000000730e5b
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets)arg1 forKey:(id)arg2;	// IMP=0x0000000000730de9
- (void)encodeCGAffineTransform:(struct CGAffineTransform)arg1 forKey:(id)arg2;	// IMP=0x0000000000730d6e
- (void)encodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;	// IMP=0x0000000000730cfc
- (void)encodeCGSize:(struct CGSize)arg1 forKey:(id)arg2;	// IMP=0x0000000000730c87
- (void)encodeCGVector:(struct CGVector)arg1 forKey:(id)arg2;	// IMP=0x0000000000730c12
- (void)encodeCGPoint:(struct CGPoint)arg1 forKey:(id)arg2;	// IMP=0x0000000000730b9d
- (struct CAFrameRateRange)_ui_decodeCAFrameRateRangeForKey:(id)arg1;	// IMP=0x0000000000731492
- (void)_ui_encodeCAFrameRateRange:(struct CAFrameRateRange)arg1 forKey:(id)arg2;	// IMP=0x0000000000731409
- (void)_initializeClassSwapperWithCurrentDecodingViewControllerIfNeeded:(id)arg1;	// IMP=0x0000000000793eee
- (id)_decodeObjectsAndTrackChildViewControllerIndexWithParent:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000793d31
- (id)_decodeObjectsWithSourceSegueTemplate:(id)arg1 creator:(CDUnknownBlockType)arg2 sender:(id)arg3 forKey:(id)arg4;	// IMP=0x0000000000793aa8
- (void)_createStoryboardDecodingContextIfNeeded;	// IMP=0x0000000000793a40
@property(readonly, nonatomic) UIStoryboardDecodingContext *_storyboardDecodingContext;
- (CDUnknownBlockType)_ui_decodeNSUIntegerVectorForKey:(id)arg1 returnedCount:(unsigned long long *)arg2;	// IMP=0x00000000009e0153
- (void)_ui_encodeNSUIntegerVector:(const unsigned long long *)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x00000000009e00c1
- (CDUnknownBlockType)_ui_decodeVectorForKey:(id)arg1 returnedCount:(unsigned long long *)arg2;	// IMP=0x00000000009dff8d
- (void)_ui_encodeVector:(const double *)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x00000000009dff1a
- (id)_ui_decodeTextAttributesForKey:(id)arg1;	// IMP=0x0000000000eedb6b
- (void)_ui_encodeTextAttributes:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000eedac9
- (_Bool)_ui_decodeBoolForKey:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x0000000000eeda69
- (_Bool)_ui_isInterprocess;	// IMP=0x0000000000eeda40
@end
