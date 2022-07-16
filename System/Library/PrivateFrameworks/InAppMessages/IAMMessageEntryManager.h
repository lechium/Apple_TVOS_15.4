//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface IAMMessageEntryManager : NSObject
{
    NSDictionary *_messageEntryByIdentifier;	// 8 = 0x8
    NSDictionary *_priorityMessageEntryByIdentifier;	// 16 = 0x10
    NSDictionary *_messageEntriesByEventTriggers;	// 24 = 0x18
    NSDictionary *_messageEntriesByContextPropertyTriggers;	// 32 = 0x20
    NSDictionary *_messageEntriesByUnknownKindTriggers;	// 40 = 0x28
    NSDictionary *_messageEntriesByTargetIdentifier;	// 48 = 0x30
    NSArray *_messageEntries;	// 56 = 0x38
    NSString *_modalTargetIdentifier;	// 64 = 0x40
}

+ (void)_addMessageEntry:(id)arg1 toTriggerKeyDictionary:(id)arg2 atKey:(id)arg3;	// IMP=0x000000000000637e
+ (id)uniqueMessageEntriesInMessageEntriesByTrigger:(id)arg1;	// IMP=0x00000000000060d4
+ (id)messageEntries:(id)arg1 withSatisfiedPresentationTriggerForTriggerContext:(id)arg2;	// IMP=0x0000000000005bf2
+ (id)targetIdentifiersForMessageEntries:(id)arg1;	// IMP=0x00000000000059d8
- (void).cxx_destruct;	// IMP=0x0000000000007715
@property(copy, nonatomic) NSString *modalTargetIdentifier; // @synthesize modalTargetIdentifier=_modalTargetIdentifier;
@property(copy, nonatomic) NSArray *messageEntries; // @synthesize messageEntries=_messageEntries;
- (void)_updateMessageIndexes;	// IMP=0x0000000000006472
- (void)addPriorityMessageEntry:(id)arg1;	// IMP=0x00000000000062b1
- (id)messageEntriesByTriggerForEventContext:(id)arg1;	// IMP=0x0000000000004e41
- (id)messageEntriesForContextPropertiesContext:(id)arg1;	// IMP=0x0000000000004973
- (id)messageEntriesForTargetIdentifier:(id)arg1;	// IMP=0x000000000000495d
- (id)priorityMessageEntryForIdentifier:(id)arg1;	// IMP=0x0000000000004947
- (id)messageEntryForIdentifier:(id)arg1;	// IMP=0x0000000000004931
- (id)initWithModalTargetIdentifier:(id)arg1;	// IMP=0x00000000000045f3

@end

