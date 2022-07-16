//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSData, NSString;

@interface SALocalSearchSendToProtobufConduitCompleted <SAServerBoundCommand>
{
}

+ (id)sendToProtobufConduitCompletedWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000028dff
+ (id)sendToProtobufConduitCompleted;	// IMP=0x0000000000028ded
- (_Bool)requiresResponse;	// IMP=0x0000000000028e2b
@property(copy, nonatomic) NSData *rawResponse;
- (id)encodedClassName;	// IMP=0x0000000000028de0
- (id)groupIdentifier;	// IMP=0x0000000000028dcc

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

