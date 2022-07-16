//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer, UIView;
@protocol UIAutoscrollContainer;

@interface UIAutoscroll : NSObject
{
    id m_target;	// 8 = 0x8
    struct CGPoint m_point;	// 16 = 0x10
    UIView<UIAutoscrollContainer> *m_scrollContainer;	// 32 = 0x20
    int m_directions;	// 40 = 0x28
    double m_repeatInterval;	// 48 = 0x30
    NSTimer *m_timer;	// 56 = 0x38
    unsigned long long m_count;	// 64 = 0x40
    _Bool m_active;	// 72 = 0x48
    _Bool m_disabled;	// 73 = 0x49
    id _target;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000eeffbd
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) _Bool disabled; // @synthesize disabled=m_disabled;
@property(nonatomic) _Bool active; // @synthesize active=m_active;
@property(nonatomic) unsigned long long count; // @synthesize count=m_count;
@property(nonatomic) double repeatInterval; // @synthesize repeatInterval=m_repeatInterval;
@property(nonatomic) int directions; // @synthesize directions=m_directions;
@property(nonatomic) struct CGPoint point; // @synthesize point=m_point;
@property(retain, nonatomic) UIView<UIAutoscrollContainer> *scrollContainer; // @synthesize scrollContainer=m_scrollContainer;
- (void)timerFired:(id)arg1;	// IMP=0x0000000000eefe77
- (void)invalidate;	// IMP=0x0000000000eefd92
- (_Bool)startAutoscroll:(id)arg1 scrollContainer:(id)arg2 point:(struct CGPoint)arg3 directions:(int)arg4 repeatInterval:(double)arg5;	// IMP=0x0000000000eef986
- (void)dealloc;	// IMP=0x0000000000eef948

@end

