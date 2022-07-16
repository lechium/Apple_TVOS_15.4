//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSPredicate, NSString, TPSContextualDuetEvent;

@interface TPSAnalyticsUsageInfo : NSObject
{
    _Bool _overrideHoldout;	// 8 = 0x8
    NSDate *_firstShownDate;	// 16 = 0x10
    NSPredicate *_usagePredicate;	// 24 = 0x18
    TPSContextualDuetEvent *_usageEvent;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    unsigned long long _desiredOutcomeCount;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000013692
@property(nonatomic) unsigned long long desiredOutcomeCount; // @synthesize desiredOutcomeCount=_desiredOutcomeCount;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) TPSContextualDuetEvent *usageEvent; // @synthesize usageEvent=_usageEvent;
@property(retain, nonatomic) NSPredicate *usagePredicate; // @synthesize usagePredicate=_usagePredicate;
@property(retain, nonatomic) NSDate *firstShownDate; // @synthesize firstShownDate=_firstShownDate;
@property(nonatomic) _Bool overrideHoldout; // @synthesize overrideHoldout=_overrideHoldout;

@end

