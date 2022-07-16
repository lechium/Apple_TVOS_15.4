//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore;
@protocol CNScheduler, CNSchedulerProvider;

__attribute__((visibility("hidden")))
@interface CNReputationContactsAdapter : NSObject
{
    CNContactStore *_contactStore;	// 8 = 0x8
    id <CNSchedulerProvider> _schedulerProvider;	// 16 = 0x10
    id <CNScheduler> _storeScheduler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c7368
@property(readonly, nonatomic) id <CNScheduler> storeScheduler; // @synthesize storeScheduler=_storeScheduler;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)contactsForPredicate:(id)arg1 keys:(id)arg2;	// IMP=0x00000000000c71da
- (id)contactsForPhoneNumber:(id)arg1;	// IMP=0x00000000000c70df
- (id)contactsForEmailAddress:(id)arg1;	// IMP=0x00000000000c6eb4
- (id)initWithContactStore:(id)arg1 schedulerProvider:(id)arg2;	// IMP=0x00000000000c6de7
- (id)initWithContactStore:(id)arg1;	// IMP=0x00000000000c6d61
- (id)init;	// IMP=0x00000000000c6d21

@end
