//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SAIntentGroupGetAppInfo
{
}

+ (id)getAppInfoWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002974c
+ (id)getAppInfo;	// IMP=0x000000000002973a
- (_Bool)mutatingCommand;	// IMP=0x00000000000297be
- (_Bool)requiresResponse;	// IMP=0x00000000000297b6
@property(nonatomic) _Bool shouldSearchLocallyOnly;
@property(copy, nonatomic) NSArray *appIdentifyingInfo;
- (id)encodedClassName;	// IMP=0x000000000002972d
- (id)groupIdentifier;	// IMP=0x0000000000029719

@end
