//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SAIntentGroupAceBargeInState <SAAceSerializable>
{
}

@property(copy, nonatomic) NSNumber *durationSincePreviousTTSStart;
@property(copy, nonatomic) NSNumber *durationSincePreviousTTSFinish;
@property(copy, nonatomic) NSArray *bargeInModes;
- (id)encodedClassName;	// IMP=0x0000000000010558
- (id)groupIdentifier;	// IMP=0x0000000000010544

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

