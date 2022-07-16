//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject
{
    NSDate *_date;	// 8 = 0x8
}

+ (_Bool)prekeyShouldBeRolled:(id)arg1;	// IMP=0x0000000000015d42
+ (_Bool)prekeyCanBeDeleted:(id)arg1;	// IMP=0x0000000000015ba1
+ (_Bool)validateFetchedPrekeyTimestamp:(double)arg1 forEvaluationType:(unsigned long long)arg2;	// IMP=0x00000000000158f5
+ (id)debugDescriptionForAction:(unsigned long long)arg1;	// IMP=0x00000000000158ca
+ (double)timeIntervalAllowedForAction:(unsigned long long)arg1;	// IMP=0x000000000001589d
+ (id)oldestDateAllowedToSendTo;	// IMP=0x0000000000015828
+ (void)setNowDate:(id)arg1;	// IMP=0x00000000000157b6
+ (id)nowDate;	// IMP=0x0000000000015742
+ (id)sharedManager;	// IMP=0x00000000000156d0
- (void).cxx_destruct;	// IMP=0x0000000000015e93
@property(retain) NSDate *date; // @synthesize date=_date;

@end

