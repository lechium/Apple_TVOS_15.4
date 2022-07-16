//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AMSBagProtocol;

@interface AMSODISession : NSObject
{
    unsigned long long _accountType;	// 8 = 0x8
    NSString *_sessionIdentifier;	// 16 = 0x10
    id <AMSBagProtocol> _bag;	// 24 = 0x18
    NSString *_cacheIdentifier;	// 32 = 0x20
}

+ (_Bool)shouldUseODIWithBag:(id)arg1;	// IMP=0x00000000001b75de
- (void).cxx_destruct;	// IMP=0x00000000001b86fe
@property(copy, nonatomic) NSString *cacheIdentifier; // @synthesize cacheIdentifier=_cacheIdentifier;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) unsigned long long accountType; // @synthesize accountType=_accountType;
- (id)_createODISession;	// IMP=0x00000000001b7fd5
- (_Bool)updateWithAttributes:(id)arg1;	// IMP=0x00000000001b787f
- (id)getAssessment;	// IMP=0x00000000001b6f3b
- (id)initWithSessionIdentifier:(id)arg1 accountType:(unsigned long long)arg2 bag:(id)arg3;	// IMP=0x00000000001b6d00

@end

