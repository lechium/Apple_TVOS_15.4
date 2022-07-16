//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMapTable, NSMutableDictionary, NSMutableSet, NSTimer, UIView, _UIKBRTDecayingObject, _UIKBRTDecayingOffset, _UIKBRTTouchHistory, _UIKBRTTouchHistoryInfo;
@protocol _UIKBRTTouchDriftingDelegate;

__attribute__((visibility("hidden")))
@interface _UIKBRTTouchDrifting
{
    _Bool _supportsDrifting;	// 8 = 0x8
    _Bool _leftDriftRemovingItems;	// 9 = 0x9
    _Bool _rightDriftRemovingItems;	// 10 = 0xa
    id <_UIKBRTTouchDriftingDelegate> _delegate;	// 16 = 0x10
    NSArray *_indexSearchOrder;	// 24 = 0x18
    NSMutableDictionary *_touches;	// 32 = 0x20
    _UIKBRTTouchHistory *_fHistory;	// 40 = 0x28
    _UIKBRTTouchHistory *_jHistory;	// 48 = 0x30
    _UIKBRTTouchHistory *_otherHistory;	// 56 = 0x38
    _UIKBRTDecayingObject *_enableLatchObj;	// 64 = 0x40
    _UIKBRTDecayingOffset *_leftHandDriftOffsetObj;	// 72 = 0x48
    _UIKBRTDecayingOffset *_leftHandFixedOffsetObj;	// 80 = 0x50
    _UIKBRTDecayingOffset *_rightHandDriftOffsetObj;	// 88 = 0x58
    _UIKBRTDecayingOffset *_rightHandFixedOffsetObj;	// 96 = 0x60
    _UIKBRTTouchHistoryInfo *_leftIndexFingerInfo;	// 104 = 0x68
    NSMutableSet *_leftDriftLockTouchIDs;	// 112 = 0x70
    _UIKBRTTouchHistoryInfo *_rightIndexFingerInfo;	// 120 = 0x78
    NSMutableSet *_rightDriftLockTouchIDs;	// 128 = 0x80
    UIView *_feedbackParentView;	// 136 = 0x88
    NSTimer *_feedbackTimer;	// 144 = 0x90
    UIView *_leftDriftFeedbackView;	// 152 = 0x98
    UIView *_rightDriftFeedbackView;	// 160 = 0xa0
    UIView *_touchHistoryFeedbackView;	// 168 = 0xa8
    NSMapTable *_touchHistoryViewMap;	// 176 = 0xb0
    struct {
        double up;
        double down;
        double left;
        double right;
    } _touchError;	// 184 = 0xb8
}

