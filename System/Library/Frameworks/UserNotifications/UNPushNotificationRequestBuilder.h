//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface UNPushNotificationRequestBuilder : NSObject
{
    NSDictionary *_payload;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000018958
- (id)_sanitizeRelevanceScore:(id)arg1;	// IMP=0x0000000000018880
- (unsigned long long)_interruptionLevelForString:(id)arg1;	// IMP=0x00000000000187d3
- (id)_sanitizeInterruptionLevelString:(id)arg1;	// IMP=0x0000000000018732
- (id)_sanitizeUnsignedInteger:(id)arg1;	// IMP=0x0000000000018693
- (id)_sanitizeVolume:(id)arg1;	// IMP=0x00000000000185bf
- (id)_sanitizeFlag:(id)arg1;	// IMP=0x00000000000184a9
- (id)_sanitizeLocalizationArgumentsArray:(id)arg1;	// IMP=0x0000000000018363
- (id)_sanitizeStringArray:(id)arg1;	// IMP=0x000000000001829f
- (id)_sanitizeTopicIdentifier:(id)arg1;	// IMP=0x00000000000181bc
- (id)_sanitizeSound:(id)arg1;	// IMP=0x0000000000017f61
- (id)_sanitizeAlert:(id)arg1;	// IMP=0x0000000000017889
- (id)_sanitizeAPSDictionary:(id)arg1;	// IMP=0x00000000000173ad
- (id)buildSafePayload;	// IMP=0x00000000000170ff
- (id)buildNotificationRequest;	// IMP=0x00000000000163f3
- (id)initWithIdentifier:(id)arg1 payload:(id)arg2 bundleIdentifier:(id)arg3;	// IMP=0x000000000001630d

@end

