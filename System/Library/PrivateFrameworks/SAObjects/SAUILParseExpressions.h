//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SARemoteDevice;

@interface SAUILParseExpressions
{
}

+ (id)parseExpressionsWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000006ef8
+ (id)parseExpressions;	// IMP=0x0000000000006ee6
- (_Bool)requiresResponse;	// IMP=0x0000000000006f62
@property(retain, nonatomic) SARemoteDevice *targetDevice;
@property(copy, nonatomic) NSArray *expressions;
- (id)encodedClassName;	// IMP=0x0000000000006ed9
- (id)groupIdentifier;	// IMP=0x0000000000006ec5

@end
