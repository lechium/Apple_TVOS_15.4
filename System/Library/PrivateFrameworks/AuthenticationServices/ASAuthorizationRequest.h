//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthenticationServices/NSCopying-Protocol.h>
#import <AuthenticationServices/NSSecureCoding-Protocol.h>

@protocol ASAuthorizationProvider;

@interface ASAuthorizationRequest : NSObject <NSCopying, NSSecureCoding>
{
    id <ASAuthorizationProvider> _provider;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003392
+ (id)new;	// IMP=0x00000000000032e4
- (void).cxx_destruct;	// IMP=0x00000000000033be
@property(readonly, nonatomic) id <ASAuthorizationProvider> provider; // @synthesize provider=_provider;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000033a9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000033a0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000339a
- (id)initWithProvider:(id)arg1;	// IMP=0x0000000000003327
- (id)init;	// IMP=0x00000000000032fc

@end

