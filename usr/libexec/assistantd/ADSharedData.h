//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFVoiceInfo, MISSING_TYPE, NSArray, NSDictionary, NSString;

@interface ADSharedData : NSObject
{
    _Bool _siriEnabled;	// 8 = 0x8
    MISSING_TYPE *_dictationEnabled;	// 9 = 0x9
    _Bool _cloudSyncEnabled;	// 10 = 0xa
    _Bool _shouldCensorSpeech;	// 11 = 0xb
    _Bool _isLocationSharingDevice;	// 12 = 0xc
    _Bool _isRemotePlaybackDevice;	// 13 = 0xd
    NSString *_assistantId;	// 16 = 0x10
    NSString *_loggingAssistantId;	// 24 = 0x18
    NSString *_speechId;	// 32 = 0x20
    NSString *_sharedUserId;	// 40 = 0x28
    NSString *_loggingSharedUserId;	// 48 = 0x30
    NSString *_previousLanguageCode;	// 56 = 0x38
    NSString *_languageCode;	// 64 = 0x40
    AFVoiceInfo *_previousOutputVoice;	// 72 = 0x48
    AFVoiceInfo *_outputVoice;	// 80 = 0x50
    NSString *_hostname;	// 88 = 0x58
    NSString *_userAgent;	// 96 = 0x60
    NSArray *_notificationPreviewRestrictedApps;	// 104 = 0x68
    NSString *_temperatureUnit;	// 112 = 0x70
    NSString *_airplayRouteId;	// 120 = 0x78
    NSString *_storeFrontId;	// 128 = 0x80
    NSString *_ekToken;	// 136 = 0x88
    NSString *_userToken;	// 144 = 0x90
    NSString *_userAssignedName;	// 152 = 0x98
    NSDictionary *_utsRequiredRequestKeyValuePairs;	// 160 = 0xa0
    NSString *_dataSharingOptInStatus;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00200000000a97f4
@property(copy, nonatomic) NSString *dataSharingOptInStatus; // @synthesize dataSharingOptInStatus=_dataSharingOptInStatus;
@property(copy, nonatomic) NSDictionary *utsRequiredRequestKeyValuePairs; // @synthesize utsRequiredRequestKeyValuePairs=_utsRequiredRequestKeyValuePairs;
@property(copy, nonatomic) NSString *userAssignedName; // @synthesize userAssignedName=_userAssignedName;
@property(nonatomic) _Bool isRemotePlaybackDevice; // @synthesize isRemotePlaybackDevice=_isRemotePlaybackDevice;
@property(copy, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(copy, nonatomic) NSString *ekToken; // @synthesize ekToken=_ekToken;
@property(copy, nonatomic) NSString *storeFrontId; // @synthesize storeFrontId=_storeFrontId;
@property(copy, nonatomic) NSString *airplayRouteId; // @synthesize airplayRouteId=_airplayRouteId;
@property(copy, nonatomic) NSString *temperatureUnit; // @synthesize temperatureUnit=_temperatureUnit;
@property(copy, nonatomic) NSArray *notificationPreviewRestrictedApps; // @synthesize notificationPreviewRestrictedApps=_notificationPreviewRestrictedApps;
@property(nonatomic) _Bool isLocationSharingDevice; // @synthesize isLocationSharingDevice=_isLocationSharingDevice;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) _Bool shouldCensorSpeech; // @synthesize shouldCensorSpeech=_shouldCensorSpeech;
@property(nonatomic) _Bool cloudSyncEnabled; // @synthesize cloudSyncEnabled=_cloudSyncEnabled;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(copy, nonatomic) AFVoiceInfo *outputVoice; // @synthesize outputVoice=_outputVoice;
@property(copy, nonatomic) AFVoiceInfo *previousOutputVoice; // @synthesize previousOutputVoice=_previousOutputVoice;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSString *previousLanguageCode; // @synthesize previousLanguageCode=_previousLanguageCode;
@property(copy, nonatomic) NSString *loggingSharedUserId; // @synthesize loggingSharedUserId=_loggingSharedUserId;
@property(copy, nonatomic) NSString *sharedUserId; // @synthesize sharedUserId=_sharedUserId;
@property(copy, nonatomic) NSString *speechId; // @synthesize speechId=_speechId;
@property(copy, nonatomic) NSString *loggingAssistantId; // @synthesize loggingAssistantId=_loggingAssistantId;
@property(copy, nonatomic) NSString *assistantId; // @synthesize assistantId=_assistantId;
@property(nonatomic) _Bool dictationEnabled; // @synthesize dictationEnabled=_dictationEnabled;
@property(nonatomic) _Bool siriEnabled; // @synthesize siriEnabled=_siriEnabled;
- (id)description;	// IMP=0x00100000000a91aa

@end

