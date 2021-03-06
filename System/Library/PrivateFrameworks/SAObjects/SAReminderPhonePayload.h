//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAReminderPayload-Protocol.h>

@class NSString;

@interface SAReminderPhonePayload <SAReminderPayload>
{
}

+ (id)phonePayloadWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000159b1
+ (id)phonePayload;	// IMP=0x000000000001599f
@property(copy, nonatomic) NSString *recipient;
@property(copy, nonatomic) NSString *phoneCallType;
- (id)encodedClassName;	// IMP=0x0000000000015992
- (id)groupIdentifier;	// IMP=0x000000000001597e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

