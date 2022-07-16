//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <ContactsUI/CNContactListBannerViewDelegate-Protocol.h>

@class CNContactFormatter, CNContactListBannerView, CNContactStore, CNUIContactsEnvironment, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNUIPeopleViewController : UITableViewController <CNContactListBannerViewDelegate>
{
    NSArray *_people;	// 8 = 0x8
    CNContactFormatter *_formatter;	// 16 = 0x10
    CNUIContactsEnvironment *_environment;	// 24 = 0x18
    CNContactListBannerView *_meBanner;	// 32 = 0x20
    CNContactStore *_contactStore;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000c9166
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNContactListBannerView *meBanner; // @synthesize meBanner=_meBanner;
@property(retain, nonatomic) CNUIContactsEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) CNContactFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) NSArray *people; // @synthesize people=_people;
- (void)bannerViewWasSelectedToPresentPeoplePicker:(id)arg1;	// IMP=0x00000000000c90bb
- (void)bannerView:(id)arg1 wasSelectedToPresentMeContact:(id)arg2;	// IMP=0x00000000000c90a1
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000c8ff6
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000c8e89
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000c8e45
- (void)showContact:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000c8bd7
- (void)viewDidLoad;	// IMP=0x00000000000c8886
- (id)descriptorForRequiredKeys;	// IMP=0x00000000000c8729
- (id)initWithEnvironment:(id)arg1 contactStore:(id)arg2;	// IMP=0x00000000000c864a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
