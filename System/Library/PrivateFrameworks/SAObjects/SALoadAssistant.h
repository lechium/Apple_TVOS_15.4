//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSData, NSNumber, NSString;

@interface SALoadAssistant <SAServerBoundCommand>
{
}

+ (id)loadAssistantWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000035849
+ (id)loadAssistant;	// IMP=0x0000000000035837
- (_Bool)requiresResponse;	// IMP=0x0000000000035b17
@property(copy, nonatomic) NSString *speechId;
@property(copy, nonatomic) NSString *sharedUserId;
@property(copy, nonatomic) NSData *sessionValidationData;
@property(copy, nonatomic) NSString *loggableSharedUserId;
@property(copy, nonatomic) NSString *loggableAssistantId;
@property(copy, nonatomic) NSString *linkedSpeechId;
@property(copy, nonatomic) NSData *linkedSessionValidationData;
@property(copy, nonatomic) NSString *linkedAssistantId;
@property(copy, nonatomic) NSString *lastKnownAceHostOfCompanion;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSString *hubAssistantId;
@property(copy, nonatomic) NSArray *experiments;
@property(copy, nonatomic) NSNumber *deviceAuthVersion;
@property(copy, nonatomic) NSString *dataSharingOptInStatus;
@property(copy, nonatomic) NSString *connectionType;
@property(copy, nonatomic) NSString *connectionMode;
@property(copy, nonatomic) NSString *assistantId;
@property(copy, nonatomic) NSString *appleConnectSessionToken;
@property(copy, nonatomic) NSString *appleConnectServiceTicket;
@property(copy, nonatomic) NSData *activationToken;
- (id)encodedClassName;	// IMP=0x000000000003582a
- (id)groupIdentifier;	// IMP=0x0000000000035816

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

