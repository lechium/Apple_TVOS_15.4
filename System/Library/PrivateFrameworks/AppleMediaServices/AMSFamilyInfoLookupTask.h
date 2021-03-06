//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class ACAccount, NSString;
@protocol AMSBagProtocol;

@interface AMSFamilyInfoLookupTask <AMSBagConsumer>
{
    ACAccount *_account;	// 8 = 0x8
    id <AMSBagProtocol> _bag;	// 16 = 0x10
    NSString *_logKey;	// 24 = 0x18
}

+ (id)bagKeySet;	// IMP=0x0000000000122a74
+ (id)_processURLResult:(id)arg1;	// IMP=0x00000000001215ee
+ (id)createBagForSubProfile;	// IMP=0x0000000000120881
+ (id)bagSubProfileVersion;	// IMP=0x0000000000120831
+ (id)bagSubProfile;	// IMP=0x00000000001207e1
- (void).cxx_destruct;	// IMP=0x0000000000122ad4
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)initWithBagContract:(id)arg1;	// IMP=0x00000000001229f6
- (id)initWithBag:(id)arg1;	// IMP=0x0000000000122955
- (id)_pathForCachedFamilyInfoLookupResult;	// IMP=0x000000000012277b
- (id)_currentCachedFamilyInfo;	// IMP=0x0000000000122441
- (id)_cachedFamilyInfoLookupResultForAccount:(id)arg1;	// IMP=0x0000000000121e38
- (void)_cacheFamilyInfoLookupResult:(id)arg1 forAccount:(id)arg2;	// IMP=0x00000000001216c8
- (id)_performFamilyInfoRequestForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001211de
- (id)performFamilyInfoLookup;	// IMP=0x000000000012091b
- (id)initWithAccount:(id)arg1 bag:(id)arg2;	// IMP=0x000000000012071d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

