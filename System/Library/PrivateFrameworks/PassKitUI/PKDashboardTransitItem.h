//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSArray, NSString, PKPassView, PKPaymentPass, PKTransitBalanceModel;

@interface PKDashboardTransitItem : NSObject <PKDashboardItem>
{
    PKPassView *_passView;	// 8 = 0x8
    unsigned long long _transitItemType;	// 16 = 0x10
    PKTransitBalanceModel *_transitBalanceModel;	// 24 = 0x18
    NSArray *_transitCommutePlans;	// 32 = 0x20
}

+ (id)identifier;	// IMP=0x00000000000bbda4
- (void).cxx_destruct;	// IMP=0x00000000000bbdf9
@property(copy, nonatomic) NSArray *transitCommutePlans; // @synthesize transitCommutePlans=_transitCommutePlans;
@property(retain, nonatomic) PKTransitBalanceModel *transitBalanceModel; // @synthesize transitBalanceModel=_transitBalanceModel;
@property(nonatomic) unsigned long long transitItemType; // @synthesize transitItemType=_transitItemType;
@property(readonly, nonatomic) PKPaymentPass *pass;
- (id)initWithPassView:(id)arg1;	// IMP=0x00000000000bbd23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

