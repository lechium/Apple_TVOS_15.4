//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASettingSettingsAction-Protocol.h>

@class NSString;

@interface SASettingOpenVoiceOver <SASettingSettingsAction>
{
}

+ (id)openVoiceOverWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002e858
+ (id)openVoiceOver;	// IMP=0x000000000002e846
- (_Bool)requiresResponse;	// IMP=0x000000000002e862
- (id)encodedClassName;	// IMP=0x000000000002e839
- (id)groupIdentifier;	// IMP=0x000000000002e825

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
