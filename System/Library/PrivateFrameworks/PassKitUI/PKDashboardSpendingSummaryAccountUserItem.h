//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSString, PKAccountUser, PKFamilyMember, PKSpendingSummary;

@interface PKDashboardSpendingSummaryAccountUserItem : NSObject <PKDashboardItem>
{
    PKSpendingSummary *_spendingSummary;	// 8 = 0x8
    PKFamilyMember *_familyMember;	// 16 = 0x10
    PKAccountUser *_accountUser;	// 24 = 0x18
}

+ (id)identifier;	// IMP=0x00000000000bc775
- (void).cxx_destruct;	// IMP=0x00000000000bc7d3
@property(retain, nonatomic) PKAccountUser *accountUser; // @synthesize accountUser=_accountUser;
@property(retain, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property(retain, nonatomic) PKSpendingSummary *spendingSummary; // @synthesize spendingSummary=_spendingSummary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

