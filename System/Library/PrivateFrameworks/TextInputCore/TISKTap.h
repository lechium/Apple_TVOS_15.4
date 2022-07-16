//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, TIKeyboardLayout, TIKeyboardTouchEvent;

@interface TISKTap : NSObject
{
    TIKeyboardTouchEvent *_firstTouch;	// 8 = 0x8
    TIKeyboardTouchEvent *_lastTouch;	// 16 = 0x10
    NSMutableArray *_dragTouches;	// 24 = 0x18
    long long _pathIndex;	// 32 = 0x20
    TIKeyboardLayout *_layout;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000177542
@property(retain, nonatomic) TIKeyboardLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) long long pathIndex; // @synthesize pathIndex=_pathIndex;
@property(retain, nonatomic) NSMutableArray *dragTouches; // @synthesize dragTouches=_dragTouches;
@property(retain, nonatomic) TIKeyboardTouchEvent *lastTouch; // @synthesize lastTouch=_lastTouch;
@property(retain, nonatomic) TIKeyboardTouchEvent *firstTouch; // @synthesize firstTouch=_firstTouch;
- (double)totalTapDistance;	// IMP=0x00000000001772ce
- (double)distance:(id)arg1 withTouch:(id)arg2;	// IMP=0x000000000017720c
- (id)stringForIntendedKey;	// IMP=0x000000000017710d
- (long long)_forcedKeyCode;	// IMP=0x00000000001770c8
- (struct CGRect)getFrameForKey:(id)arg1;	// IMP=0x0000000000176fa1
- (double)upErrorDistance:(struct CGRect)arg1;	// IMP=0x0000000000176f04
- (double)downErrorDistance:(struct CGRect)arg1;	// IMP=0x0000000000176e67
@property(readonly, nonatomic, getter=isDownUpTap) _Bool downup;
- (void)addDragTouch:(id)arg1;	// IMP=0x0000000000176e0e
@property(readonly, nonatomic) unsigned long long numberOfDrags;
- (id)init:(id)arg1 layout:(id)arg2;	// IMP=0x0000000000176d1a

@end