+ (_Bool)isEnabled;	// IMP=0x00000000009e8e7c
- (void).cxx_destruct;	// IMP=0x00000000009ee2f8
@property(retain, nonatomic) NSMapTable *touchHistoryViewMap; // @synthesize touchHistoryViewMap=_touchHistoryViewMap;
@property(retain, nonatomic) UIView *touchHistoryFeedbackView; // @synthesize touchHistoryFeedbackView=_touchHistoryFeedbackView;
@property(retain, nonatomic) UIView *rightDriftFeedbackView; // @synthesize rightDriftFeedbackView=_rightDriftFeedbackView;
@property(retain, nonatomic) UIView *leftDriftFeedbackView; // @synthesize leftDriftFeedbackView=_leftDriftFeedbackView;
@property(retain, nonatomic) NSTimer *feedbackTimer; // @synthesize feedbackTimer=_feedbackTimer;
@property(nonatomic) __weak UIView *feedbackParentView; // @synthesize feedbackParentView=_feedbackParentView;
@property(nonatomic) _Bool rightDriftRemovingItems; // @synthesize rightDriftRemovingItems=_rightDriftRemovingItems;
@property(retain, nonatomic) NSMutableSet *rightDriftLockTouchIDs; // @synthesize rightDriftLockTouchIDs=_rightDriftLockTouchIDs;
@property(retain, nonatomic) _UIKBRTTouchHistoryInfo *rightIndexFingerInfo; // @synthesize rightIndexFingerInfo=_rightIndexFingerInfo;
@property(nonatomic) _Bool leftDriftRemovingItems; // @synthesize leftDriftRemovingItems=_leftDriftRemovingItems;
@property(retain, nonatomic) NSMutableSet *leftDriftLockTouchIDs; // @synthesize leftDriftLockTouchIDs=_leftDriftLockTouchIDs;
@property(retain, nonatomic) _UIKBRTTouchHistoryInfo *leftIndexFingerInfo; // @synthesize leftIndexFingerInfo=_leftIndexFingerInfo;
@property(retain, nonatomic) _UIKBRTDecayingOffset *rightHandFixedOffsetObj; // @synthesize rightHandFixedOffsetObj=_rightHandFixedOffsetObj;
@property(retain, nonatomic) _UIKBRTDecayingOffset *rightHandDriftOffsetObj; // @synthesize rightHandDriftOffsetObj=_rightHandDriftOffsetObj;
@property(retain, nonatomic) _UIKBRTDecayingOffset *leftHandFixedOffsetObj; // @synthesize leftHandFixedOffsetObj=_leftHandFixedOffsetObj;
@property(retain, nonatomic) _UIKBRTDecayingOffset *leftHandDriftOffsetObj; // @synthesize leftHandDriftOffsetObj=_leftHandDriftOffsetObj;
@property(retain, nonatomic) _UIKBRTDecayingObject *enableLatchObj; // @synthesize enableLatchObj=_enableLatchObj;
@property(nonatomic) _Bool supportsDrifting; // @synthesize supportsDrifting=_supportsDrifting;
@property(nonatomic) CDStruct_d2b197d1 touchError; // @synthesize touchError=_touchError;
@property(retain, nonatomic) _UIKBRTTouchHistory *otherHistory; // @synthesize otherHistory=_otherHistory;
@property(retain, nonatomic) _UIKBRTTouchHistory *jHistory; // @synthesize jHistory=_jHistory;
@property(retain, nonatomic) _UIKBRTTouchHistory *fHistory; // @synthesize fHistory=_fHistory;
@property(retain, nonatomic) NSMutableDictionary *touches; // @synthesize touches=_touches;
@property(retain, nonatomic) NSArray *indexSearchOrder; // @synthesize indexSearchOrder=_indexSearchOrder;
@property(nonatomic) id <_UIKBRTTouchDriftingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateDriftViewTimer:(id)arg1;	// IMP=0x00000000009edbe6
- (void)_updateDriftView;	// IMP=0x00000000009ec35b
- (struct CGPoint)_pinOffset:(struct CGPoint)arg1;	// IMP=0x00000000009ec278
- (struct CGPoint)_pointFromPoint:(struct CGPoint)arg1 plusOffset:(struct CGPoint)arg2;	// IMP=0x00000000009ec26a
- (struct CGPoint)_offsetForPoint:(struct CGPoint)arg1 fromPoint:(struct CGPoint)arg2;	// IMP=0x00000000009ec25c
- (void)_updateDriftForFingers:(id)arg1 leftHand:(_Bool)arg2 newestTouch:(id)arg3;	// IMP=0x00000000009eb806
- (void)_updateDriftWithTouchInfo:(id)arg1;	// IMP=0x00000000009eae08
- (id)_touchDictWithFingerIds:(id)arg1;	// IMP=0x00000000009ea9d9
- (void)_updateHistory;	// IMP=0x00000000009ea990
- (void)removeTouchWithIdentifier:(id)arg1 touchCancelled:(_Bool)arg2;	// IMP=0x00000000009ea623
- (void)moveTouchWithIdentifier:(id)arg1 toLocation:(struct CGPoint)arg2 withRadius:(double)arg3 atTouchTime:(double)arg4;	// IMP=0x00000000009ea329
- (void)ignoreTouchWithIdentifier:(id)arg1 withTouchTime:(double)arg2;	// IMP=0x00000000009e9f4f
- (void)updateTouchWithIdentifier:(id)arg1 withTouchTime:(double)arg2 resultingError:(struct CGPoint)arg3 rowOffsetFromHomeRow:(long long)arg4;	// IMP=0x00000000009e9cac
- (void)addTouchLocation:(struct CGPoint)arg1 withRadius:(double)arg2 withTouchTime:(double)arg3 withIdentifier:(id)arg4;	// IMP=0x00000000009e9a52
@property(readonly, nonatomic) struct CGPoint rightHandDriftOffset;
@property(readonly, nonatomic) struct CGPoint leftHandDriftOffset;
- (void)updateWithFCenter:(struct CGPoint)arg1 jCenter:(struct CGPoint)arg2 keySize:(struct CGSize)arg3 rowOffsets:(id)arg4 homeRowOffsetIndex:(int)arg5;	// IMP=0x00000000009e972e
- (void)reset;	// IMP=0x00000000009e94db
- (void)_resetFeedback;	// IMP=0x00000000009e9412
- (void)dealloc;	// IMP=0x00000000009e93d4
- (id)initWithParentView:(id)arg1;	// IMP=0x00000000009e9383
- (id)init;	// IMP=0x00000000009e8ea7

@end

