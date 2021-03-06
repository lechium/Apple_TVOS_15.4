//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface RWIProtocolPageCookie
{
}

@property(nonatomic) long long sameSite;
@property(nonatomic) _Bool secure;
@property(nonatomic) _Bool httpOnly;
@property(nonatomic) _Bool session;
@property(nonatomic) double expires;
@property(copy, nonatomic) NSString *path;
@property(copy, nonatomic) NSString *domain;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSString *name;
- (id)initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 path:(id)arg4 expires:(double)arg5 session:(_Bool)arg6 httpOnly:(_Bool)arg7 secure:(_Bool)arg8 sameSite:(long long)arg9;	// IMP=0x00000000000520c6

@end

