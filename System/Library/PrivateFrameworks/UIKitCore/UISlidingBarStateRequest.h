//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@interface UISlidingBarStateRequest : NSObject <NSCopying>
{
    _Bool _userInitiated;	// 8 = 0x8
    double _leadingWidth;	// 16 = 0x10
    double _leadingOffscreenWidth;	// 24 = 0x18
    double _trailingWidth;	// 32 = 0x20
    double _trailingOffscreenWidth;	// 40 = 0x28
    double _supplementaryWidth;	// 48 = 0x30
    double _supplementaryOffscreenWidth;	// 56 = 0x38
    double _rubberBandInset;	// 64 = 0x40
    double _mainWidth;	// 72 = 0x48
}

@property(nonatomic) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(nonatomic) double mainWidth; // @synthesize mainWidth=_mainWidth;
@property(nonatomic) double rubberBandInset; // @synthesize rubberBandInset=_rubberBandInset;
@property(nonatomic) double supplementaryOffscreenWidth; // @synthesize supplementaryOffscreenWidth=_supplementaryOffscreenWidth;
@property(nonatomic) double supplementaryWidth; // @synthesize supplementaryWidth=_supplementaryWidth;
@property(nonatomic) double trailingOffscreenWidth; // @synthesize trailingOffscreenWidth=_trailingOffscreenWidth;
@property(nonatomic) double trailingWidth; // @synthesize trailingWidth=_trailingWidth;
@property(nonatomic) double leadingOffscreenWidth; // @synthesize leadingOffscreenWidth=_leadingOffscreenWidth;
@property(nonatomic) double leadingWidth; // @synthesize leadingWidth=_leadingWidth;
- (id)_closestEqualOrLargerState:(id)arg1 returningDistance:(double *)arg2;	// IMP=0x000000000046cf2e
- (id)_closestEqualOrLargerState:(id)arg1;	// IMP=0x000000000046cf1a
- (id)_closestState:(id)arg1 returningDistance:(double *)arg2;	// IMP=0x000000000046ccfe
- (id)_closestState:(id)arg1;	// IMP=0x000000000046ccea
- (id)_matchingState:(id)arg1;	// IMP=0x000000000046cc84
- (unsigned long long)hash;	// IMP=0x000000000046cbdf
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000046c9df
- (id)description;	// IMP=0x000000000046c80c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000046c6ed
- (id)init;	// IMP=0x000000000046c6b5

@end

