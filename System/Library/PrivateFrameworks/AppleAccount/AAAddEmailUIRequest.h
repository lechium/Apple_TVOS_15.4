//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount;

@interface AAAddEmailUIRequest
{
    ACAccount *_account;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000016566
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)urlRequest;	// IMP=0x000000000001646b
- (id)urlString;	// IMP=0x00000000000163dd
- (id)initWithURLString:(id)arg1 account:(id)arg2;	// IMP=0x000000000001636b
- (id)initWithAccount:(id)arg1;	// IMP=0x0000000000016303

@end

