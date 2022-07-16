//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNVCardLineFactory;

@interface CNVCardLineGenerator : NSObject
{
    NSString *_lineName;	// 8 = 0x8
    long long *_groupingCount;	// 16 = 0x10
    id <CNVCardLineFactory> _lineFactory;	// 24 = 0x18
}

+ (id)activityAlertGeneratorWithName:(id)arg1 groupingCount:(long long *)arg2;	// IMP=0x000000000001b61d
+ (id)streetAddressGeneratorWithName:(id)arg1 groupingCount:(long long *)arg2;	// IMP=0x000000000001b604
+ (id)phoneGeneratorWithName:(id)arg1 groupingCount:(long long *)arg2;	// IMP=0x000000000001b5eb
+ (id)emailGeneratorWithName:(id)arg1 groupingCount:(long long *)arg2;	// IMP=0x000000000001b5d2
+ (id)socialProfileGeneratorWithName:(id)arg1 groupingCount:(long long *)arg2;	// IMP=0x000000000001b5b9
+ (id)legacyInstantMessagingGeneratorWithName:(id)arg1 groupingCount:(long long *)arg2;	// IMP=0x000000000001b5a0
+ (id)instantMessagingGeneratorWithName:(id)arg1 groupingCount:(long long *)arg2;	// IMP=0x000000000001b587
+ (id)alternateDateComponentsGeneratorWithName:(id)arg1 groupingcount:(long long *)arg2;	// IMP=0x000000000001b56e
+ (id)dateComponentsGeneratorWithName:(id)arg1 groupingCount:(long long *)arg2;	// IMP=0x000000000001b555
+ (id)generatorWithName:(id)arg1 groupingCount:(long long *)arg2;	// IMP=0x000000000001b4fd
- (void).cxx_destruct;	// IMP=0x000000000001bb61
- (void)addPrimaryValueMarkerToLine:(id)arg1;	// IMP=0x000000000001bb3e
- (void)addCustomLabel:(id)arg1 toLine:(id)arg2;	// IMP=0x000000000001ba87
- (void)addStandardLabel:(id)arg1 toLine:(id)arg2;	// IMP=0x000000000001ba65
- (id)standardLabelsForLabel:(id)arg1;	// IMP=0x000000000001b991
- (id)makeLineWithName:(id)arg1 value:(id)arg2;	// IMP=0x000000000001b90b
- (id)lineWithValue:(id)arg1 label:(id)arg2;	// IMP=0x000000000001b6fb
- (id)initWithName:(id)arg1 groupingCount:(long long *)arg2;	// IMP=0x000000000001b636

@end
