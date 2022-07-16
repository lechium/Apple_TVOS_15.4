//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, AMSDialogRequest, AMSDialogResult, AMSProcessInfo, NSError, NSString;
@protocol AMSBagProtocol;

@interface AMSHandleDialogResultTask
{
    ACAccount *_account;	// 8 = 0x8
    id <AMSBagProtocol> _bag;	// 16 = 0x10
    AMSProcessInfo *_clientInfo;	// 24 = 0x18
    NSString *_proxyBundleId;	// 32 = 0x20
    AMSDialogResult *_result;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000014f4a0
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) AMSDialogResult *result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *proxyBundleId; // @synthesize proxyBundleId=_proxyBundleId;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(copy, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)perform;	// IMP=0x000000000014dd4c
@property(readonly, nonatomic) AMSDialogRequest *request;
- (id)initWithResult:(id)arg1 bag:(id)arg2;	// IMP=0x000000000014dc5a
- (id)initWithRequest:(id)arg1 result:(id)arg2 error:(id)arg3 bag:(id)arg4;	// IMP=0x000000000014dc42

@end

