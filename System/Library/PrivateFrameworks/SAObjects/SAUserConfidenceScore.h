//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAUserConfidenceScore <SAAceSerializable>
{
}

+ (id)userConfidenceScoreWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000072b1
+ (id)userConfidenceScore;	// IMP=0x000000000000729f
@property(copy, nonatomic) NSString *sharedUserId;
@property(nonatomic) long long confidenceScore;
- (id)encodedClassName;	// IMP=0x0000000000007292
- (id)groupIdentifier;	// IMP=0x000000000000727e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

