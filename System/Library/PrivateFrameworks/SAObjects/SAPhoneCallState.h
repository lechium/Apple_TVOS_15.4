//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSString;

@interface SAPhoneCallState <SABackgroundContextObject>
{
}

+ (id)callStateWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003397a
+ (id)callState;	// IMP=0x0000000000033968
@property(nonatomic) _Bool incoming;
@property(nonatomic) _Bool active;
- (id)encodedClassName;	// IMP=0x000000000003395b
- (id)groupIdentifier;	// IMP=0x0000000000033947

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

