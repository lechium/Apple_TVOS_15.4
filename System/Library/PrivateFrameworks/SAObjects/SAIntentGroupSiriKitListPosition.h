//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAIntentGroupSiriKitListPosition <SAAceSerializable>
{
}

+ (id)siriKitListPositionWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000140f1
+ (id)siriKitListPosition;	// IMP=0x00000000000140df
@property(copy, nonatomic) NSString *position;
@property(nonatomic) long long offset;
- (id)encodedClassName;	// IMP=0x00000000000140d2
- (id)groupIdentifier;	// IMP=0x00000000000140be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
