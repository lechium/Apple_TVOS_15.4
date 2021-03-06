//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _CDAutoSuConfig : NSObject
{
    _Bool _alwaysFallBackToDefault;	// 8 = 0x8
    _Bool _alwaysReturnUnlockNow;	// 9 = 0x9
    _Bool _allowUnlockBeforeNow;	// 10 = 0xa
    int _restrictionStartInSlot;	// 12 = 0xc
    int _restrictionEndInSlot;	// 16 = 0x10
    int _suStartDefaultTime;	// 20 = 0x14
    int _suEndDefaultTimeOffsetFromSuStart;	// 24 = 0x18
    int _unlockMarginInSlot;	// 28 = 0x1c
    double _unlockThreshold;	// 32 = 0x20
    double _startThreshold;	// 40 = 0x28
    double _endThreshold;	// 48 = 0x30
}

@property(nonatomic) int unlockMarginInSlot; // @synthesize unlockMarginInSlot=_unlockMarginInSlot;
@property(nonatomic) double endThreshold; // @synthesize endThreshold=_endThreshold;
@property(nonatomic) double startThreshold; // @synthesize startThreshold=_startThreshold;
@property(nonatomic) double unlockThreshold; // @synthesize unlockThreshold=_unlockThreshold;
@property(nonatomic) _Bool allowUnlockBeforeNow; // @synthesize allowUnlockBeforeNow=_allowUnlockBeforeNow;
@property(nonatomic) _Bool alwaysReturnUnlockNow; // @synthesize alwaysReturnUnlockNow=_alwaysReturnUnlockNow;
@property(nonatomic) _Bool alwaysFallBackToDefault; // @synthesize alwaysFallBackToDefault=_alwaysFallBackToDefault;
@property(nonatomic) int suEndDefaultTimeOffsetFromSuStart; // @synthesize suEndDefaultTimeOffsetFromSuStart=_suEndDefaultTimeOffsetFromSuStart;
@property(nonatomic) int suStartDefaultTime; // @synthesize suStartDefaultTime=_suStartDefaultTime;
@property(nonatomic) int restrictionEndInSlot; // @synthesize restrictionEndInSlot=_restrictionEndInSlot;
@property(nonatomic) int restrictionStartInSlot; // @synthesize restrictionStartInSlot=_restrictionStartInSlot;
- (void)setParam;	// IMP=0x0000000000009f3a
- (_Bool)validParam;	// IMP=0x0000000000009eb1
- (int)readConfig;	// IMP=0x00000000000093ec

@end

