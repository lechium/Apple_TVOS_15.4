//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SASRecognition;

@interface SASClientBoundConfusionNetwork
{
}

+ (id)clientBoundConfusionNetworkWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000026123
+ (id)clientBoundConfusionNetwork;	// IMP=0x0000000000026111
- (_Bool)requiresResponse;	// IMP=0x0000000000026171
@property(copy, nonatomic) NSString *sessionId;
@property(retain, nonatomic) SASRecognition *rawRecognition;
- (id)encodedClassName;	// IMP=0x0000000000026104
- (id)groupIdentifier;	// IMP=0x00000000000260f0

@end
