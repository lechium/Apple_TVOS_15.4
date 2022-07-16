//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface SSVServerAuthenticateResponse : NSObject <SSXPCCoding>
{
    NSNumber *_authenticatedAccountIdentifier;	// 8 = 0x8
    long long _performedButtonIndex;	// 16 = 0x10
    NSURL *_redirectURL;	// 24 = 0x18
    long long _selectedButtonIndex;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000116ff4
@property(nonatomic) long long selectedButtonIndex; // @synthesize selectedButtonIndex=_selectedButtonIndex;
@property(copy, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(nonatomic) long long performedButtonIndex; // @synthesize performedButtonIndex=_performedButtonIndex;
@property(copy, nonatomic) NSNumber *authenticatedAccountIdentifier; // @synthesize authenticatedAccountIdentifier=_authenticatedAccountIdentifier;
- (id)copyXPCEncoding;	// IMP=0x0000000000116f1e
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000116e13

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
