//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIView;
@protocol AXUIFloatingViewPresenterDelegate;

@interface AXUIFloatingViewPresenter : NSObject
{
    _Bool _withinSafeArea;	// 8 = 0x8
    id <AXUIFloatingViewPresenterDelegate> _delegate;	// 16 = 0x10
    UIView *_containingView;	// 24 = 0x18
    unsigned long long _alignedEdge;	// 32 = 0x20
    UIView *_floatingView;	// 40 = 0x28
    NSArray *_edgeConstraints;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000010d16
@property(retain, nonatomic) NSArray *edgeConstraints; // @synthesize edgeConstraints=_edgeConstraints;
@property(retain, nonatomic) UIView *floatingView; // @synthesize floatingView=_floatingView;
@property(readonly, nonatomic) _Bool withinSafeArea; // @synthesize withinSafeArea=_withinSafeArea;
@property(nonatomic) unsigned long long alignedEdge; // @synthesize alignedEdge=_alignedEdge;
@property(readonly, nonatomic) UIView *containingView; // @synthesize containingView=_containingView;
@property(nonatomic) __weak id <AXUIFloatingViewPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateEdgeConstraints;	// IMP=0x0000000000010573
- (void)dismissFloatingView;	// IMP=0x000000000001050b
- (void)presentFloatingView:(id)arg1 withDuration:(double)arg2;	// IMP=0x000000000000ff14
- (void)_hideFloatingView;	// IMP=0x000000000000fd81
- (id)initWithContainingView:(id)arg1 alignedToEdge:(unsigned long long)arg2 withinSafeArea:(_Bool)arg3;	// IMP=0x000000000000fd00

@end

