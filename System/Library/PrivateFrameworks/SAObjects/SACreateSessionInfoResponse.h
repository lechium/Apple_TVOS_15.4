//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSNumber;

@interface SACreateSessionInfoResponse
{
}

+ (id)createSessionInfoResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000032fbb
+ (id)createSessionInfoResponse;	// IMP=0x0000000000032fa9
- (_Bool)requiresResponse;	// IMP=0x0000000000033009
@property(copy, nonatomic) NSNumber *validityDuration;
@property(copy, nonatomic) NSData *sessionInfo;
- (id)encodedClassName;	// IMP=0x0000000000032f9c
- (id)groupIdentifier;	// IMP=0x0000000000032f88

@end

