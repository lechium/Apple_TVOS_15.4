//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class ACAccount, NSString;
@protocol AMSBagProtocol;

@interface AMSAutomaticDownloadKindsFetchTask <AMSBagConsumer>
{
    ACAccount *_account;	// 8 = 0x8
    id <AMSBagProtocol> _bag;	// 16 = 0x10
}

+ (id)bagKeySet;	// IMP=0x00000000000a1a0b
+ (id)createBagForSubProfile;	// IMP=0x00000000000a1971
+ (id)bagSubProfileVersion;	// IMP=0x00000000000a1921
+ (id)bagSubProfile;	// IMP=0x00000000000a18d1
- (void).cxx_destruct;	// IMP=0x00000000000a1a46
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)perform;	// IMP=0x00000000000a0d57
- (id)initWithAccount:(id)arg1 bag:(id)arg2;	// IMP=0x00000000000a0cb5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

