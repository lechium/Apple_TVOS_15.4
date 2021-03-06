//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TIAdhocEventDispatcher : NSObject
{
    NSMutableDictionary *_eventSpecMap;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000073ffe
- (void).cxx_destruct;	// IMP=0x0000000000073dee
@property(retain, nonatomic) NSMutableDictionary *eventSpecMap; // @synthesize eventSpecMap=_eventSpecMap;
- (id)replacePeriodsInString:(id)arg1;	// IMP=0x0000000000073db0
- (id)loadEventSpecMapFromConfig:(id)arg1;	// IMP=0x00000000000738c5
- (void)dispatchEventForStatisticWithName:(id)arg1 andValue:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000734df
- (void)dispatchEventForStatisticWithName:(id)arg1 andValue:(long long)arg2;	// IMP=0x00000000000734ca
- (id)initFromConfig:(id)arg1;	// IMP=0x000000000007344c

@end

