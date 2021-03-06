//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFSpeakableNamespaceProvider-Protocol.h>

@class NSDateFormatter, NSString;

@interface AFSUPFunctionProvider <AFSpeakableNamespaceProvider>
{
    NSDateFormatter *_dateFormatter;	// 8 = 0x8
    NSDateFormatter *_timeFormatter;	// 16 = 0x10
}

+ (_Bool)_shouldAutomaticallyProvideFunctions;	// IMP=0x0000000000082d8f
- (void).cxx_destruct;	// IMP=0x0000000000084b03
- (id)stringForExpression:(id)arg1 containsPrivacySensitiveContents:(_Bool *)arg2;	// IMP=0x0000000000084601
- (id)stringForExpression:(id)arg1;	// IMP=0x00000000000845ed
- (id)_callFunction:(id)arg1 withArguments:(id)arg2;	// IMP=0x0000000000084293
- (id)_peerInfoForContextIdentifier:(id)arg1;	// IMP=0x000000000008402a
- (id)_contextDeviceName:(id)arg1;	// IMP=0x0000000000083f1f
- (id)_contextRoomName:(id)arg1;	// IMP=0x0000000000083e14
- (id)_speechRecognitionUsageDescription:(id)arg1;	// IMP=0x0000000000083d6d
- (id)_siriUsageDescription:(id)arg1;	// IMP=0x0000000000083cc6
- (id)_meCardIdentifier:(id)arg1;	// IMP=0x0000000000083c76
- (id)_userNickName:(id)arg1;	// IMP=0x0000000000083c26
- (id)_userLastName:(id)arg1;	// IMP=0x0000000000083bd6
- (id)_userMiddleName:(id)arg1;	// IMP=0x0000000000083b86
- (id)_userFirstName:(id)arg1;	// IMP=0x0000000000083b36
- (id)_userFullName:(id)arg1;	// IMP=0x0000000000083ae6
- (id)_meCard;	// IMP=0x0000000000083752
- (id)_deviceModel;	// IMP=0x0000000000083748
- (id)_lowercaseString:(id)arg1;	// IMP=0x00000000000835ee
- (id)_tempInWeatherUnits:(id)arg1;	// IMP=0x00000000000834c1
- (id)_currentWeekday:(id)arg1;	// IMP=0x0000000000083440
- (id)_currentShortDate:(id)arg1;	// IMP=0x00000000000833b1
- (id)_currentLongDate:(id)arg1;	// IMP=0x0000000000083322
- (id)_currentTime:(id)arg1;	// IMP=0x0000000000083103
- (id)_dateFormattedWithFormatter:(id)arg1 arguments:(id)arg2;	// IMP=0x0000000000082ebf
- (id)initWithLocale:(id)arg1;	// IMP=0x0000000000082df1
- (id)init;	// IMP=0x0000000000082d97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

