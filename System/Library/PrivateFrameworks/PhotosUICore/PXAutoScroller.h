//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PXAnonymousScrollView, PXAutoScrollerDelegate;

@interface PXAutoScroller : NSObject
{
    struct {
        _Bool didAutoscrollWithTimestamp;
    } _delegateRespondsTo;	// 8 = 0x8
    _Bool __repeating;	// 9 = 0x9
    NSObject<PXAnonymousScrollView> *_scrollView;	// 16 = 0x10
    id <PXAutoScrollerDelegate> _delegate;	// 24 = 0x18
    double __margin;	// 32 = 0x20
    double __maximumSpeed;	// 40 = 0x28
    double __lastUpdateTimestamp;	// 48 = 0x30
    struct CGPoint __autoscrollDirection;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003932e3
@property(nonatomic, setter=_setLastUpdateTimestamp:) double _lastUpdateTimestamp; // @synthesize _lastUpdateTimestamp=__lastUpdateTimestamp;
@property(nonatomic, getter=_isRepeating, setter=_setRepeating:) _Bool _repeating; // @synthesize _repeating=__repeating;
@property(nonatomic, setter=_setAutoscrollDirection:) struct CGPoint _autoscrollDirection; // @synthesize _autoscrollDirection=__autoscrollDirection;
@property(readonly, nonatomic) double _maximumSpeed; // @synthesize _maximumSpeed=__maximumSpeed;
@property(readonly, nonatomic) double _margin; // @synthesize _margin=__margin;
@property(nonatomic) __weak id <PXAutoScrollerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<PXAnonymousScrollView> *scrollView; // @synthesize scrollView=_scrollView;
- (_Bool)autoscrollWithOffset:(struct CGPoint)arg1;	// IMP=0x0000000000393129
- (void)stopRepeating;	// IMP=0x0000000000393082
- (void)startRepeating;	// IMP=0x0000000000392fdb
- (struct CGRect)visibleRectForScrollView:(id)arg1;	// IMP=0x0000000000392f2b
- (void)updateWithTimestamp:(double)arg1;	// IMP=0x0000000000392dbd
- (void)stop;	// IMP=0x0000000000392d9b
- (void)updateWithUserInteractionLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x0000000000392c6e
- (id)initWithTargetScrollView:(id)arg1;	// IMP=0x0000000000392b90
- (id)init;	// IMP=0x0000000000392b16

@end

